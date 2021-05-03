#include <stdio.h>
#include <conio.h>

int maksimum(int,int,int);

int main(){
	int sayi1,sayi2,sayi3;
	printf("1.sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("3.sayiyi giriniz:");
	scanf("%d",&sayi3);
	
	printf("%d",maksimum(sayi1,sayi2,sayi3));
	
	getch();
	return 0;
}

int maksimum(int a,int b,int c){
	int enb=0;
	if(a>enb){
		enb=a;
	}
	if(b>enb){
		enb=b;
	}
	if(c>enb){
		enb=c;
	}
	return enb;
}
