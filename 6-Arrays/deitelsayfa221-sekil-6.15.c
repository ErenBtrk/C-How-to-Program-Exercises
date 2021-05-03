/* gekil 6.15: fig06_15.c
 Bu program bir dizinin deðerlerini
 artan sýraya sokar */
 #include <stdio.h>
 #define BOYUT 10

 int main( )
 {
 int a[ BOYUT ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
 int i, tur, tut;

 printf( "Veriler orjinal sirasinda\n" );

 for ( i = 0; i <= BOYUT - 1; i++ )
 printf( "%4d", a[ i ] );

 for ( tur = 1; tur <= BOYUT - 1; tur++ ) /* turlar */

 for ( i = 0; i <= BOYUT - 2; i++ ) /* bir tur */

 if ( a[ i ] > a[ i + 1 ] ) { /* bir karGýlaGtýrma */
 tut = a[ i ]; /* bir deðiGtirme */
 a[ i ] = a[ i + 1 ];
 a[ i + 1 ] = tut;
 }

 printf( "\nVeriler artan siralamada \n" );

 for ( i = 0; i <= BOYUT - 1; i++ )
 printf( "%4d", a[ i ] );

 printf( "\n" );

 return 0;
 }
