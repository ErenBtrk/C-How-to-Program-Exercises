 /* gekil 6.16: fig06_16.c
 Bu program araGtýrma ve analiz yapar.
 orta, medyan, ve mod hesaplar. */
 #include <stdio.h>

 #define BOYUT 99
 
 void orta( const int [ ] );
 void medyan( int [ ] );
 void mod( int [ ], const int [ ] ) ;
 void kabarcikSiralama( int [ ] );
 void diziyiYazdir ( const int [ ] );

 int main( )
 {
 int frekans[ 10 ] = { 0 };
 int cevap [BOYUT] =
 { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
 7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
 6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
 7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
 6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
 7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
 5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
 7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
 7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
 4, 5, 6, 1, 6, 5, 7, 8, 7 };

 orta ( cevap );
 medyan (cevap );
 mod (frekans, cevap );
 return 0;
 }

 void orta ( const int cevap [ ] )
 {
 int j, toplam = 0;

 printf( "%s\n%s\n%s\n", "********", " orta ", "********" );

 for ( j = 0; j <= BOYUT - 1; j++ )
 toplam += cevap [ j ];

 printf( "Orta veri nesnelerinin ortalama degeridir.\n"
 "Ortalama butun veri nesnelerinin\n"
 "toplaminin veri nesnelerinin sayisina( %d )\n"
 "bolumudur. Bu veriler icin\n"
 "ortalama: %d / %d = %.4f\n\n",
 BOYUT, toplam, BOYUT, ( double ) toplam / BOYUT);
 }

 void medyan ( int cevap[ ] )
 {
 printf( "\n%s\n%s\n%s\n%s",
 "********", " medyan ", "********",

 "Siralanmamis Dizi " );

 diziyiYazdir( cevap );
 kabarcikSiralama ( cevap );
 printf( "\n\nSiralanmis dizi " );
 diziyiYazdir( cevap );
 printf( "\n\n Siralanmis %d elemanlik dizide\n"
 "medyan %d.elemandir\n"
 "Bu calistirilmada medyan %d\n\n",
 BOYUT, BOYUT/ 2, cevap[ BOYUT / 2 ] );
 }

 void mod( int frek[], const int cevap [] )
 {
 int puan, j, h, enBuyuk = 0, modDegeri = 0;

 printf( "\n%s\n%s\n%s\n",
 "********", " Mod", "********" );

 for (puan = 1; puan <= 9; puan ++ )
 frek[ puan ] = 0;

 for ( j = 0; j <= BOYUT - 1; j++ )
 ++frek [ cevap[ j ] ];

 printf( "%s%11s%19s\n\n%54s\n%54s\n\n",
 " Cevap ", " Frekans ", "Histogram",
 "1 1 2 2", "5 0 5 0 5" );

 for (puan = 1; puan <= 9; puan ++ ) {
 printf( "%8d%11d ", puan, frek[puan] );

 if ( frek[puan] > enBuyuk) {
 enBuyuk = frek[puan];
 modDegeri = puan;
 }

 for ( h = 1; h <= frek[puan]; h++ )
 printf( "*" );

 printf( "\n" );
 }

 printf( "Mod en sik rastlanan degerdir\n"
 "Bu calistirilmada mod %d dir."
 " %d kez rastlanmistir\n", modDegeri, enBuyuk);
 }

 void kabarcikSiralama( int a[] )
 {

 int tur, j, tut;

 for ( tur = 1; tur <= BOYUT - 1; tur++ )

 for ( j = 0; j <= BOYUT - 2; j++ )

 if ( a[ j ] > a[ j + 1 ] ) {
 tut = a[ j ];
 a[ j ] = a[ j + 1 ];
 a[ j + 1 ] = tut;
 }
 }

 void diziyiYazdir( const int a[] )
 {
 int j;

 for ( j = 0; j <= BOYUT - 1; j++ ) {

 if ( j % 20 == 0 )
 printf( "\n" );

 printf( "%2d", a[ j ] );
 }
 }
