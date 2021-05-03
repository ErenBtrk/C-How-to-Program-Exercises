/* Exercise 6.32 Solution */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRANGE 1000
#define SIZE 10

void selectionSort( int [], int );

int main()
{ 
   int sortThisArray[ SIZE ] = { 0 }, loop;

   srand( time( NULL ) );

   for ( loop = 0; loop < SIZE; loop++ )
      sortThisArray[ loop ] = 1 + rand() % MAXRANGE;

   printf( "\nUnsorted array is:\n" );
   for ( loop = 0; loop < SIZE; loop++ )
      printf( " %d ", sortThisArray[ loop ] );

   selectionSort( sortThisArray, SIZE );

   printf( "\n\nSorted array is:\n" );
   for ( loop = 0; loop < SIZE; loop++ )
      printf( " %d ", sortThisArray[ loop ] );

   printf( "\n\n" );

   return 0;
}

void selectionSort( int array[], int size )
{ 
   int temp, loop;

   if ( size >= 1 ) { 
      for ( loop = 0; loop <= size - 1; loop++ )
         if ( array[ loop ] < array[ 0 ] ) { 
            temp = array[ loop ];
            array[ loop ] = array[ 0 ];
            array[ 0 ] = temp;
         }
      selectionSort( &array[ 1 ], size - 1 );
   }
}

