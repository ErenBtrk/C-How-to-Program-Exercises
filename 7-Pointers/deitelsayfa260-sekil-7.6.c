 /* �ekil 7.6: fig07_06.c
 De�ere g�re �a��rma kullanarak bir de�erin k�p�n� almak */
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
 return n * n * n; /* yerel de�i�ken n�in k�p�n� al*/
 }
