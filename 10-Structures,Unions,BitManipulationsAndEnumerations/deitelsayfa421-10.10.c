#include <stdio.h>
#include <conio.h>

void bitleriGoster(unsigned);

int main(){
	unsigned x;
	printf("Isaretsiz bir sayi giriniz:");
	scanf("%u",&x);
	bitleriGoster(x);
	bitleriGoster(x>>4);




	getch();
	return 0;
}

void bitleriGoster(unsigned x){
    unsigned c,maske=1<<31;
    printf("%7u=",x);

    for(c=1;c<=32;c++){
        putchar(x&maske ? '1' : '0');
        x<<=1;
        if(c%8==0){
            putchar(' ');
        }
    }
    putchar('\n');
}
