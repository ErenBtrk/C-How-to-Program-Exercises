 /* gekil 7.13: fig07_13.c
 Sabit olmayan bir veriyi g�steren sabit
 bir g�stericiyi de�iGtirmeye �al�Gmak.*/

#include <stdio.h>

int main( )
 {
 int x, y;

 int * const ptr = &x; /* ptr, tamsay� g�steren sabit bir g�stericidir
 Bir tamsay� ptr ile de�iGtirilebilir
 ama ptr haf�zada
 her zaman ayn� yeri g�sterir */
 *ptr = 7;
 ptr = &y;


 return 0;
 }
