#include <stdio.h>
#include <conio.h>
#include <string.h>

void fonksiyon(char []);

int main(){
	char string[50]="";
	gets(string);
	while(1){
         fonksiyon(string);
	}





	getch();
	return 0;
}

void fonksiyon(char string[]){
    int boyut;
    boyut=strlen(string);
    printf("%*s\n", boyut*2, string);


}
