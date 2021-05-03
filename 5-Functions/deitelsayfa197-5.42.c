#include <stdio.h>
#include <conio.h>

int obebBul(int,int);

int main(){
	int sayi1,sayi2;
	printf("2 sayi giriniz:");
	scanf("%d\n%d",&sayi1,&sayi2);
	printf("obeb=%d",obebBul(sayi1,sayi2));
	

	
	
	
	getch();
	return 0;
}

int obebBul(int a,int b){
	if(b==0){
		return a;
	}
	else if(b!=0){
		return obebBul(b,a%b);
	}
}
