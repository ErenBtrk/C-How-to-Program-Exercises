 /* sekil 14.2: fig14_02.c
 Degisken uzunlukta arguman listeleri kullanmak */
 #include <stdio.h>
 #include <stdarg.h>

double ortalama( int, ... );

int main( )
 {
 double w = 37.5, x = 22.5, y = 1.7, z = 10.2;

 printf( "%s%.1f\n%s%.1f\n%s%.1f\n%s%.1f\n\n",
 "w = ", w, "x = ", x, "y = ", y, "z = ", z );
 printf( "%s%.3f\n%s%.3f\n%s%.3f\n",
 "w ve x  ortalamasi : ",
 ortalama( 2, w, x ),
 "w, x ve y  ortalamasi : ",
 ortalama ( 3, w, x, y ),
 "w, x, y ve z  ortalamasi : ",
 ortalama( 4, w, x, y, z ) );

 return 0;
 }

 double ortalama( int i, ... )
 {
 double toplam = 0;
 int j;
 va_list ap;

 va_start( ap, i );

 for ( j = 1; j <= i; j++ )
 toplam += va_arg( ap, double );

 va_end( ap );
 return toplam / i;
 }
