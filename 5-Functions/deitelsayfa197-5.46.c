/* ex05_46.c */
 #include <stdio.h>

int main( )
 {
 int c;
 
if ( ( c = getchar( ) ) != EOF ) {
 main( );
 printf ("%c",c);
 }

 return 0;
 }
