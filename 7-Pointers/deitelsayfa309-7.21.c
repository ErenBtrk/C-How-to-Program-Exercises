 /* ex07_21.c */
#include <stdio.h>

void gizem1( char *, const char * );

int main( )
 {
 char string1[ 80 ], string2[ 80 ];

 printf( "Iki string giriniz: " );

 scanf( "%s%s" , string1, string2 );
 gizem1( string1, string2 );
 printf(" %s", string1 );

 return 0;
 }

 void gizem1( char *s1, const char *s2 )
 {
 while ( *s1 != '\0' )
 ++s1;

 for ( ; *s1 = *s2; s1++, s2++ )
 ; /* boþ ifade */
 }
