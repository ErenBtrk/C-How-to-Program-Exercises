#include <stdio.h>
#include <conio.h>

int tamSayiKuvveti(int,int);

int main(){
	int sayi,us;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	printf("Sayinin almak istediginiz kuvvetini giriniz:");
	scanf("%d",&us);
	printf("%d",tamSayiKuvveti(sayi,us));
	
	
	getch();
	return 0;
}

int tamSayiKuvveti(int x,int y){
	int i,us=1;
		for(i=1;i<=y;i++){
			us=us*x;
		}
		return us;
}
