 /* gekil 7.21: fig07_21.cpp
 Bir stringi dizi gösterimi ve göstericileri
 kullanarak kopyalamak.*/
 #include <stdio.h>

 void kopya1( char *, const char * );
 void kopya2( char *, const char * );

int main( )
 {
 char string1[ 10 ], *string2 = "Merhaba",
 string3[ 10 ], string4[] = "Gule gule";

 kopya1( string1, string2 );
 printf( "string1 = %s\n", string1 );

 kopya2( string3, string4 );
 printf( "string3 = %s\n", string3 );

 return 0;
  }

 /* s2 yi s1e dizi gösterimi ile kopyalama */
 void kopya1( char *s1, const char *s2 )
 {
 int i;
 for ( i = 0; ( s1[ i ] = s2[ i ] ) != '\0'; i++ )
 ; /* döngünün içinde bir Gey yapma */
 }

 /* s2 yi s1 e gösterici gösterimi ile kopyala */
 void kopya2( char *s1, const char *s2 )
 {
 for ( ; ( *s1 = *s2 ) != '\0'; s1++, s2++ )
 ; /* döngünün içinde bir Gey yapma */
 }
