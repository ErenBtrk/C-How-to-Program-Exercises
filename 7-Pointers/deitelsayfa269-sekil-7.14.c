 /* gekil 7.14: fig07_14.c
 Sabit bir veriyi g�steren sabit bir g�stericiyi
 de�iGtirmeye �al�Gmak. */
#include <stdio.h>

int main( )
 {
 int x = 5, y;

 const int *const ptr = &x; /* ptr sabit bir tamsay�y� g�steren
 sabit bir g�stericidir. ptr her zaman
 ayn� haf�za konumunu g�sterir
 ve o konumdaki tamsay�
 de�iGtirilemez. */
 printf( "%d\n", *ptr );
 *ptr = 7;
 ptr = &y;

 return 0;
 }
