/* gekil 6.11: fig06_11.c
 Statik dizilere 0 ilk deðeri atandý */
 #include <stdio.h>
 
 void statikDiziIlk ( void );
 void otomatikDiziIlk( void );
 
int main( )
 {
 printf( "Her fonksiyona ilk cagri:\n" );
 statikDiziIlk ( );
 otomatikDiziIlk ( );
 printf( "\nHer fonksiyona ikinci cagri:\n" );
 statikDiziIlk ( );
 otomatikDiziIlk ( );
 return 0;
 }

 /* a statik yerel diziyi kanýtlayan fonksiyon */
 void statikDiziIlk ( void )
 {
 static int a[ 3 ];
 int i;

 printf( "\nstatikDiziIlk'e girerken degerler:\n" );

 for ( i = 0; i <= 2; i++ )
 printf( "dizi1[%d] = %d ", i, a[ i ] );

 printf( "\nstatikDiziIlk'den cikarken degerler:\n" );

 for ( i = 0; i <= 2; i++ )
 printf( "dizi1[%d] = %d ", i, a[ i ] += 5 );
 }

 /* otomatik yerel diziyi kanýtlayacak fonksiyon */
 void otomatikDiziIlk ( void )
 {
 int a[ 3 ] = { 1, 2, 3 }, i;

 printf( "\n\notomatikDiziIlk'e girerken degerler:\n" );

 for ( i = 0; i <= 2; i++ )
 printf("dizi1 [ %d ] = %d ", i, a[ i ] );

 printf( "\notomatikDiziIlk'den cikarken degerler:\n" );

 for ( i = 0; i <= 2; i++ )
 printf( "dizi1[ %d ] = %d ", i, a[ i ] += 5 );
}
