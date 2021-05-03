#include <stdio.h>
#include <conio.h>

#define ENKUCUK2(x,y) ((x<y) ? x : y)


int main(){
	int sayi1;
	int sayi2;
	printf("Iki sayi giriniz:");
	scanf("%d %d",&sayi1,&sayi2);
    printf("Kucuk olan sayi=%d",ENKUCUK2(sayi1,sayi2));




	getch();
	return 0;
}
