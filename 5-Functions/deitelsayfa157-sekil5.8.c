/* gekil 5.8:fig05_08.c
 6 yüzlü bir zarı 6000 kez atmak */
 #include <stdio.h>
 #include <stdlib.h>
 
int main( )
 {
 int yuz, atis, frekans1 = 0, frekans2 = 0,
 frekans3 = 0, frekans4= 0,
 frekans5= 0, frekans6= 0;

 for ( atis = 1; atis <= 6000; atis++ ) {
 yuz = 1 + rand() % 6;

 switch ( yuz ) {
 case 1:
 ++frekans1;
 break;
 case 2:
 ++frekans2;
 break;
 case 3:
 ++frekans3;
 break;
 case 4:
 ++frekans4;
 break;
 case 5:
 ++frekans5;
 break;
 case 6:
 ++frekans6;
 break;
 }
 }

 printf( "%s%13s\n", "Yuz", "Frekans" );
 printf( "1%15d\n", frekans1 );
 printf( "2%15d\n", frekans2 );
 printf( "3%15d\n", frekans3 );
 printf( "4%15d\n", frekans4 );
 printf( "5%15d\n", frekans5 );
 printf( "6%15d\n", frekans6 );
 return 0;
 }
