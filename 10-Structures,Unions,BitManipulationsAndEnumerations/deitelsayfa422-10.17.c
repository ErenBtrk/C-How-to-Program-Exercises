#include <stdio.h>
#include <conio.h>

void bitleriGoster(unsigned);
void terstenYazdir(unsigned);


int main(){
    unsigned sayi;
	printf("Bir sayi giriniz:");
	scanf("%u",&sayi);
	printf("Sayinin bitleri:\n");
	bitleriGoster(sayi);
	printf("Sayinin bitlerinin tersten yazdirilmasi:\n");
	terstenYazdir(sayi);




	getch();
	return 0;
}

void bitleriGoster(unsigned sayi){
    unsigned c,maske=1<<31;

    printf("%7u=",sayi);

    for(c=1;c<=32;c++){
        putchar(sayi&maske ? '1' : '0');
        sayi<<=1;
        if(c%8==0){
            putchar(' ');
        }
    }
        putchar('\n');
}

void terstenYazdir(unsigned sayi){
    unsigned c,maske=1;

    printf("%7u=",sayi);

    for(c=1;c<=32;c++){
        putchar(sayi&maske ? '1' : '0');
        sayi>>=1;
        if(c%8==0){
            putchar(' ');
        }
    }
        putchar('\n');
}
