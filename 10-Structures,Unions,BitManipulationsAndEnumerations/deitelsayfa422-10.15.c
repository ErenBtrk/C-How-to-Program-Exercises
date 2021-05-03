#include <stdio.h>
#include <conio.h>

int karakterPaketle(char,char,char,char);
void bitleriGoster(unsigned);

int main(){
    char karakter1,karakter2,karakter3,karakter4;
	printf("karakter giriniz:");
	scanf("%c",&karakter1);
	fflush(stdin);
	printf("karakter giriniz:");
	scanf("%c",&karakter2);
	fflush(stdin);
	printf("karakter giriniz:");
	scanf("%c",&karakter3);
	fflush(stdin);
	printf("karakter giriniz:");
	scanf("%c",&karakter4);


	printf("karakter1:\n");
	bitleriGoster(karakter1);
	printf("karakter2:\n");
    bitleriGoster(karakter2);
    printf("karakter3:\n");
    bitleriGoster(karakter3);
    printf("karakter4:\n");
    bitleriGoster(karakter4);
    int sonuc;
    sonuc=karakterPaketle(karakter1,karakter2,karakter3,karakter4);
    printf("sonuc:\n");
    bitleriGoster(sonuc);


	getch();
	return 0;
}
int karakterPaketle(char karakter1,char karakter2,char karakter3,char karakter4){
    unsigned int x1;
    unsigned int x2;
    unsigned int x3;
    unsigned int x4;
    x1=karakter1;
    x2=karakter2;
    x3=karakter3;
    x4=karakter4;
    x1<<=8;
    x1=x1|x2;
    x1<<=8;
    x1=x1|x3;
    x1<<=8;
    x1=x1|x4;
    return x1;

}

void bitleriGoster(unsigned sayi){
	unsigned c,maske=1<<31;
	printf("%15u=",sayi);

    for(c=1;c<=32;c++){
        putchar(sayi&maske ? '1' : '0');
        sayi<<=1;
        if(c%8==0){
            putchar(' ');
        }
    }
    putchar('\n');

}
