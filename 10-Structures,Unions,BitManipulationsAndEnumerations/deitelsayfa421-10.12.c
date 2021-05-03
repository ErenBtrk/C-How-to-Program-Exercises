#include <stdio.h>
#include <conio.h>

void bitleriGoster(unsigned);
int kuvvet2(int,int);

int main(){
   int sonuc;
   int sayi;
   int kuvvet;
   printf("bir sayi giriniz:");
   scanf("%d",&sayi);
   printf("kuvveti giriniz:");
   scanf("%d",&kuvvet);
   sonuc=kuvvet2(sayi,kuvvet);
   printf("kuvvet(%d,%d)=%d",sayi,kuvvet,sonuc);
   bitleriGoster(sayi);
   bitleriGoster(sonuc);





	getch();
	return 0;
}

void bitleriGoster(unsigned sayi){
    unsigned c,maske=1<<31;
    printf("\n%7u=",sayi);

    for(c=1;c<=32;c++){
        putchar(sayi&maske ? '1' : '0');
        sayi<<=1;
        if(c%8==0){
            putchar(' ');
        }

    }
    putchar('\n');
}

int kuvvet2(int sayi,int kuvvet){
    return sayi*(2<<kuvvet);
}
