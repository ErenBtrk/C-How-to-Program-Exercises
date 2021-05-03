#include <stdio.h>
#include <conio.h>

int kat(int,int);

int main(){
	int sayi1,sayi2;
	printf("2 sayi giriniz:");
	scanf("%d %d",&sayi1,&sayi2);
		if(kat(sayi1,sayi2)==1){
			printf("2.sayi 1.sayinin tam katidir.");
		}
		else{
			printf("2.sayi 1.sayinin tam kati degildir.");
		}
	
	
	
	getch();
	return 0;
}

int kat(int x,int y){
	if(y%x==0){
		return 1;
	}
	else{
		return 0;
	}
	
}
