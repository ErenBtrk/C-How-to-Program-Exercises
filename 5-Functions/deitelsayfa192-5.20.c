#include <stdio.h>
#include <conio.h>

void iciniDoldur(char);

int main(){
	char karakter;
	printf("Kareyi dolduracak karakteri giriniz:");
	scanf("%c",&karakter);
	iciniDoldur(karakter);
	

	
	
	
	getch();
	return 0;
}

void iciniDoldur(char karakter){
	int i,j;
		for(i=1;i<=5;i++){
			for(j=1;j<=5;j++){
				printf("%c  ",karakter);
			}
			printf("\n\n");
		}
}
