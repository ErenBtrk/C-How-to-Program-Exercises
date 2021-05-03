#include <stdio.h>
#include <conio.h>


int main(){
    char string1[100];
    char string2[100];
	printf("Iki string giriniz:\n");
	gets(string1); gets(string2);
	if(strcmp(string1,string2)==0){
        printf("Girdiginiz 2 string esittir.");
	}
	else if(strcmp(string1,string2)<0){
        printf("Girdiginiz 1.String 2.Stringten kucuktur.");
	}
	else{
        printf("Girdiginiz 1.String 2.Stringten buyuktur.");
	}




	getch();
	return 0;
}
