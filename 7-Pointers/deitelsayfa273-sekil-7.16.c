 /* gekil 7.16: fig07_16.c
 sizeof operatörü dizi isimlerine uygulandığında
 dizideki byte sayısını döndürür.*/
 #include <stdio.h>

size_t buyukluguBul( float * );

int main( )
 {
 float dizi[ 20 ];

 printf( "Dizinin byte uzunlugu: %d"
 "\nbuyukluguBul ile dondurulen byte sayisi: %d\n",
 sizeof( dizi), buyukluguBul( dizi ) );
 

 return 0;
 }

 size_t buyukluguBul( float *ptr )
 {
 return sizeof( ptr );
 }
