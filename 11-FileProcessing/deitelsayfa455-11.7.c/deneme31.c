#include <stdio.h>
#include <conio.h>

struct musteriVerileri{
    int hesapNo;
    char isim[20];
    char soyIsim[20];
    double borc;
};
typedef struct musteriVerileri Veri;

struct islemler{
    int hesapNo;
    double borc;
} ;
typedef struct islemler Islem;

int yeniAnaKayitOlustur(FILE *);
void yeniAnaKayitGuncelle(FILE *);
void kayitlarGuncelle(FILE*,int,double);
int dosyaKopyala(FILE *,FILE *);


const int DEBUG=0;
void dosyaYazdir(FILE *,char *);


int main(){
	FILE *yakPtr=fopen("yeniAnaKayit.dat","wb+");
	fclose(yakPtr);

	yakPtr=fopen("yeniAnaKayit.dat","rb+");

	if(yeniAnaKayitOlustur(yakPtr)==0){
        printf("Hata -yeniAnaKayit.dat dosyasi olusturulamadi.\n");
        return -1;
	}
        if(DEBUG==0){
            dosyaYazdir(yakPtr,"yeniAnaKayit1.txt");
        }
        yeniAnaKayitGuncelle(yakPtr);

        if(DEBUG){
            dosyaYazdir(yakPtr,"yeniAnaKayit2.txt");
        }

        fclose(yakPtr);





	getch();
	return 0;
}


int yeniAnaKayitOlustur(FILE *yakPtr){
    int olusturulan;
    FILE *eakPtr=fopen("eskiAnaKayit.dat","rb");

    olusturulan=dosyaKopyala(eakPtr,yakPtr);

    fclose(eakPtr);
    return olusturulan;

}

void yeniAnaKayitGuncelle(FILE *yakPtr){
    Islem kayit={0,0.0};

    FILE *kPtr=fopen("kayitlar.dat","rb");

    while(!feof(kPtr)){
        fread(&kayit,sizeof(struct islemler),1,kPtr);
        if(kayit.hesapNo!=0){
            kayitlarGuncelle(yakPtr,kayit.hesapNo,kayit.borc);
        }
    }
    fclose(yakPtr);

}

void kayitlarGuncelle(FILE *yakPtr,int hesapNo,double borc){
    Veri musteri={0,"","",0.0};

    fseek(yakPtr,(hesapNo-1)*sizeof(struct musteriVerileri),SEEK_SET);
    fread(&musteri,sizeof(struct musteriVerileri),1,yakPtr);

    if(musteri.hesapNo==0){
        printf("[%d] hesap no. icin eslesmeyen alisveris kaydi...\n",hesapNo);
    }
    else{
        musteri.borc+=borc;
        fseek(yakPtr,(hesapNo-1)*sizeof(struct musteriVerileri),SEEK_SET);
        fwrite(&musteri,sizeof(struct musteriVerileri),1,yakPtr);
    }
}

int dosyaKopyala(FILE *eakPtr,FILE *yakPtr){
    size_t res1;
    unsigned char buffer[8192];

    if(eakPtr==NULL){
        printf("eskiAnaKayit.dat dosyasi acilamadi.\n");
    }
    else if(yakPtr==NULL){
        printf("yeniAnaKayit.dat dosyasi acilamadi.\n");
    }
    else{
        while((res1=fread(buffer,1,sizeof buffer,eakPtr))>0){
            size_t res2=fwrite(buffer,1,res1,yakPtr);
            if(res2<res1){
                if(ferror(yakPtr)){
                    printf("HATA-dosyaya yazma islemi gerceklestirilemedi.\n");
                    return 0;
                }
                else{
                    printf("HATA-media full!\n");
                }
            }
        }
    }
    return 1;
}

void dosyaYazdir(FILE *okuPtr,char *dosyaIsmi){
    Veri musteri={0,"","",0.0};
    FILE *yazPtr;

    if((yazPtr=fopen(dosyaIsmi,"w"))==NULL){
        printf("%s dosyasi acilamadi.\n",dosyaIsmi);
    }
    else{
        rewind(okuPtr);
        fprintf(yazPtr,"%-6s%-16s%-11s%10s\n","HesapNo","Isim","Soyisim","Borc");
            while(!feof(okuPtr)){
                fread(&musteri,sizeof(struct musteriVerileri),1,okuPtr);
                    if(musteri.hesapNo!=0){
                        fprintf(yazPtr,"%-6d%-16s%-11s%10.2f\n",musteri.hesapNo,musteri.isim,
                                musteri.soyIsim,musteri.borc);
                    }
            }
            fclose(yazPtr);
            printf("%s dosyasi olusturuldu.\n",dosyaIsmi);
    }
}






