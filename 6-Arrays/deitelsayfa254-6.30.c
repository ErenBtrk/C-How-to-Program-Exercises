/* Exercise 6.31 Solution */
#include <stdio.h>

/* symbolic constant SIZE must be defined as the array size
   for bucketSort to work */
#define SIZE 12

void bucketSort( int [] );
void distributeElements( int [], int [][ SIZE ], int );
void collectElements( int [], int [][ SIZE ] );
int numberOfDigits( int [], int );
void zeroBucket( int [][ SIZE ] );

int main()
{ 
   int array[ SIZE ] = { 19, 13, 5, 27, 1, 26, 31, 16, 2, 9, 11, 21 };
   int i;

   printf( "Array elements in original order:\n" );

   for ( i = 0; i < SIZE; i++ )
      printf( "%3d", array[ i ] );

   putchar( '\n' );
   bucketSort( array );

   printf( "\nArray elements in sorted order:\n" );

   for ( i = 0; i < SIZE; i++ )
      printf( "%3d", array[ i ] );

   putchar( '\n' );
   return 0;
}

/* Perform the bucket sort algorithm */
void bucketSort( int a[] )
{ 
   int totalDigits, i, bucket[ 10 ][ SIZE ] = { 0};

   totalDigits = numberOfDigits( a, SIZE );

   for ( i = 1; i <= totalDigits; i++ )
   {
       distributeElements( a, bucket, i );
       collectElements( a, bucket );

       if ( i != totalDigits )
           zeroBucket( bucket );  /* set all bucket contents to zero */
   }
}

/* Determine the number of digits in the largest number */
int numberOfDigits( int b[], int arraySize )
{ 
   int largest = b[ 0 ], i, digits = 0;

   for ( i = 1; i < arraySize; i++ )
      if ( b[ i ] > largest )
         largest = b[ i ];

   while ( largest != 0 )
   { 
      ++digits;
      largest /= 10;
   }

   return digits;
}

/* Distribute elements into buckets based on specified digit */
void distributeElements( int a[], int buckets[][ SIZE ], int digit )
{ 
   int divisor = 10, i, bucketNumber, elementNumber;

   for ( i = 1; i < digit; i++ )   /* determine the divisor */
      divisor *= 10;             /* used to get specific digit */

   for ( i = 0; i < SIZE; i++ )
   { 
      /* bucketNumber example for hundreds digit: */
      /* ( 1234 % 1000 - 1234 % 100 ) / 100 --> 2   */
      bucketNumber = ( a[ i ] % divisor - a[ i ] % ( divisor / 10 ) ) / ( divisor/10 );

      /* retrieve value in buckets[ bucketNumber ][ 0 ] to determine */
      /* which element of the row to store a[ i ] in.              */
      elementNumber = ++buckets[ bucketNumber ][ 0 ];
      buckets[ bucketNumber ][ elementNumber ] = a[ i ];
   }
}

/* Return elements to original array */
void collectElements( int a[], int buckets[][ SIZE ] )
{ 
   int i, j, subscript = 0;

   for ( i = 0; i < 10; i++ )
      for ( j = 1; j <= buckets[ i ][ 0 ]; j++ )
         a[ subscript++ ] = buckets[ i ][ j ];
}

/* Set all buckets to zero */
void zeroBucket( int buckets[][ SIZE ] )
{ 
   int i, j;

   for ( i = 0; i < 10; i++ )
      for ( j = 0; j < SIZE; j++ )
         buckets[ i ][ j ] = 0;
}



