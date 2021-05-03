/* gekil 6.18: fig06_18.c
 Dizide lineer arama yapmak */
 #include <stdio.h>
 #define BOYUT 100
 
int lineerArama( const int [], int, int );

int main( )
 {
 int a[ BOYUT ], x, aramaDegeri, eleman;

 for ( x = 0; x <= BOYUT - 1; x++ ) /* veri oluGtur */
 a[ x ] = 2 * x;

 printf( "Arama degeri tamsayisini gir:\n" );
 scanf( "%d", & aramaDegeri);
 eleman = lineerArama( a, aramaDegeri, BOYUT);

 if ( eleman != -1 )
 printf( "Bu deger, eleman %d de bulundu\n", eleman );
 else
 printf( "Bu deger bulunamadi\n" );

 return 0;

 }

 int lineerArama( const int dizi[], int anahtar, int boyut )
 {
 int n;

 for ( n = 0; n <= boyut - 1; ++n )
 if ( dizi[ n ] == anahtar )
 return n;

 return -1;
 }
