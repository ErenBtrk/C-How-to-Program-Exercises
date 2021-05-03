 /* gekil 7.4: fig07_04.c
 & ve * operatörlerini kullanmak */
 #include <stdio.h>

 int main( )
 {
 int a; /* a bir tamsayýdýr */
 int *aPtr; /* aPtr bir tamsayýyý gösteren bir göstericidir */

 a = 7;
 aPtr = &a; /* aPtr'ye a'nýn adresi atandý */

 printf( "a'nin adresi %p"
  "\naPtr degiskeninin degeri %p", &a, aPtr );

 printf( "\n\na'nin degeri %d"
 "\n*aPtr'nin degeri %d", a, *aPtr );

 printf( "\n\n* ve & birbirlerinin "
 "eslenigidir.\n&*aPtr = %p"
 "\n*&aPtr = %p\n", &*aPtr, *&aPtr );

 return 0;
 }
