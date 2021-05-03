#include <stdio.h>
#include <conio.h>

struct islemler{
    int hesapNo;
    double borc;
};

typedef struct islemler Islem;

int secimFonksiyonu(void);
void yeniIslem(FILE *);
void dosyaYazdir(FILE *);

int main(){
	FILE *kPtr;
	int secim;

	if((kPtr=fopen("kayitlar.dat","rb+"))==NULL){
        printf("kayitlar.txt dosyasi acilamadi.\n");
	}
    else{
        while((secim=secimFonksiyonu())!=3){
            switch(secim){
            case 1:
                dosyaYazdir(kPtr);
                break;
            case 2:
                yeniIslem(kPtr);
                break;
            default:
                printf("Yanlis giris.\n");
                break;
            }
        }
        fclose(kPtr);
        printf("kayitlar.dat dosyasi kapatilarak cikis yapildi.\n");
    }



	getch();
	return 0;
}

int secimFonksiyonu(void){
    int secim;

    printf("********************************\n"
           "[1]-\"kayitlar.txt\" dosyasina yazdir.\n"
           "[2]-Yeni islem girisi yap.\n"
           "[3]-Cikis yap.\n"
           "********************************\n");
    printf("\nSeciminizi giriniz:");
    scanf("%d",&secim);

    return secim;

}

void yeniIslem(FILE *kPtr){
    Islem kayit={0,0.0};
    int hesapNum;

    printf("Islem yapilacak hesap no giriniz:\n");
    scanf("%d",&hesapNum);
    fseek(kPtr,(hesapNum-1)*sizeof(struct islemler),SEEK_SET);
    fread(&kayit,sizeof(struct islemler),1,kPtr);
    if(kayit.hesapNo!=0){
        printf("\n\n[%d] hesap no. bilgi icermektedir.\n\n");
    }
    else{
        kayit.hesapNo=hesapNum;
        printf("Borc miktarini giriniz:\n");
        scanf("%lf",&kayit.borc);
        fseek(kPtr,(hesapNum-1)*sizeof(struct islemler),SEEK_SET);
        fwrite(&kayit,sizeof(struct islemler),1,kPtr);
    }
}

void dosyaYazdir(FILE *kPtr){
    FILE *yazPtr;
    Islem kayit={0,0.0};

    if((yazPtr=fopen("kayitlar.txt","w"))==NULL){
        printf("kayitlar.txt dosyasi acilamadi.\n");
    }
    else{
        rewind(kPtr);
        fprintf(yazPtr,"%s  %s\n","HesapNo","Borc");
            while(!feof(kPtr)){
                fread(&kayit,sizeof(struct islemler),1,kPtr);
                if(kayit.hesapNo!=0){
                    fprintf(yazPtr,"%d  %f\n",kayit.hesapNo,kayit.borc);
                }
            }
        printf("\n\nkayitlar.txt dosyasina yazma islemi gerceklestirildi.\n\n");
        fclose(yazPtr);
    }
}
