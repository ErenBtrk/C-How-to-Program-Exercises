/* gekil 6.12: fig06_12.c
 Bir dizinin ismi &dizi[ 0 ] ile aynýdýr. */
 #include <stdio.h>

 int main( )
 {
 char dizi[ 5 ];

 printf( " dizi = %p\n &dizi[0] = %p\n &dizi= %p\n",
 dizi, &dizi[ 0 ], &dizi);
 return 0;
 }
