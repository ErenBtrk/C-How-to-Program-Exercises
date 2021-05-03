/* gekil 6.22: fig06_22.c
2 Gki boyutlu dizi kullanan örnek */
 #include <stdio.h>
 #define OGRENCILER 3
 #define SINAVLAR 4
 
int minimum( const int [ ][SINAVLAR], int, int );
 int maksimum( const int [ ][SINAVLAR], int, int );
 double ortalama( const int [ ], int );
 void diziyiYazdir( const int [ ][SINAVLAR], int, int );

 int main( )
 {
 int ogrenci;
 const int ogrenciNotlari [OGRENCILER][ SINAVLAR] =
 { { 77, 68, 86, 73 },
 { 96, 87, 89, 78 },
 { 70, 90, 86, 81 } };

 printf( "Dizi:\n" );
 diziyiYazdir (ogrenciNotlari, OGRENCILER, SINAVLAR);
 printf( "\n\nEn Dusuk Not: %d\nEn Yuksek Not: %d\n",
 minimum(ogrenciNotlari, OGRENCILER, SINAVLAR),
 maksimum (ogrenciNotlari, OGRENCILER, SINAVLAR) );

 for (ogrenci = 0; ogrenci <= OGRENCILER - 1; ogrenci ++ )
 printf( "Ogrenci %d icin ortalama not %.2f\n",
 ogrenci,
 ortalama (ogrenciNotlari [ogrenci], SINAVLAR) );

 return 0;
 }

 /* Minimum notu bul */
 int minimum( const int notlar[][SINAVLAR],
 int talebeler, int testler)
 {
 int i, j, dusukNot = 100;
 

 for ( i = 0; i <= talebeler - 1; i++ )
 for ( j = 0; j <= testler - 1; j++ )
 if ( notlar[ i ][ j ] < dusukNot)
 dusukNot = notlar[ i ][ j ];

 return dusukNot;
 }

 /* maksimum notu bul */
 int maksimum( const int notlar[][SINAVLAR],
 int talebeler, int testler )
 {
 int i, j, yuksekNot = 0;

 for ( i = 0; i <= talebeler- 1; i++ )
 for ( j = 0; j <= testler - 1; j++ )
 if ( notlar[ i ][ j ] > yuksekNot)
 yuksekNot = notlar[ i ][ j ];

 return yuksekNot;
 }

 /* Belirli bir sýnavýn ortalama notunun hesaplanmasý */
 double ortalama( const int notlarinKumesi [], int testler )
 {
 int i, toplam = 0;

 for ( i = 0; i <= testler - 1; i++ )
 toplam += notlarinKumesi [ i ];

 return ( double ) toplam / testler;
 }

 /* Diziyi yazdýr */
 void diziyiYazdir ( const int notlar[][SINAVLAR],
 int talebeler, int testler)
 {
 int i, j;

 printf( "                    [0]  [1]  [2]  [3]" );

 for ( i = 0; i <= talebeler - 1; i++ ) {
 printf( "\n ogrenciNotlari [%d] ", i );

 for ( j = 0; j <= testler - 1; j++ )
 printf( "%-5d", notlar[ i ][ j ] );
 }
 }
