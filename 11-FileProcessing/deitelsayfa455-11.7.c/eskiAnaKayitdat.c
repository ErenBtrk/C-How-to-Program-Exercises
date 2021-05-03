#include <stdio.h>
#include <conio.h>

struct musteriVerileri{
    int hesapNo;
    char isim[20];
    char soyIsim[20];
    double borc;
};

typedef struct musteriVerileri Veri;

int main(){
	Veri musteri={0,"","",0.0};
	FILE *eakPtr;
	int i;

    if((eakPtr=fopen("eskiAnaKayit.dat","w"))==NULL){
        printf("eskiAnaKayit.dat dosyasi olusturulamadi.\n");
    }
    else{
        for(i=1;i<=1000;i++){
            fwrite(&musteri,sizeof(struct musteriVerileri),1,eakPtr);
        }
    }
    printf("eskiAnaKayit.dat dosyasi olusturuldu.\n");
    fclose(eakPtr);



	getch();
	return 0;
}
