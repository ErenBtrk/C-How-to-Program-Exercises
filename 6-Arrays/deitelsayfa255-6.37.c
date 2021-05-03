#include <stdio.h>
#include <conio.h>
#define BOYUT 30

void tersString(char[]);

int main(){
	int i;
	char dizi[BOYUT]="Bunu tersten yaz.";
		for(i=0;i<BOYUT;i++){
			printf("%c",dizi[i]);
		}
	printf("\n");
	tersString(dizi);
	printf("\n");
	

	
	getch();
	return 0;
}

void tersString(char dizi[]){
	if(dizi[0]=='\0'){
		return;
	}
	tersString(&dizi[1]);
	printf("%c",dizi[0]);
}
