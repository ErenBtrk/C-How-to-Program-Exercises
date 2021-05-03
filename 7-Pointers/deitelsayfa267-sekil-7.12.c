 /* gekil 7.12: fig07_12.c
 sabit bir veri için sabit olmayan gösterici
 kullanarak değeri değiGtirmeye çalıGmak */

#include <stdio.h>

 void f ( const int * );

 int main( )
 {
 int y;

 f( &y ); /* f doğru olmayan bir değiGiklik yapmaya çalıGtı */

 return 0;
 }

 /* f içinde xPtr,bir tamsayı sabitini gösteren göstericidir */
 void f ( const int *xPtr )
 {
 *xPtr = 100; /* const nesnesi değiGtirilemez */
 }
