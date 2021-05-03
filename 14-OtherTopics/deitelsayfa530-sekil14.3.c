 /* sekil 14.3: fig14_03.c
 Komut satiri argümanlarini kullanmak */
 #include <stdio.h>

int main( int argc, char *argv[ ] )
 {
 FILE *girisDosyaPtr, *cikisDosyaPtr;
 int c;

 if ( argc != 3 )
 printf( "Kullanim:: copy girisDosyasi cikisDosyasi\n" );
 else
 if ( ( girisDosyaPtr = fopen( argv[ 1 ], "r" ) ) != NULL )

 if ( ( cikisDosyaPtr = fopen( argv[ 2 ], "w" ) ) != NULL )

 while ( ( c = fgetc( girisDosyaPtr ) ) != EOF )
 fputc( c, cikisDosyaPtr );

 else
 printf( "\"%s\" dosyasi acilamadi\n", argv[ 2 ] );

 else
 printf( "\"%s\" dosyasi acilamadi\n", argv[ 1 ] );

 return 0;
 }
