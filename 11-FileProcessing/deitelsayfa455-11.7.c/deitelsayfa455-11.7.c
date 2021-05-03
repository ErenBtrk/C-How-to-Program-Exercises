#include <stdio.h>
#include <conio.h>

struct musteriVerileri{
    int hesapNo;
    char isim[20];
    char soyIsim[20];
    double borc;
};

struct islemler{
    int hesapNo;
    double borc;
};

typedef struct musteriVerileri Veri;
typedef struct islemler Islem;

void yeniAnaKayitGuncelle(FILE *);
void kayitlarGuncelle(FILE *,int,double);
void dosyaKopyala(void);
void dosyaYazdir(FILE *);

int main(){
	FILE *yakPtr;

	if((yakPtr=fopen("yeniAnaKayit.dat","wb+"))==NULL){
        printf("yeniAnaKayit.dat dosyasi acilamadi.\n");
	}
	else{
        dosyaKopyala();
        dosyaYazdir(yakPtr);
        fclose(yakPtr);
	}





	getch();
	return 0;
}



void dosyaKopyala(void){
    int i;
    Veri musteri;
    FILE *eakPtr;
    FILE *yakPtr;

    if((eakPtr=fopen("eskiAnaKayit.dat","rb+"))==NULL){
        printf("eskiAnaKayit.dat dosyasi acilamadi.\n");
    }
    else if((yakPtr=fopen("yeniAnaKayit.dat","w"))==NULL){
        printf("yeniAnaKayit.dat dosyasi acilamadi.\n");
    }
    else{
            for(i=1;i<=1000;i++){
                fread(&musteri,sizeof(struct musteriVerileri),1,eakPtr);
                fwrite(&musteri,sizeof(struct musteriVerileri),1,yakPtr);
            }
    }
}

void dosyaYazdir(FILE *eakPtr){
    Veri musteri={0,"","",0.0};
    FILE *yazPtr;

    if((yazPtr=fopen("yeniAnaKayit.txt","w"))==NULL){
        printf("yeniAnaKayit.txt dosyasi acilamadi.\n");
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
        printf("yeniAnaKayit.txt dosyasina yazdirma islemi tamamlandi.\n");
        fclose(yazPtr);
    }
}

void yeniAnaKayitGuncelle(FILE *yakPtr){
    Islem kayit={0,0.0};

    FILE *kPtr;

    if((kPtr=fopen("kayitlar.dat","rb+"))==NULL){
        printf("kayitlar.dat dosyasi acilamadi.\n");
    }
    else{
        while(!feof(kPtr)){
            fread(&kayit,sizeof(struct islemler),1,kPtr);
            if(kayit.hesapNo!=0){
                kayitlarGuncelle(yakPtr,kayit.hesapNo,kayit.borc);
            }
        }
        fclose(kPtr);
    }

}

void kayitlarGuncelle(FILE *yakPtr,int hesapNo,double borc){
    Veri musteri={0,"","",0.0};

    fseek(yakPtr,(hesapNo-1)*sizeof(struct musteriVerileri),SEEK_SET);
    fread(&musteri,sizeof(struct musteriVerileri),1,yakPtr);
        if(musteri.hesapNo==0){
        printf("[%d] hesap no. icin eslenmemis alisveris kaydi...\n",hesapNo);
        }
        else{
            musteri.borc+=borc;
            fseek(yakPtr,(hesapNo-1)*sizeof(struct musteriVerileri),SEEK_SET);
            fwrite(&musteri,sizeof(struct musteriVerileri),1,yakPtr);
        }

}
