#include <stdio.h>
#include <conio.h>

void bitleriGoster(unsigned);

int main(){
	unsigned x;
	printf("Isaretsiz bir sayi giriniz:");
	scanf("%u",&x);
	bitleriGoster(x);
	bitleriGoster(x>>4);

    printf("\n\nsize of int (same as long int) = %d\n",sizeof(int));
    printf("size of short                  = %d\n",sizeof(short));
    printf("size of long                   = %d\n",sizeof(long));
    printf("size of long long int          = %d\n",sizeof(long long int));



	getch();
	return 0;
}

void bitleriGoster(unsigned x){
    unsigned c,maske=1<<15;
    printf("%7u=",x);

    for(c=1;c<=16;c++){
        putchar(x&maske ? '1' : '0');
        x<<=1;
        if(c%8==0){
            putchar(' ');
        }
    }
    putchar('\n');
}
