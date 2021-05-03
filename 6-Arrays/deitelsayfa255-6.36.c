/* Exercise 6.37 Solution */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printArray( int [], int, int );

int main()
{ 
   int array[ SIZE ], loop;

   srand( time( NULL ) );

   for ( loop = 0; loop < SIZE; loop++ )
      array[ loop ] = 1 + rand() % 500;

   printf( "Array values printed in main:\n" );

   for ( loop = 0; loop < SIZE; loop++ )
      printf( "%d  ", array[ loop ] );

   printf( "\n\nArray values printed in printArray:\n" );
   printArray( array, 0, SIZE - 1 );
   printf( "\n" );

   return 0;
}

void printArray( int array[], int low, int high )
{ 
   printf( "%d  ", array[ low ] );

   if ( low == high )
      return;
   else
      printArray( array, low + 1, high );
}
