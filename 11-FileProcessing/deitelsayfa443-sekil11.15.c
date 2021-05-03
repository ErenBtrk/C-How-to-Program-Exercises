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

	if((cfPtr=fopen("kredi.dat","rb"))==NULL){
        printf("Dosya acilamadi.\n");
	}
	else{
        printf("%-6s%-16s%-11s%10s\n","HspNo","Soyisim","Isim","Bakiye");

        while(!feof(cfPtr)){
            fread(&musteri,sizeof(struct musteriVerisi),1,cfPtr);

            if(musteri.hesapNo!=0){
                printf("%-6s&-16s%-11s%10.2f\n",musteri.hesapNo,musteri.soyIsim,musteri.isim,musteri.bakiye);
            }
        }
        fclose(cfPtr);
	}





	getch();
	return 0;
}
