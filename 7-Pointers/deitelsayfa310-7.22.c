 /* ex07_22.c */
#include <stdio.h>

int gizem2( const char * );

int main( )
 {
 char string[ 80 ];

 printf( " Bir string giriniz: ");
 scanf( "%s", string );
 printf( " %d\n", gizem2( string ) );

 return 0;
 }

 int gizem2( const char *s )
 {
 int x;

 for ( x = 0; *s != '\0'; s++ )
 ++x;

 return x;
 }
