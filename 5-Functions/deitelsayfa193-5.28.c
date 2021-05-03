#include <stdio.h>
#include <conio.h>

void tersCevir(int);

int main(){
	int sayi;
		printf("Sayi giriniz:");
		scanf("%d",&sayi);
		tersCevir(sayi);

	
	
	
	getch();
	return 0;
}

void tersCevir(int a){
	int bas;
		while(a!=0){
			bas=a%10;
			a=a/10;
			printf("%d",bas);
		}
		
		
}
