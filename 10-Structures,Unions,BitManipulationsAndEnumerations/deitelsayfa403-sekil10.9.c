#include <stdio.h>
#include <conio.h>

void bitleriGoster(unsigned);

int main(){

	unsigned sayi1,sayi2,maske,bitBirle;

	sayi1=65535;
	maske=1;
	printf("Asagidakileri birlestirmenin sonucu\n");
	bitleriGoster(sayi1);
	bitleriGoster(maske);
	printf("AND Operatoru & kullanildiginda\n");
	bitleriGoster(sayi1&maske);

	sayi1=15;
	bitBirle=241;
	printf("Asagidakileri birlestirmenin sonucu\n");
	bitleriGoster(sayi1);
	bitleriGoster(bitBirle);
	printf("OR Operatoru | kullanildiginda\n");
	bitleriGoster(sayi1|bitBirle);

	sayi1=139;
	sayi2=199;
	printf("Asagidakileri birlestirmenin sonucu\n");
	bitleriGoster(sayi1);
	bitleriGoster(sayi2);
    printf("exclusive OR operatoru ^ kullanildiginda\n");
    bitleriGoster(sayi1^sayi2);

    sayi1=21845;
    printf("Asagidakileri bire tumleyeni\n");
    bitleriGoster(sayi1);
    printf("Soyle gosterilir\n");
    bitleriGoster(~sayi1);




	getch();
	return 0;
}


void bitleriGoster(unsigned deger){
    unsigned c,maskeGoster=1<<31;
    printf("%7u=",deger);

        for(c=1;c<=32;c++){
            putchar(deger&maskeGoster ? '1' : '0');
            deger<<=1;
            if(c%8==0){
                putchar(' ');
            }
        }

        putchar('\n');

}
