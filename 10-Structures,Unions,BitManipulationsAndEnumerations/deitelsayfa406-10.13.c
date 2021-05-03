#include <stdio.h>
#include <conio.h>

void bitleriGoster(unsigned);

int main(){
	unsigned sayi1=960;

	printf("\nSola kaydirma operatorunun << kullanilmasiyla\n");
	bitleriGoster(sayi1);
	printf("Sayisini 8 bit pozisyonu\n");
	printf("Sola kaydirmanin sonucu\n");
	bitleriGoster(sayi1<<8);

	printf("\nSaga kaydirma operatorunun >> kullanilmasiyla\n");
	bitleriGoster(sayi1);
	printf("Sayisini 8 bit pozisyonu\n");
	printf("Saga kaydirmanin sonucu\n");
	bitleriGoster(sayi1>>8);





	getch();
	return 0;
}


void bitleriGoster(unsigned deger){
    unsigned c,maskeyiGoster=1<<31;

    printf("%7u=",deger);

    for(c=1;c<=32;c++){
        putchar(deger&maskeyiGoster ? '1' : '0');
        deger<<=1;
        if(c%8==0){
            putchar(' ');
        }
    }
        putchar('\n');
}
