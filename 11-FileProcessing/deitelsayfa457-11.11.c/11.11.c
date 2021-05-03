#include <stdio.h>
#include <conio.h>
#include <string.h>

struct kisi{
    char soyisim[15];
    char isim[15];
    char yas[2];
};

typedef struct kisi Kisi;

void isimyasdatOlustur(void);
void yeniVeri(FILE *);
void veriGuncelle(FILE *);
void veriSil(FILE *);
void yazdir(FILE *);

int main(){
    FILE *iyPtr;
	isimyasdatOlustur();

	if((iyPtr=fopen("isimyas.dat","rb+"))==NULL){
        printf("Dosya acilamadi.\n");
	}
	else{
        yeniVeri(iyPtr);
        veriGuncelle(iyPtr);
        veriSil(iyPtr);
        yazdir(iyPtr);
	}
	fclose(iyPtr);




	getch();
	return 0;
}

void isimyasdatOlustur(void){
    int i;
    FILE *iyPtr;
    Kisi veri={"atanmadi","","0"};

    if((iyPtr=fopen("isimyas.dat","w"))==NULL){
        printf("isimyas.dat dosyasi olusturulamadi.\n");
    }
    else{
        for(i=1;i<=100;i++){
            fwrite(&veri,sizeof(struct kisi),1,iyPtr);
        }
        printf("\n\nisimyas.dat dosyasi olusturuldu.\n\n");
        fclose(iyPtr);
    }
}

void yeniVeri(FILE *iyPtr){
    Kisi veri={"atanmadi","","0"};
    int i;

    for(i=1;i<=5;i++){
        printf("Isim,soyisim ve yas giriniz:");
        scanf("%s%s%s",veri.soyisim,veri.isim,veri.yas);
        fwrite(&veri,sizeof(struct kisi),1,iyPtr);
    }

}

void veriGuncelle(FILE *iyPtr){
    Kisi veri={"atanmadi","","0"};
    char soyisim[20]="";
    int i;

    printf("Guncelleme yapilacak verideki soyismi giriniz:");
    scanf("%s",soyisim);

    for(i=1;i<=100;i++){
        fseek(iyPtr,i*sizeof(struct kisi),SEEK_SET);
        fread(&veri,sizeof(struct kisi),1,iyPtr);
        if(strcmp(veri.soyisim,soyisim)==0){
            printf("Yeni soyisim,isim ve yas giriniz:");
            scanf("%s%s%s",veri.soyisim,veri.isim,veri.yas);
            fseek(iyPtr,i*sizeof(struct kisi),SEEK_SET);
            fwrite(&veri,sizeof(struct kisi),1,iyPtr);
            printf("\n\nGuncelleme yapildi.\n\n");
        }
    }
}

void veriSil(FILE *iyPtr){
    Kisi bosVeri={"atanmadi","","0"};
    Kisi veri;
    char soyisim[20];
    int i;

    printf("Silinmesini istediginiz hesaptaki soyismi giriniz:");
    scanf("%s",soyisim);

    for(i=1;i<=100;i++){
        fseek(iyPtr,i*sizeof(struct kisi),SEEK_SET);
        fread(&veri,sizeof(struct kisi),1,iyPtr);
        if(strcmp(veri.soyisim,soyisim)==0){
            fseek(iyPtr,i*sizeof(struct kisi),SEEK_SET);
            fwrite(&bosVeri,sizeof(struct kisi),1,iyPtr);
        }
    }
    printf("\n\nHesap silindi.\n\n");





}

void yazdir(FILE *iyPtr){
    FILE *yazPtr;
    Kisi veri={"atanmadi","","0"};

    if((yazPtr=fopen("isimyas.txt","w"))==NULL){
        printf("Dosya acilamadi.\n");
    }
    else{
        rewind(iyPtr);
        fprintf(yazPtr,"%s  %s  %s\n","Soyisim","Isim","Yas");
            while(!feof(iyPtr)){
                fread(&veri,sizeof(struct kisi),1,iyPtr);
                if(strcmp(veri.soyisim,"atanmadi")!=0){
                fprintf(yazPtr,"%s  %s  %s\n",veri.soyisim,veri.isim,veri.yas);
                }
            }
            printf("\n\nisimyas.txt dosyasina yazdirildi.\n\n");
            fclose(yazPtr);
    }
}
