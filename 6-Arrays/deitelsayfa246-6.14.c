/* Exercise 6.14 Solution */
#include <stdio.h>
#define SIZE 100

void mean( int [] );
void median( int [] );
void mode( int [], int [] );

int main()
{ 
   int response[ SIZE ] = { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                            7, 8, 9, 5, 9, 8, 7, 8, 7, 1,
                            6, 7, 8, 9, 3, 9, 8, 7, 1, 7,
                            7, 8, 9, 8, 9, 8, 9, 7, 1, 9,
                            6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                            7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                            5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                            7, 8, 9, 6, 8, 7, 8, 9, 7, 1,
                            7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                            4, 5, 6, 1, 6, 5, 7, 8, 7, 9};
   int frequency[ 10 ] = { 0}, n;
   
   mean( response );
   median( response );
   mode( frequency, response );

   return 0;
}

void mean( int answer[] )            /* mean */
{ 
   int j, total = 0;
   
   printf( "%s\n%s\n%s\n", "******", " Mean", "******" );
   
   for ( j = 0; j <= SIZE - 1; j++ )
      total += answer[ j ];
   
   printf( "The mean is the average value of the data\n" );
   printf( "items. The mean is equal to the total of\n" );
   printf( "all the data items divided by the number\n" );
   printf( "of data items ( %d ). ,", SIZE );
   printf( "The mean value for this run is: " );
   printf( "%d / %d = %.4f\n\n", total, SIZE, ( double ) total / SIZE );
}

void median( int answer[] )               /* median */
{ 
   int loop, pass, hold, firstRow;
   
   printf( "\n%s\n%s\n%s\n", "******", "Median", "******" );
   printf( "The unsorted array of responses is\n" );
   
   for ( loop = 0, firstRow = 1; loop <= SIZE - 1; loop++ )
   { 
      if ( loop % 20 == 0 && !firstRow )
         printf( "\n" );
         
      printf( "%2d", answer[ loop ] );
      firstRow = 0;
   }
   
   printf( "\n\n" );
   
   for ( pass = 0; pass <= SIZE - 2; pass++ )
      for ( loop = 0; loop <= SIZE - 2; loop++ )
         if ( answer[ loop ] > answer[ loop + 1 ] )
         { 
            hold = answer[ loop ];
            answer[ loop ] = answer[ loop + 1 ];
            answer[ loop + 1 ] = hold;
         }

   printf( "The sorted array is\n" );
   
   for ( loop = 0, firstRow = 1; loop <= SIZE - 1; loop++ )
   { 
      if ( loop % 20 == 0 && !firstRow )
         printf( "\n" );

      printf( "%2d", answer[ loop ] );
      firstRow = 0;
   }
   
   printf( "\n\n" );

   if ( SIZE % 2 == 0 ) {     /* even number of elements */
      printf( "The median is the average of elements %d", ( SIZE + 1 ) / 2 );
      printf( " and %d of", 1 + ( SIZE + 1 ) / 2 );
      printf( " the sorted %d element array.\n", SIZE );
      printf( "For this run the median is " );
      printf( "%.1f\n\n", ( double )( answer[ ( SIZE + 1 ) / 2 ] +
                        answer[ ( SIZE + 1 ) / 2 + 1 ] ) / 2 );
   }
   else {                 /* odd number of elements  */
      printf( "The median is element %d of ", ( SIZE + 1 ) / 2 );
      printf( "the sorted %d element array.\n", SIZE );
      printf( "For this run the median is " );
      printf( "%d\n\n", answer[ ( SIZE + 1 ) / 2 - 1 ] );
   }
}

void mode( int freq[], int answer[] )         /* mode */
{ 
   int rating, loop, largest = 0, array[ 10 ] = { 0};
   int count = 0;

   printf( "\n%s\n%s\n%s\n", "******", " Mode", "******" );
   
   for ( rating = 1; rating <= 9; rating++ )
      freq[ rating ] = 0;
      
   for ( loop = 0; loop <= SIZE - 1; loop++ )
      ++freq[ answer[ loop ] ];
      
   printf( "%s%11s%19s\n\n", "Response", "Frequency", "Histogram" );
   printf( "%54s\n", "1    1    2    2" );
   printf( "%54s\n\n", "5    0    5    0    5" );
   
   for ( rating = 1; rating <= 9; rating++ )
   { 
      printf( "%8d%11d          ", rating, freq[ rating ] );
      
      if ( freq[ rating ] > largest )
      { 
         largest = freq[ rating ];

         for ( loop = 0; loop <= 10; loop++ )
            array[ loop ] = 0;

         array[ rating ] = largest;
         ++count;
      }
      else if ( freq[ rating ] == largest )
      { 
         array[ rating ] = largest;
         ++count;
      }

      for ( loop = 1; loop <= freq[ rating ]; loop++ )
         printf( "*" );
         
      printf( "\n" );
   }

   printf( "\n" );

   if ( count > 1 )
      printf( "The modes are:  " );
   else
      printf( "The mode is: " );

   for ( loop = 1; loop <= 9; loop++ )
   { 
      if ( array[ loop ] != 0 )
         printf( "%d with a frequency of %d\n\t\t", loop, array[ loop ] );
   }

   printf( "\n" );
}

