/* gekil 6.14: fig06_14.c
 const tip belirtecinin dizilerde kullanýmý */
 #include <stdio.h>
 
void diziyiAyarlamayiDene ( const int [] );

 
int main( )
 {
 int a[] = { 10, 20, 30 };

 diziyiAyarlamayiDene ( a );
 printf("%d %d %d\n", a[ 0 ], a[ 1 ], a[ 2 ] );
 return 0;
 }

 void diziyiAyarlamayiDene ( const int b[] )
 {
 b[ 0 ] /= 2; /* hata */
 b[ 1 ] /= 2; /* hata */
 b[ 2 ] /= 2; /* hata */
 }
