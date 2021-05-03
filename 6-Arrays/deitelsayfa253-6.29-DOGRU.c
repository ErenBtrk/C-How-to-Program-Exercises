/* Exercise 6.30 Solution */
#include <stdio.h>
#define SIZE 1000

int main()
{ 
   int array[ SIZE ], loop, loop2, count = 0;

   for ( loop = 0; loop < SIZE; loop++ )
      array[ loop ] = 1;

   for ( loop = 1; loop < SIZE; loop++ )
      if ( array[ loop ] == 1 && loop != 1 )
         for ( loop2 = loop; loop2 <= SIZE; loop2++ )
            if ( loop2 % loop == 0 && loop2 != loop )
               array[ loop2 ] = 0;



   /* range 2 - 197 */
   for ( loop = 2; loop < SIZE; loop++ ) 
      if ( array[ loop ] == 1 )
      { 
         printf( "%3d is a prime number.\n", loop );
         ++count;
       }

   printf( "A total of %d prime numbers were found.\n", count );

   return 0;
}

