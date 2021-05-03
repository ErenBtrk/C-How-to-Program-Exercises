/* Fig. 5.14: fig05_14.c
Yineleme faktoriyel fonksiyonu */
#include <stdio.h>

 long faktoriyel ( long );

 int main( )
 {
 int i;

 for ( i = 1; i <= 10; i++ )
 printf( "%2d! = %ld\n", i, faktoriyel(i ) );
 return 0;
 }

 long faktoriyel( long sayi)
 {
 if ( sayi <= 1 )
 return 1;
 else{
	printf( "sayi = %*d\n", sayi, sayi );
 	return ( sayi * faktoriyel(sayi - 1 ) );
 }
 }
