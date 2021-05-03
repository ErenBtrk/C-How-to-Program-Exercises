#include <stdio.h>
#include <conio.h>

int obeb(int,int);

int main(){
	int sayi1,sayi2;
		printf("Lutfen 2 sayi giriniz:");
		scanf("%d\n%d",&sayi1,&sayi2);
		printf("Sayilarin OBEB'i=%d",obeb(sayi1,sayi2));

	
	
	
	getch();
	return 0;
}

int obeb(int a,int b){
	int i=1,ortak=1;
		 for(i=2;i<=((a<b)?a:b);i++){
		 	if(a%i==0&&b%i==0){
		 		ortak=i;
			 }
		 }
		
		return ortak;
}
