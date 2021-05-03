/* Exercise 6.28 Solution */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main()
{ 
   int loop, randNumber, loop2, subscript = 0;
   int array[ SIZE ] = { 0 }, duplicate;

   srand( time( NULL ) );

   for ( loop = 0; loop <= SIZE - 1; loop++ )
   { 
      duplicate = 0;
      randNumber = 1 + rand() % 20;

      for ( loop2 = 0; loop2 <= subscript; loop2++ )
         if ( randNumber == array[ loop2 ] )
         { 
            duplicate = 1;
            break;
          }

         if ( !duplicate )
            array[ subscript++ ] = randNumber;
    }

   printf( "Non-repetitive array values are:\n" );

   for ( loop = 0; array[ loop ] != 0; loop++ )
      printf( "\t\t\t\tArray[ %d ] = %d\n", loop, array[ loop ] );

   return 0;
 }

