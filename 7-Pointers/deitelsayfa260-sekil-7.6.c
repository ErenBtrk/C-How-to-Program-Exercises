 /* Þekil 7.6: fig07_06.c
 Deðere göre çaðýrma kullanarak bir deðerin küpünü almak */
 #include <stdio.h>
 
int degereGoreKup ( int ); /* prototip */
 
int main( )
 {
 int sayi = 5;

 printf( "Sayinin esas degeri %d", sayi);
 sayi = degereGoreKup ( sayi );
 printf( "\nSayinin yeni degeri %d\n", sayi);

 return 0;
 }

 int degereGoreKup( int n )
 {
 return n * n * n; /* yerel deðiþken n’in küpünü al*/
 }
