 /* gekil 7.14: fig07_14.c
 Sabit bir veriyi gösteren sabit bir göstericiyi
 değiGtirmeye çalıGmak. */
#include <stdio.h>

int main( )
 {
 int x = 5, y;

 const int *const ptr = &x; /* ptr sabit bir tamsayıyı gösteren
 sabit bir göstericidir. ptr her zaman
 aynı hafıza konumunu gösterir
 ve o konumdaki tamsayı
 değiGtirilemez. */
 printf( "%d\n", *ptr );
 *ptr = 7;
 ptr = &y;

 return 0;
 }
