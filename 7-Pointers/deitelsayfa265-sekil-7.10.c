 /* gekil 7.10: fig07_10.c
 Sabit olmayan veriyi gösteren sabit olmayan gösterici kullanarak
 küçük harfleri büyük harfe çevirmek.*/

#include <stdio.h>
#include <ctype.h>

void buyukHarfeCevir( char * );

 int main( )
 {
 char string[ ] = "karakterler ve $32.98";

 printf( "Cevrilmeden onceki string: %s", string );
 buyukHarfeCevir( string );
 printf( "\nCevrildikten sonraki string: %s\n", string );

 return 0;
 }

 void buyukHarfeCevir ( char *sPtr )
 {
 while ( *sPtr != '\0' ) {

 if ( islower( *sPtr ) )
 *sPtr = toupper( *sPtr ); /* büyük harfe çevir */
 

 ++sPtr; /* sPtr ile diðer karaktere geç */
 }
 }
