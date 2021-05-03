#include <stdio.h>
#include <conio.h>

union tamsayi{
    char c;
    short s;
    int i;
    long l;

};
typedef union tamsayi Tamsayi;

int main(){
    Tamsayi birlik1,birlik2,birlik3,birlik4;


        printf("Bir karakter giriniz:");
        scanf("%c",&birlik1.c);
        printf("Bir sayi giriniz:");
        scanf("%hd",&birlik2.s);
        printf("Bir sayi giriniz:");
        scanf("%d",&birlik3.i);
        printf("Bir sayi giriniz:");
        scanf("%ld",&birlik4.l);

     printf("\n\nbirlik1.c as a char: %c\n", birlik1.c);
    printf("birlik1.c as a short: %hd\n", birlik1.c);
    printf("birlik1.c as an int: %d\n", birlik1.c);
    printf("birlik1.c as a long: %ld\n", birlik1.c);

    printf("\n\nbirlik2.s as a char: %c\n", birlik2.s);
    printf("birlik2.s as a short: %hd\n", birlik2.s);
    printf("birlik2.s as an int: %d\n", birlik2.s);
    printf("birlik2.s as a long: %ld\n", birlik2.s);

    printf("\n\nbirlik3.i as a char: %c\n", birlik3.i);
    printf("birlik3.i as a short: %hd\n", birlik3.i);
    printf("birlik3.i as an int: %d\n", birlik3.i);
    printf("birlik3.i as a long: %ld\n", birlik3.i);

    printf("\n\nbirlik4.l as a char: %c\n", birlik4.l);
    printf("birlik4.l as a short: %hd\n", birlik4.l);
    printf("birlik4.l as an int: %d\n", birlik4.l);
    printf("birlik4.l as a long: %ld\n", birlik4.l);




	getch();
	return 0;
}
