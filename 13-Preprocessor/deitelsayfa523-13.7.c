#include <stdio.h>
#include <conio.h>

#define ENKUCUK2(x,y) ((x<y) ? x : y)
#define ENKUCUK3(x,y,z) ((x<y) ? (ENKUCUK2(x,z)) : (ENKUCUK2(y,z)))

int main(){
	int sayi1,sayi2,sayi3;
	printf("3 sayi giriniz:");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	printf("En Kucuk Sayi=%d\n",ENKUCUK3(sayi1,sayi2,sayi3));





	getch();
	return 0;
}
