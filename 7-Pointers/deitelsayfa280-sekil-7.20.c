 /* gekil 7.20: fig07_20.cpp
 dizi elemanlarýný belirlemenin dört metodu.*/

#include <stdio.h>

int main( )
 {
 int b[ ] = { 10, 20, 30, 40 };
 int *bPtr = b; /* bPtr b dizisini göstersin */
 int i, offset;
 printf( "b dizisi asagidaki metodla yazilmistir:\n"
 "Dizi belirtecleri yontemi\n" );

 for ( i = 0; i < 4; i++ )
 printf( "b[ %d ] = %d\n", i, b[ i ] );


 printf( "\nGosterici/offset yontemi,\n"
 "gosterici dizinin ismidir\n" );

 for ( offset = 0; offset < 4; offset++ )
 printf( "*( b + %d ) = %d\n", offset, *( b + offset ) );


 printf( "\nGosterici belirtec yontemi\n" );

 for ( i = 0; i < 4; i++ )
 printf( " bPtr[ %d ] = %d\n", i, bPtr[ i ] );

 printf( "\nGosterici/offset yontemi\n" );

 for ( offset = 0; offset < 4; offset++ )
 printf( "*( bPtr + %d ) = %d\n", offset, *( bPtr + offset ) );

 return 0;
 }
