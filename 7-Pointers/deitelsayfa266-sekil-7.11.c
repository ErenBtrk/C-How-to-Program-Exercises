/* gekil 7.11: fig07_11.c
 Sabit bir veriyi gösteren sabit olmayan bir gösterici kullanarak
 bir stringin karakterlerini sýrayla yazdýrmak.*/

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
 gösteren göstericidir. Karakterler sPtr kullanarak deðiGtirilemezler
 (yani sptr, sadece okunabilir bir göstericidir). */
 void karakterleriYazdir ( const char *sPtr )
 {
 for ( ; *sPtr != '\0'; sPtr++ ) /* ilk deðer atamasý yok */
 printf( "%c", *sPtr );
 }
