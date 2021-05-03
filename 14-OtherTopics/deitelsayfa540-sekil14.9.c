 /* sekil 14.9: fig14_09.c
 goto kullanmak */
 #include <stdio.h>

int main( )
 {
 int sayici = 1;

basla: /* etiket */
 if ( sayici > 10 )
 goto son;

 printf( "%d ", sayici);
 ++sayici;
 goto basla;

 son: /* etiket*/
 putchar( '\n' );

 return 0;
 }
