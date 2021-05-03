/* Exercise 5.27 Part C Solution */
#include <stdio.h>
#include <math.h>

int prime( int n );

int main()
{ 
   int number, j, count = 0;

   printf( "The prime numbers from 1 to 10000 are:\n" );

   for ( j = 1; j <= 10000; j++ )
      if ( prime( j ) )
      { 
         ++count;
         printf( "%5d", j );
      
         if ( count % 10 == 0 )
            printf( "\n" );
      }

   return 0;
}

int prime( int n )
{ 
   int i;

   for ( i = 2; i <= ( int ) sqrt( n ); i++ )
      if ( n % i == 0 )
         return 0;

   return 1;
}
