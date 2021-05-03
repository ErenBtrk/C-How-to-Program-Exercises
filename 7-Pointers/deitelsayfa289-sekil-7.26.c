 /* gekil 7.26: fig07_26.cpp
 fonksiyonlarý gösteren göstericiler kullanan çok amaçlý bir sýralama fonksiyonu */
 #include <stdio.h>
 #define BOYUT 10
 void kabarcik ( int [ ], const int, int (*)( int, int ) );
 int artan( int, int );
 int azalan( int, int );
 
 int main( )
 {

 int secim,
 sayici,
 a[ BOYUT ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

 printf( "Artan siralama icin 1 girin,\n"
 "Azalan siralama icin 2 girin: " );
 scanf( "%d", &secim);
 printf( "\nVeriler orijinal sirasinda \n" );

 for ( sayici = 0; sayici < BOYUT; sayici++ )
 printf( "%5d", a[ sayici] );

 if ( secim == 1 ) {
 kabarcik( a, BOYUT, artan);
 printf( "\nVeriler artan sirada \n" );
 }
 else {
 kabarcik( a, BOYUT, azalan);

 printf( "\nVeriler azalan sirada \n" );
 }

 for ( sayici = 0; sayici < BOYUT; sayici++ )
 printf( "%5d", a[ sayici ] );

 printf( "\n" );

 return 0;
 }

 void kabarcik( int is[ ], const int boyut,
 int (*karsilastir)( int, int ) )
 {
 int tur, sayici;

 void yerDegistir( int *, int * );

 for ( tur = 1; tur < boyut; tur++ )

 for ( sayici = 0; sayici < boyut - 1; sayici++ )

 if ( (*karsilastir)( is[ sayici ], is[ sayici + 1 ] ) )
 yerDegistir( &is[ sayici ], &is[ sayici + 1 ] );
 }

 void yerDegistir( int *eleman1Ptr, int *eleman2Ptr )
 {
 int temp;

 temp = *eleman1Ptr;
 *eleman1Ptr = *eleman2Ptr;
 *eleman2Ptr = temp;
 }

 int artan( int a, int b )
 {
 return b < a; /* b, a dan küçükse yer deðiGtir*/
 }

 int azalan( int a, int b )
 {
 return b > a; /* b, a dan büyükse yer deðiGtir */
 }
