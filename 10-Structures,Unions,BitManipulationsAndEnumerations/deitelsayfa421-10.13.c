#include <stdio.h>
#include <conio.h>

int karakterPaketle(char,char);
void bitleriGoster(unsigned);

int main(){
    char karakter1,karakter2;
	printf("karakter giriniz:");
	scanf("%c",&karakter1);
	fflush(stdin);
	printf("karakter giriniz:");
	scanf("%c",&karakter2);
	printf("karakter1:\n");
	bitleriGoster(karakter1);
	printf("karakter1'i 8 bit sola kaydirinca:\n");
	bitleriGoster(karakter1<<8);
	printf("karakter2:\n");
    bitleriGoster(karakter2);
    int sonuc;
    sonuc=karakterPaketle(karakter1,karakter2);
    printf("karakter1|karakter2\n");
    bitleriGoster(sonuc);


	getch();
	return 0;
}
int karakterPaketle(char karakter1,char karakter2){
    unsigned int x1;
    unsigned int x2;
    x1=karakter1;
    x2=karakter2;
    x1<<=8;
    x1=x1|x2;
    return x1;

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
