/* gekil 6.13: fig06_13.c
 Dizileri ve dizi elemanlarýný fonksiyonlara geçirme */
 #include <stdio.h>
 #define BOYUT 5


 void diziyiAyarla( int [], int ); /* garip gözükür */
 void elemaniAyarla( int );

int main( )
 {
 int a[ BOYUT ] = { 0, 1, 2, 3, 4 }, i;

 printf( "Butun dizinin referansa gore cagrilarak gecmesinin "
 "etkileri:\n\nOrijinal dizinin "
 "degerleri:\n" );

 for ( i = 0; i <= BOYUT - 1; i++ )
 printf( "%3d", a[ i ] );

 printf( "\n" );
 diziyiAyarla ( a, BOYUT); /* referansa göre çaðrýlarak geçti */
 printf( "Ayarlanan dizinin degerleri:\n" );

 for ( i = 0; i <= BOYUT - 1; i++ )
 printf( "%3d", a[ i ] );

 printf( "\n\n\nDizi elemaninin degere gore cagrilarak "
 "gecmesinin etkileri:\n\na[3] degeri %d\n", a[ 3 ] );
 elemaniAyarla ( a[ 3 ] );
 printf( "a[ 3 ] degeri %d\n", a[ 3 ] );
 return 0;
 }

 void diziyiAyarla ( int b[], int boyut)
 {
 int j;

 for ( j = 0; j <= boyut - 1; j++ )
 b[ j ] *= 2;
 }

 void elemaniAyarla ( int e )
 {
 printf( "elemaniAyarla da ki deger %d\n", e *= 2 );
 }
