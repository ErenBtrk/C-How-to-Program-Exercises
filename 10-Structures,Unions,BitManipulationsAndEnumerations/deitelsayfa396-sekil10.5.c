 /* sekil 10.5: fig10_05.c
 Birlik ornegi */
#include <stdio.h>

union sayi {
 int x;
 double y;
};

 int main( ){
    union sayi deger;

    deger.x = 100;
    printf( "%s\n%s\n%s%d\n%s%f\n\n",
    "Tamsayi uyesine bir sayi koyun",
    "ve butun uyeleri yazdirin.",
    "int: ", deger.x,
    "double:\n", deger.y );

    deger.y = 100.0;
    printf( "%s\n%s\n%s%d\n%s%f\n",
    "Ondalikli sayi uyesine bir sayi koyun",
    "ve butun uyeleri yazdirin.",
    "int: ", deger.x,
    "double:\n", deger.y );
    return 0;
 }
