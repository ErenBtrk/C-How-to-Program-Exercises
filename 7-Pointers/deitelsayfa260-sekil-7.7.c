 /* �ekil 7.7: fig07_07.c
 Referansa g�re �a��rma kullanarak bir de�erin k�p�n� almak */
 
#include <stdio.h>
 
void referansaGoreKup ( int * ); /* prototip */

int main( )
 {
 int sayi = 5;

 printf( "Sayinin esas degeri %d", sayi);
 referansaGoreKup( &sayi);
 printf( "\nSayinin yeni degeri %d\n", sayi);

 return 0;
 }

 void referansaGoreKup( int *nPtr )
 {
 *nPtr = *nPtr * *nPtr * *nPtr; /* main�deki sayi�n�n k�p� al�nd� */
 }
