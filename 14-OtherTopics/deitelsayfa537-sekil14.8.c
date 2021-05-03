 /* Þekil 14.8: fig14_08.c
 Sinyal isleme kullanmak */
 #include <stdio.h>
 #include <signal.h>
 #include <stdlib.h>
 #include <time.h>

void sinyal_isleyici( int );

 int main( )
 {
 int i, x;

 signal( SIGINT, sinyal_isleyici );
 srand( time(NULL) );

 for ( i = 1; i <= 100; i++ ) {
 x = 1 + rand( ) % 50;
printf( "%4d=%d", i,x );

 if ( x == 25 )
 raise( SIGINT );



 if ( i % 10 == 0 )
 printf( "\n" );
 }

 return 0;
 }

 void sinyal_isleyici( int sinyalDegeri )
 {
 int yanit;

 printf( "%s%d%s\n%s",
        "\nKesme sinyali ( ", sinyalDegeri, " ) alindi.",
        "Devam etmek istiyor musunuz ( 1 = evet ya da 2 = hayir )? " );

 scanf( "%d", &yanit );

 while ( yanit != 1 && yanit != 2 ) {
 printf( "( 1 = evet ya da 2 = hayir )? " );
 scanf( "%d", &yanit );
 }

 if (yanit == 1 )
 signal( SIGINT, sinyal_isleyici );
 else
 exit( EXIT_SUCCESS );
 }
