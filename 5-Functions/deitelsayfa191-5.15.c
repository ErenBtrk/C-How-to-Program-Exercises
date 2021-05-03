#include <stdio.h>
#include <conio.h>
#include <math.h>

double hipotenus(double,double);

int main(){
	int i;
	double a,b;
	for(i=1;i<=3;i++){
		printf("ilk kenarin uzunlugunu giriniz:");
		scanf("%lf",&a);
		printf("2.kenarin uzunlugunu giriniz:");
		scanf("%lf",&b);
		printf("hipotenusun uzunlugu=%.1f\n",hipotenus(a,b));	
	}
	
	
	
	
	
	getch();
	return 0;
}

double hipotenus(double a,double b){
	return sqrt(a*a+b*b);
	
}



