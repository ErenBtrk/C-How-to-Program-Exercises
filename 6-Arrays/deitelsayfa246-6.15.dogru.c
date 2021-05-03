/* Exercise 6.15 Solution */
#include <stdio.h>
#define MAX 20

int main()
{ 
   int a[ MAX ] = { 0}, i, j, k = 0, duplicate, value;

   printf( "Enter 20 integers between 10 and 100:\n" );

   for ( i = 0; i <= MAX - 1; i++ )
   { 
      duplicate = 0;
      scanf( "%d", &value );

      for ( j = 0; j < k; j++ ) 
         if ( value == a[ j ] )
         { 
            duplicate = 1;
            break;
         }
       
      if ( !duplicate )
         a[ k++ ] = value;
   }

   printf( "\nThe nonduplicate values are:\n" );

   for ( i = 0; a[ i ] != 0; i++ )
      printf( "%d  ", a[ i ] );

   printf( "\n" );

   return 0;
}	


