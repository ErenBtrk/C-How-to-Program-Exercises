#include <stdio.h>
#include <conio.h>


int main(){
	int hesap;
	char isim[30];
	double bakiye;
	FILE *cfPtr;

	if((cfPtr=fopen("musteri.dat","w"))==NULL){
        printf("Dosya acilamadi.\n");
	}
	else{
        printf("Hesap no,ismi ve bakiyeyi giriniz.\n");
        printf("EOF girerek veri girisi sonlandirin.\n");
        printf("? ");
        scanf("%d %s %lf",&hesap,&isim,&bakiye);

        while(!feof(stdin)){
            fprintf(cfPtr,"%d %s %.2f\n",hesap,isim,bakiye);
            printf("? ");
            scanf("%d %s %lf",&hesap,&isim,&bakiye);
        }
        fclose(cfPtr);
	}




	getch();
	return 0;
}
