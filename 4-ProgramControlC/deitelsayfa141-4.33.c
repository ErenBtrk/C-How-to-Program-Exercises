/* Exercise 4.33 Solution */
#include<stdio.h>

int main( void )
{ 
   int loop, div, mod;

   printf( " Roman\nNumeral\t\tDecimal\n" );

   for ( loop = 1; loop <= 100; loop++ )
   { 
      div = loop / 10;
      mod = loop % 10;

      /* switch structure for tens digit */
      switch ( div )
      { 
          
         case 0:
            break;
         case 1:
            printf( "X" );
            break;
         case 2:
            printf( "XX" );
            break;
         case 3:
            printf( "XXX" );
            break;
         case 4:
            printf( "XL" );
            break;
         case 5:
            printf( "L" );
            break;
         case 6:
            printf( "LX" );
            break;
         case 7:
             printf( "LXX" );
             break;
         case 8:
             printf( "LXXX" );
             break;
         case 9:
             printf( "XC" );
             break;
         case 10:
             printf( "C" );
             break;
         default:
             break;
      }
      /* switch structure for ones digit */
      switch( mod )
      { 
         case 0:
            printf( "\t\t%4d\n", div * 10 );
            break;
         case 1:
            printf( "I\t\t%4d\n", div * 10 + mod );
            break;
         case 2:
            printf( "II\t\t%4d\n", div * 10 + mod );
            break;
         case 3:
            printf( "III\t\t%4d\n", div * 10 + mod );
            break;
         case 4:
            printf( "IV\t\t%4d\n", div * 10 + mod );
            break;
         case 5:
            printf( "V\t\t%4d\n", div * 10 + mod );
            break;
         case 6:
            printf( "VI\t\t%4d\n", div * 10 + mod );
            break;
         case 7:
            printf( "VII\t\t%4d\n", div * 10 + mod );
            break;
         case 8:
            printf( "VIII\t\t%4d\n", div * 10 + mod );
            break;
         case 9:
            printf( "IX\t\t%4d\n", div * 10 + mod );
            break;
         case 10:
            printf( "X\t\t%4d\n", div * 10 + mod );
            break;
         default:
            break;
      }
   }

   return 0;
}
