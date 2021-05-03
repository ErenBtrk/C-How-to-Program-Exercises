#include <stdio.h>
#include <conio.h>

struct musteriVerisi{
    int hesapNo;
    char soyIsim[15];
    char isim[10];
    double bakiye;
};

int main(){
	FILE *cfPtr;
	struct musteriVerisi musteri={0,"","",0.0};

	if((cfPtr=fopen("kredi.dat","rb+"))==NULL){
        printf("Dosya acilamadi.\n");
	}
	else{
        printf("Hesap no. giriniz:(1'den 100'e kadar,cikis icin 0)\n?");
        scanf("%d",&musteri.hesapNo);
        while(musteri.hesapNo!=0){
            printf("Soyisim,isim,bakiye giriniz:\n?");
            fscanf(stdin,"%s%s%lf",musteri.soyIsim,musteri.isim,&musteri.bakiye);
            fseek(cfPtr,(musteri.hesapNo-1)*sizeof(struct musteriVerisi),SEEK_SET);
            fwrite(&musteri,sizeof(struct musteriVerisi),1,cfPtr);
            printf("Hesap no. giriniz:\n?");
            scanf("%d",&musteri.hesapNo);
        }
        fclose(cfPtr);
	}





	getch();
	return 0;
}
