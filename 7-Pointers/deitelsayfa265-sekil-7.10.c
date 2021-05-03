 /* gekil 7.10: fig07_10.c
 Sabit olmayan veriyi g�steren sabit olmayan g�sterici kullanarak
 k���k harfleri b�y�k harfe �evirmek.*/

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
 *sPtr = toupper( *sPtr ); /* b�y�k harfe �evir */
 

 ++sPtr; /* sPtr ile di�er karaktere ge� */
 }
 }
