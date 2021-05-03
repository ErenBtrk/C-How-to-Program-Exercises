/* Exercise 6.34 Solution */
#include <stdio.h>
#define SIZE 100

int linearSearch( int [], int, int, int );

int main()
{ 
   int array[ SIZE ], loop, searchKey, element;

   for ( loop = 0; loop < SIZE; loop++ )
      array[ loop ] = 2 * loop;

   printf( "Enter the integer search key: " );
   scanf( "%d", &searchKey );
   element = linearSearch( array, searchKey, 0, SIZE - 1 );

   if ( element != -1 )
      printf( "Found value in element %d\n", element );
   else
      printf( "Value not found\n" );

   return 0;
}

int linearSearch( int array[], int key, int low, int high )
{ 
   if ( array[ low ] == key )
      return low;
   else if ( low == high )
      return -1;
   else
      return linearSearch( array, key, low + 1, high );
}
