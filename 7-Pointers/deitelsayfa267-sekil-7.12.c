 /* gekil 7.12: fig07_12.c
 sabit bir veri i�in sabit olmayan g�sterici
 kullanarak de�eri de�iGtirmeye �al�Gmak */

#include <stdio.h>

 void f ( const int * );

 int main( )
 {
 int y;

 f( &y ); /* f do�ru olmayan bir de�iGiklik yapmaya �al�Gt� */

 return 0;
 }

 /* f i�inde xPtr,bir tamsay� sabitini g�steren g�stericidir */
 void f ( const int *xPtr )
 {
 *xPtr = 100; /* const nesnesi de�iGtirilemez */
 }
