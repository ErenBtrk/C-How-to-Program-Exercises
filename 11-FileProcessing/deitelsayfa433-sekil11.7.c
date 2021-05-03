#include <stdio.h>
#include <conio.h>


int main(){
    int hesap;
    char ad[30];
    double bakiye;

	FILE *cfPtr;

        if((cfPtr=fopen("musteri.dat","r"))==NULL){
            printf("Dosya acilamadi.\n");
        }
        else{
            printf("%-10s%-13s%s\n","Hesap","Isim","Bakiye");
            fscanf(cfPtr,"%d%s%lf",&hesap,ad,&bakiye);
            while(!feof(cfPtr)){
                printf("%-10d%-13s%7.2f\n",hesap,ad,bakiye);
                fscanf(cfPtr,"%d%s%lf",&hesap,ad,&bakiye);
            }
            fclose(cfPtr);
        }






	getch();
	return 0;
}
