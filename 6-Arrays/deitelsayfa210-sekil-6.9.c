/* gekil 6.9: fig06_09.c
 6000 kez zar atma programý */
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #define BOYUT 7
 
int main( )
 {
 int yuz,zarAt, frekans[ BOYUT ] = { 0 };

 srand( time( NULL ) );

 for ( zarAt = 1; zarAt <= 6000; zarAt ++ ) {
 yuz = rand() % 6 + 1;
 ++frekans[ yuz ]; /* gekil 5.8 20.satýrdaki switch?in yerine geçer */
 }

 printf( "%s%17s\n", "Yuz", "Frekans" );

 for ( yuz = 1; yuz<= BOYUT- 1; yuz++ )
 printf( "%3d%17d\n", yuz, frekans [ yuz ] );

 return 0;
 }
