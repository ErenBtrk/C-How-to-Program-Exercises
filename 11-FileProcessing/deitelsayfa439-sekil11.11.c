#include <stdio.h>
#include <conio.h>

struct musteriVerisi{
    int hesapNo;
    char soyIsim[15];
    char isim[10];
    double bakiye;
};

int main(){
	int i;
	struct musteriVerisi bosVeri={0,"","",0.0};
	FILE *cfPtr;

	if((cfPtr=fopen("kredi.dat","w"))==NULL){
        printf("Dosya acilamadi.\n");
	}
	else{
        for(i=1;i<=100;i++){
            fwrite(&bosVeri,sizeof(struct musteriVerisi),1,cfPtr);
        }
        fclose(cfPtr);
	}





	getch();
	return 0;
}
