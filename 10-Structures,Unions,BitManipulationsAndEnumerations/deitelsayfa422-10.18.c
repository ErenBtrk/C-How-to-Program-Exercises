#include <stdio.h>
#include <conio.h>

void bitleriGoster(unsigned);

int main(){
	unsigned x;

	printf("Isaretsiz bir tamsayi giriniz:");
	scanf("%u",&x);
	bitleriGoster(x);


	getch();
	return 0;
}

void bitleriGoster(unsigned x){
    int intSize;
    intSize=sizeof(int);
    printf("Bu sistem %d-byte tamsayilar kullanmaktadir.\n",intSize);

    unsigned max;
    max=sizeof(int)*8;
    unsigned c,maske=1<<(max-1);

    printf("%7u=",x);

    for(c=1;c<=max;c++){
        putchar(x&maske ? '1' : '0');
        x <<=1;


        if(c%8==0){
            putchar(' ');
        }
    }
        putchar('\n');



}
