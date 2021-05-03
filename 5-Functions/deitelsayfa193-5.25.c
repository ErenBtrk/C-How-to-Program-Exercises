#include <stdio.h>
#include <conio.h>

float enkBul(float,float,float);

int main(){
	float sayi1,sayi2,sayi3;
	printf("3 ondalikli sayi giriniz:");
	scanf("%f\n%f\%f",&sayi1,&sayi2,&sayi3);
	printf("en kucuk sayi=%.3f",enkBul(sayi1,sayi2,sayi3));

	
	
	
	getch();
	return 0;
}

float enkBul(float a,float b,float c){
	if(a<b&&a<c){
		return a;
	}	
	else if(b<a&&b<c){
		return b;
	}
	else if(c<a&&c<b){
		return c;
	}
}
