 /* gekil 7.4: fig07_04.c
 & ve * operat�rlerini kullanmak */
 #include <stdio.h>

 int main( )
 {
 int a; /* a bir tamsay�d�r */
 int *aPtr; /* aPtr bir tamsay�y� g�steren bir g�stericidir */

 a = 7;
 aPtr = &a; /* aPtr'ye a'n�n adresi atand� */

 printf( "a'nin adresi %p"
  "\naPtr degiskeninin degeri %p", &a, aPtr );

 printf( "\n\na'nin degeri %d"
 "\n*aPtr'nin degeri %d", a, *aPtr );

 printf( "\n\n* ve & birbirlerinin "
 "eslenigidir.\n&*aPtr = %p"
 "\n*&aPtr = %p\n", &*aPtr, *&aPtr );

 return 0;
 }
