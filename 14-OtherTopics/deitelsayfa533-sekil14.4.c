 /* sekil 14.4: fig14_04.c
exit ve atexit fonksiyonlarini kullanmak.*/
 #include <stdio.h>
 #include <stdlib.h>

void yaz( void );

int main( )
 {
 int cevap;

 atexit( yaz );
 printf( "Programi exit fonksiyonu ile bitirmek icin 1 giriniz"
 "\nProgramdan normal cikis icin 2 giriniz\n" );
 scanf( "%d", &cevap );

 if ( cevap == 1 ) {
 printf( "\nProgramdan exit fonksiyonu kullanilarak cikiliyor\n" );
 exit( EXIT_FAILURE );
 }

 printf( "\nmain fonksiyonunun sonuna ulasilarak programdan cikiliyor\n" );
 return 0;
 }

 void yaz( void )
 {
 printf( "Program sonlanirken yaz fonksiyonu calisti\nProgram sonlandi\n" );
 }
