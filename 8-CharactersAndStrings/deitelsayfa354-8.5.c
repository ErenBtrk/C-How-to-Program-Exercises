#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>


int main(){
    char x;
    x=getchar();
	printf(isdigit(x) ? "Rakamdir\n" : "Rakam degildir\n");
    printf(isalpha(x) ? "Harftir\n" : "Harf degildir\n");
    printf(isalnum(x) ? "Harf yada Rakamdir\n" : "Harf yada Rakam degildir\n");
    printf(isxdigit(x) ? "Hexadecimal sayi degeridir\n" : "Hexadecimal sayi degeri degildir\n");
    printf(islower(x) ? "Kucuk harftir\n" : "Kucuk harf degildir\n");
    printf(isupper(x)? "Buyuk harftir\n" : "Buyuk harf degildir\n");
    printf("Kucuk harfe cevirme=%c\n",tolower(x));
    printf("Buyuk harfe cevirme=%c\n",toupper(x));
    printf(isspace(x)? "Bosluk karakteridir\n" : "Bosluk karakteri degildir\n");
    printf(iscntrl(x) ? "Kontrol karakteridir\n" : "Kontrol karakteri degildir\n");
    printf(ispunct(x) ? "Bosluk,harf veya rakamdan farkli bir karakterdir\n" : "Bosluk,harf veya rakamdan farkli bir karakter degildir\n" );
    printf(isprint(x) ? "Yardimci karakterdir\n" : "Yardimci karakter degildir\n");
    printf(isgraph(x) ? "Bosluk karakteri haricinde bir yazdirma degeridir\n" : "Bosluk karakteri haricinde bir yazdirma degeri degildir\n");

	getch();
	return 0;
}
