 /* gekil 7.13: fig07_13.c
 Sabit olmayan bir veriyi gösteren sabit
 bir göstericiyi değiGtirmeye çalıGmak.*/

#include <stdio.h>

int main( )
 {
 int x, y;

 int * const ptr = &x; /* ptr, tamsayı gösteren sabit bir göstericidir
 Bir tamsayı ptr ile değiGtirilebilir
 ama ptr hafızada
 her zaman aynı yeri gösterir */
 *ptr = 7;
 ptr = &y;


 return 0;
 }
