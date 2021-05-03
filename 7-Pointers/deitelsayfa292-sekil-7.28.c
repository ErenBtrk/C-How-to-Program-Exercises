 /* gekil 7.28: fig07_28.cpp
 Fonksiyonlarý gösteren göstericilerin dizisi */
#include <stdio.h>
 void fonksiyon1( int );
 void fonksiyon2( int );
 void fonksiyon3( int );
 
int main( )
 {
 void (*f[ 3 ])( int ) = { fonksiyon1, fonksiyon2, fonksiyon3 };
 int secim;

 printf( "0 ile 2 arasinda bir sayi, ya da cikis icin 3 giriniz: " );
 scanf( "%d", &secim );

 while ( secim >= 0 && secim < 3 ) {
 (*f[ secim ])( secim );
 printf( "0 ile 2 arasinda bir sayi, ya da cikis için 3 giriniz: ");
 scanf( "%d", &secim );
 }

 printf( "Programin calismasi bitti\n" );

 return 0;
 }
 void fonksiyon1( int a )
 {
 printf( "%d girdiniz"
 " yani fonksiyon1 cagirildi \n\n", a );
 }

 void fonksiyon2( int b )
 {
 printf( " %d girdiniz"
 " fonksiyon2 cagirildi\n\n", b );
 }

 void fonksiyon3( int c )
 {
 printf( "%d girdiniz"
 " fonksiyon3 cagirildi\n\n", c );
 }
