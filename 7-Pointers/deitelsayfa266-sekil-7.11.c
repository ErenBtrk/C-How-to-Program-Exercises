/* gekil 7.11: fig07_11.c
 Sabit bir veriyi g�steren sabit olmayan bir g�sterici kullanarak
 bir stringin karakterlerini s�rayla yazd�rmak.*/

#include <stdio.h>

void karakterleriYazdir ( const char * );

int main( )
 {
 char string [ ] = "string karakterlerini yaz";

 printf( "String:\n" );
 karakterleriYazdir( string );
 printf( "\n" );

 return 0;
 }

 /* karakterleriYazdir fonksiyonunda sPtr bir karakter sabitini
 g�steren g�stericidir. Karakterler sPtr kullanarak de�iGtirilemezler
 (yani sptr, sadece okunabilir bir g�stericidir). */
 void karakterleriYazdir ( const char *sPtr )
 {
 for ( ; *sPtr != '\0'; sPtr++ ) /* ilk de�er atamas� yok */
 printf( "%c", *sPtr );
 }
