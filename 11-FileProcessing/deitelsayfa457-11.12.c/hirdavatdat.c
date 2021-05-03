#include <stdio.h>
#include <conio.h>

struct urunler{
    int kayitNo;
    char ad[20];
    int miktar;
    double ucret;
};

typedef struct urunler Urun;

int secimFonksiyonu(void);
void hirdavatdatOlustur(void);
void yeniUrunKaydi(FILE *);
void urunKaydiGuncelle(FILE *);
void urunKaydiSil(FILE *);
void dosyayaYaz(FILE *);
void dosyaSil(void);

int main(){
    int secim1;
    printf("Bos bir hirdavat.dat dosyasi olusturmak icin \"1\"\n"
           "Dosyayi olusturmadan devam etmek icin \"2\" giriniz:");
    scanf("%d",&secim1);
    switch(secim1){
    case 1:
        hirdavatdatOlustur();
        break;
    case 2:
        printf("Devam ediliyor...\n");
        break;
    }

    FILE *hPtr;
    int secim2;

    if((hPtr=fopen("hirdavat.dat","rb+"))==NULL){
        printf("hirdavat.dat dosyasi acilamadi.\n");
    }
    else{
        while((secim2=secimFonksiyonu())!=6){
            switch(secim2){
                case 1:
                       dosyayaYaz(hPtr);
                       break;
                case 2:
                        yeniUrunKaydi(hPtr);
                        break;
                case 3:
                        urunKaydiGuncelle(hPtr);
                        break;
                case 4:
                        urunKaydiSil(hPtr);
                        break;
                case 5:
                        dosyaSil();
                        break;
                default:
                        printf("Hatali giris...\n");
                        break;
            }
        }
        fclose(hPtr);
        printf("hirdavat.dat dosyasi kapatilarak cikis yapildi...\n");
    }




	getch();
	return 0;
}

int secimFonksiyonu(void){
    int secim;

    printf("\n\n***************************************\n"
           "[1]-hirdavat.txt dosyasina yazdir.\n"
           "[2]-Yeni urun kaydi olustur.\n"
           "[3]-Urun kaydi guncelle.\n"
           "[4]-Urun kaydi sil.\n"
           "[5]-hirdavat.dat dosyasini sil.\n"
           "[6]-Cikis yap.\n"
           "***************************************\n\n");
    printf("Seciminizi giriniz:");
    scanf("%d",&secim);

    return secim;

}

void hirdavatdatOlustur(void){
    FILE *hPtr;
    Urun veri={0,"",0,0.0};
    int i;

    if((hPtr=fopen("hirdavat.dat","w"))==NULL){
        printf("hirdavat.dat dosyasi acilamadi.\n");
    }
    else{
        for(i=1;i<=100;i++){
            fwrite(&veri,sizeof(struct urunler),1,hPtr);
        }
        printf("\n\nhirdavat.dat dosyasi olusturuldu.\n\n");
        fclose(hPtr);
    }
}

void yeniUrunKaydi(FILE *hPtr){
    Urun veri={0,"",0,0.0};
    int kayitNum;

    printf("Yeni urun icin kayit no. giriniz:");
    scanf("%d",&kayitNum);
    fseek(hPtr,(kayitNum-1)*sizeof(struct urunler),SEEK_SET);
    fread(&veri,sizeof(struct urunler),1,hPtr);
    if(veri.kayitNo!=0){
        printf("[%d] kayit no.'lu urun bilgisi bulunmaktadir.\n",kayitNum);
    }
    else{
        veri.kayitNo=kayitNum;
        printf("Urun adini,miktarini ve ucretini giriniz:");
        scanf("%s%d%lf",veri.ad,&veri.miktar,&veri.ucret);
        fseek(hPtr,(kayitNum-1)*sizeof(struct urunler),SEEK_SET);
        fwrite(&veri,sizeof(struct urunler),1,hPtr);
        printf("[%d] kayit no.'lu urunun kaydi gerceklestirildi.\n",kayitNum);
    }

}

void urunKaydiGuncelle(FILE *hPtr){
    Urun veri={0,"",0,0.0};
    int kayitNum;
    int urunEkle;
    double fiyat;

    printf("Guncellemek istediginiz kayit no. giriniz:");
    scanf("%d",&kayitNum);
    fseek(hPtr,(kayitNum-1)*sizeof(struct urunler),SEEK_SET);
    fread(&veri,sizeof(struct urunler),1,hPtr);
    if(veri.kayitNo==0){
        printf("[%d] no'lu kayit bulunmamaktadir.\n",kayitNum);
    }
    else{
        printf("\n%d  %s  %d  %f\n",veri.kayitNo,veri.ad,veri.miktar,veri.ucret);
        printf("Urun eklemek(+) veya urun cikarmak(-) icin miktar giriniz:");
        scanf("%d",&urunEkle);
        veri.miktar+=urunEkle;
        printf("Urun ucretinde artirma(+) veya azaltma(-) yapmak icin fiyat giriniz:");
        scanf("%lf",&fiyat);
        veri.ucret+=fiyat;
        fseek(hPtr,(kayitNum-1)*sizeof(struct urunler),SEEK_SET);
        fwrite(&veri,sizeof(struct urunler),1,hPtr);
        printf("[%d] kayit no.'lu urunun guncelleme islemi tamamlandi.\n",kayitNum);
    }
}

void urunKaydiSil(FILE *hPtr){
    Urun bosVeri={0,"",0,0.0};
    Urun veri;
    int kayitNum;

    printf("Silinmesini istediginiz kayit no. giriniz:");
    scanf("%d",&kayitNum);
    fseek(hPtr,(kayitNum-1)*sizeof(struct urunler),SEEK_SET);
    fread(&veri,sizeof(struct urunler),1,hPtr);
    if(veri.kayitNo==0){
        printf("[%d] kayit no.'lu urun verisi bulunmamaktadir.\n",kayitNum);
    }
    else{
        fseek(hPtr,(kayitNum-1)*sizeof(struct urunler),SEEK_SET);
        fwrite(&bosVeri,sizeof(struct urunler),1,hPtr);
        printf("[%d] kayit no.'lu urun verisi silinmistir.\n",kayitNum);
    }
}

void dosyayaYaz(FILE *hPtr){
    Urun veri={0,"",0,0.0};
    FILE *yazPtr;

    if((yazPtr=fopen("hirdavat.txt","w"))==NULL){
        printf("hirdavat.txt dosyasi olusturulamadi.\n");
    }
    else{
        rewind(hPtr);
        fprintf(yazPtr,"%-8s%-15s%-8s%-8s\n","KayitNo","UrunAdi","Miktar","Ucret");
            while(!feof(hPtr)){
                fread(&veri,sizeof(struct urunler),1,hPtr);
                if(veri.kayitNo!=0){
                    fprintf(yazPtr,"%-8d%-15s%-8d%-8.2f\n",veri.kayitNo,veri.ad,veri.miktar,veri.ucret);
                }
            }
            printf("hirdavat.txt dosyasina yazma islemi gerceklestirildi.\n");
            fclose(yazPtr);
    }
}

void dosyaSil(void){
    FILE *silPtr;

    if((silPtr=fopen("hirdavat.dat","w+"))==NULL){
        printf("kayitlar.dat acilamadi.\n");
    }
    else{
        if(remove("hirdavat.dat")==0){
            printf("kayitlar.dat dosyasi basarili bir sekilde silindi.\n");
        }
        else{
            perror("Dosya silme hatasi");
        }
    }
}
