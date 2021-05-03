#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(){
	char dizi[100],dizi2[100],dizi3[100],dizi4[100];

    double a=atof(gets(dizi));
    double b=atof(gets(dizi2));
    double c=atof(gets(dizi3));
    double d=atof(gets(dizi4));

    printf("Toplam=%.3f",a+b+c+d);



	getch();
	return 0;
}
