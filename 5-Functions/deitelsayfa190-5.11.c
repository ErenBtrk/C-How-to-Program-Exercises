#include <stdio.h>
#include <conio.h>
#include <math.h>


double tamSayiyaYuvarla(double);
double onlugaYuvarla(double);
double yuzlugeYuvarla(double);
double binligeYuvarla(double);

int main(){
	int sayici,sayi;
	double n;
		printf("Kac sayi girmek istiyorsunuz:");
		scanf("%d",&sayi);
		for(sayici=1;sayici<=sayi;sayici++){
			printf("Sayi giriniz:");
			scanf("%lf",&n);
			printf("Orjinal=%f\tTam sayiya yuvarla=%f\t\n",n,tamSayiyaYuvarla(n));
			printf("Orjinal=%f\tOnluga yuvarla=%f\t\n",n,onlugaYuvarla(n));
			printf("Orjinal=%f\tYuzluge yuvarla=%f\t\n",n,yuzlugeYuvarla(n));
			printf("Orjinal=%f\tBinlige yuvarla=%f\t\n",n,binligeYuvarla(n));
		}

	getch();
	return 0;
}

double tamSayiyaYuvarla(double n){
	double y;
	y = floor(n + .5);
	return y;
}
double onlugaYuvarla(double n){
	double y;
	y = floor ( n * 10 + .5) / 10;
	return y;
}
double yuzlugeYuvarla(double n){
	double y;
	y = floor ( n * 100 + .5) / 100;
	return y;
}
double binligeYuvarla(double n){
	double y;
	y = floor ( n * 1000 + .5) / 1000;
	return y;
}
