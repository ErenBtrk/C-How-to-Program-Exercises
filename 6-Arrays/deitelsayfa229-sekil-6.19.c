/* gekil 6.19: fig06_19.c
 Bir dizide ikili arama */
 #include <stdio.h>
 #define BOYUT 15

 int ikiliArama( const int [ ], int, int, int );
 void baslikYazdir( void );
 void satirYazdir( const int [], int, int, int );

 int main( )
 {
 int a[BOYUT], i, anahtar, sonuc;

 for ( i = 0; i <= BOYUT - 1; i++ )
 a[ i ] = 2 * i;

 printf( "0 ile 28 arasinda bir sayi giriniz: " );
 scanf( "%d", & anahtar );

 baslikYazdir ( );
 sonuc = ikiliArama ( a, anahtar, 0, BOYUT - 1 );

 if (sonuc!= -1 )
 printf( "\n%d, dizi elemani %d icinde bulundu\n", anahtar, sonuc);
 else
 printf( "\n%d bulunamadi\n", anahtar);

 return 0;
 }


 int ikiliArama ( const int b[], int aramaDegeri, int enAlt, int enUst)
 {
 int orta;

 while (enAlt<= enUst) {
 orta = ( enAlt + enUst ) / 2;

 satirYazdir ( b, enAlt, orta, enUst);

 if (aramaDegeri == b[orta] )
 return orta;
 else if (aramaDegeri < b[orta] )
 enUst = orta - 1;
 else
 enAlt = orta + 1;
 }

 return -1; /* aramaDegeri bulunamadý */
 }

 /* ÇýkýG için bir baGlýk yazdýr */
 void baslikYazdir ( void )
 {
 int i;

 printf( "\nBelirtecler:\n" );

 for ( i = 0; i <= BOYUT - 1; i++ )
 printf( "%3d ", i );

 printf( "\n" );

 for ( i = 1; i <= 4 * BOYUT; i++ )
 printf( "-" );

 printf( "\n" );
 }

 /* Dizinin iGlem yapýlan kýsmýný gösteren bir
 satýr çýktý yazdýr. */
 void satirYazdir ( const int b[], int enAlt, int orta, int enUst)
 {
 int i;

 for ( i = 0; i <= BOYUT - 1; i++ )
 if ( i < enAlt || i > enUst)
 printf( " " );
 else if ( i == orta)
 printf( "%3d*", b[ i ] ); /* ortadaki deðeri iGaretle */

 else
 printf( "%3d ", b[ i ] );

 printf( "\n" );
 }
