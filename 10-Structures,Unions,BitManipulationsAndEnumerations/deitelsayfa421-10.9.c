#include <stdio.h>
#include <conio.h>

union ondalikliSayi{
    float f;
    double d;
    long double l;

};

typedef union ondalikliSayi OndalikliSayi;

int main(){
	OndalikliSayi birlik1,birlik2,birlik3,birlik4;

	printf("Ondalikli bir sayi giriniz:");
	scanf("%f",&birlik1.f);
	printf("Ondalikli bir sayi giriniz:");
	scanf("%lf",&birlik2.d);
	printf("Ondalikli bir sayi giriniz:");
	scanf("%lf",&birlik3.l);

	printf("\n\birlik1.f as a float: %f\n", birlik1.f);
    printf("birlik1.f as a double: %lf\n", birlik1.f);
    printf("birlik1.f as a long double: %lf\n", birlik1.f);


    printf("\n\nbirlik2.d as a float: %f\n", birlik2.d);
    printf("birlik2.d as a double: %lf\n", birlik2.d);
    printf("birlik2.d as a long double: %lf\n", birlik2.d);


    printf("\n\nbirlik3.l as a float: %f\n", birlik3.l);
    printf("birlik3.l as a double: %lf\n", birlik3.l);
    printf("birlik3.l as a long double: %lf\n", birlik3.l);




	getch();
	return 0;
}
