/* Exercise 6.35 Solution */
#include <stdio.h>
#define SIZE 15

int binarySearch( int [], int, int, int );
void printHeader( void );
void printRow( int [], int, int, int );

int main()
{ 
   int a[ SIZE ], i, key, result;

   for ( i = 0; i < SIZE; i++ )
      a[ i ] = 2 * i;

   printf( "Enter a number between 0 and 28: " );
   scanf( "%d", &key );

   printHeader();
   result = binarySearch( a, key, 0, SIZE - 1 );

   if ( result != -1 )
      printf( "\n%d found in array element %d\n", key, result );
   else
      printf( "\n%d not found\n", key );

   return 0;
}

int binarySearch( int b[], int searchKey, int low, int high )
{ 
   int middle;

   if ( low <= high ) { 
      middle = ( low + high ) / 2;
      printRow( b, low, middle, high );

      if ( searchKey == b[ middle ] )
         return middle;
      else if ( searchKey < b[ middle ] )
         return binarySearch( b, searchKey, low, middle - 1 );
      else
         return binarySearch( b, searchKey, middle + 1, high );
   }

   return -1;   /* searchKey not found */
}

/* Print a header for the output */
void printHeader( void )
{ 
   int i;

   printf( "\nSubscripts:\n" );

   for ( i = 0; i < SIZE; i++ )
      printf( "%3d ", i );

   printf( "\n" );

   for ( i = 1; i <= 4 * SIZE; i++ )
      printf( "-" );

   printf( "\n" );
}

/* print one row of output showing the current
   part of the array being processed.  */
void printRow( int b[], int low, int mid, int high )
{ 
   int i;

   for ( i = 0; i < SIZE; i++ )
      if ( i < low || i > high )
         printf( "    " );
      else if ( i == mid )
         printf( "%3d*", b[ i ] );    /* mark middle value */
      else
         printf( "%3d ", b[ i ] );

   printf( "\n" );
}

