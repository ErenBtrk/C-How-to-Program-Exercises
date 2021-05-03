#include <stdio.h>
#include <conio.h>

struct musteriVerileri{
    int hesapNo;
    char isim[20];
    char soyIsim[20];
    double borc;
};

typedef struct musteriVerileri Veri;

int secimFonksiyonu(void);
void dosyaYazdir(FILE *);
void yeniHesap(FILE *);
void hesapGuncelle(FILE *);
void hesapSil(FILE *);

int main(){
	FILE *eakPtr;
	int secim;

        if((eakPtr=fopen("eskiAnaKayit.dat","rb+"))==NULL){
            printf("eskiAnaKayit.dat dosyasi acilamadi.\n");
        }
        else{
            while((secim=secimFonksiyonu())!=5){
                    switch(secim){
                        case 1:
                            dosyaYazdir(eakPtr);
                            break;
                        case 2:
                            yeniHesap(eakPtr);
                            break;
                        case 3:
                            hesapGuncelle(eakPtr);
                            break;
                        case 4:
                            hesapSil(eakPtr);
                            break;
                        default:
                            printf("Hatali giris.\n");

                    }
                }
                fclose(eakPtr);
                printf("eskiAnaKayit.dat dosyasi kapatilarak cikis yapildi.\n");
            }




	getch();
	return 0;
}

int secimFonksiyonu(void){
    int secim;

    printf("**********************************\n"
           "[1]-\"eskiAnaKayit.txt dosyasini yazdir.\"\n"
           "[2]-Yeni hesap olustur.\n"
           "[3]-Hesap guncelle.\n"
           "[4]-Hesap sil.\n"
           "[5]-Cikis yap.\n"
           "**********************************\n");
    printf("Seciminizi giriniz:");
    scanf("%d",&secim);

    return secim;

}

void yeniHesap(FILE *eakPtr){
    Veri musteri={0,"","",0.0};
    int hesapNum;

    printf("Hesap no. giriniz:");
    scanf("%d",&hesapNum);
    fseek(eakPtr,(hesapNum-1)*sizeof(struct musteriVerileri),SEEK_SET);
    fread(&musteri,sizeof(struct musteriVerileri),1,eakPtr);
    if(musteri.hesapNo!=0){
        printf("[%d] no.'lu hesap bulunmaktadir.\n",hesapNum);
    }
    else{
        musteri.hesapNo=hesapNum;
        printf("Isim,soyisim ve borc miktarini giriniz:\n");
        scanf("%s%s%lf",musteri.isim,musteri.soyIsim,&musteri.borc);
        fseek(eakPtr,(hesapNum-1)*sizeof(struct musteriVerileri),SEEK_SET);
        fwrite(&musteri,sizeof(struct musteriVerileri),1,eakPtr);
    }
}

void hesapGuncelle(FILE *eakPtr){
    Veri musteri={0,"","",0.0};
    int hesapNum;
    double guncelle;

    printf("Guncellenecek hesap no.'yu giriniz:");
    scanf("%d",&hesapNum);
    fseek(eakPtr,(hesapNum-1)*sizeof(struct musteriVerileri),SEEK_SET);
    fread(&musteri,sizeof(struct musteriVerileri),1,eakPtr);
    if(musteri.hesapNo==0){
        printf("[%d] no.'lu hesap bulunmamaktadir.\n",hesapNum);
    }
    else{
        musteri.hesapNo=hesapNum;
        printf("%d  %s  %s  %f\n",musteri.hesapNo,musteri.isim,musteri.soyIsim,musteri.borc);
        printf("Borc ekleme(+) veya borc odeme(-) icin miktar giriniz:\n");
        scanf("%lf",&guncelle);
        musteri.borc+=guncelle;
        fseek(eakPtr,(hesapNum-1)*sizeof(struct musteriVerileri),SEEK_SET);
        fwrite(&musteri,sizeof(struct musteriVerileri),1,eakPtr);
    }


}

void hesapSil(FILE *eakPtr){
    Veri bosVeri={0,"","",0.0};
    Veri musteri;
    int hesapNum;

    printf("Silinmesini istediginiz hesap no.'yu giriniz:");
    scanf("%d",&hesapNum);
    fseek(eakPtr,(hesapNum-1)*sizeof(struct musteriVerileri),SEEK_SET);
    fread(&musteri,sizeof(struct musteriVerileri),1,eakPtr);
    if(musteri.hesapNo==0){
            printf("[%d] no.'lu hesap bulunmamaktadir.\n",hesapNum);
    }
    else{
        fseek(eakPtr,(hesapNum-1)*sizeof(struct musteriVerileri),SEEK_SET);
        fwrite(&bosVeri,sizeof(struct musteriVerileri),1,eakPtr);
        printf("\n[%d] no.'lu hesap silindi.\n\n",hesapNum);
    }

}

void dosyaYazdir(FILE *eakPtr){
    Veri musteri={0,"","",0.0};
    FILE *yazPtr;

    if((yazPtr=fopen("eskiAnaKayit.txt","w"))==NULL){
        printf("eskiAnaKayit.txt dosyasi acilamadi.\n");
    }
    else{
        rewind(eakPtr);
        fprintf(yazPtr,"%s   %s   %s   %s\n","HesapNo","Isim","Soyisim","Borc");
        while(!feof(eakPtr)){
            fread(&musteri,sizeof(struct musteriVerileri),1,eakPtr);
            if(musteri.hesapNo!=0){
            fprintf(yazPtr,"%d    %s    %s    %f\n",musteri.hesapNo,musteri.isim,musteri.soyIsim,musteri.borc);
            }
        }
        printf("eskiAnaKayit.txt dosyasina yazdirma islemi tamamlandi.\n");
        fclose(yazPtr);
    }







}
