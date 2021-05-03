/* ex05_47.c */
 #include <stdio.h>

int gizem(int, int);

int main( )

 {
 int x,y;

 printf ("Iki tamsayi girin.:");
 scanf("%d%d" ,&x, &y);
 printf ("Sonuc %d\n", gizem(x,y));
 return 0;
 }

 /* b parametresi, sonsuz yineleme olmamasý için
 pozitif olmak zorunda */
 int gizem(int a, int b)
 {
 if (b == 1)
 return a;
 
 else
 return a + gizem(a, b-1);
 }
