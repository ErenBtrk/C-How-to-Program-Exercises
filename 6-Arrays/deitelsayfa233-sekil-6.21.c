/* gekil 6.21: fig06_21.c
 Çok boyutlu dizilere ilk deðer atanmasý */
 #include <stdio.h>

void diziyiYazdir( const int [ ][ 3 ] );

int main( )
 {
 int dizi1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } },
 dizi2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 },
 dizi3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };

 printf( "satir satir dizi1'in elemanlari:\n" );
 diziyiYazdir ( dizi1 );

 printf( " satir satir dizi2'in elemanlari:\n" );
 diziyiYazdir ( dizi2 );

 printf( " satir satir dizi3'in elemanlari:\n" );
 diziyiYazdir ( dizi3 );

 return 0;
 }

 void diziyiYazdir ( const int a[ ][ 3 ] )
 {
 int i, j;

 for ( i = 0; i <= 1; i++ ) {

 for ( j = 0; j <= 2; j++ )
 printf( "%d ", a[ i ][ j ] );

 printf( "\n" );
 }
 }
