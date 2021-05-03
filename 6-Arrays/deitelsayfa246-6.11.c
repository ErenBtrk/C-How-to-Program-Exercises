	/* Exercise 6.11 Solution */
#include <stdio.h>
#define MAX 10

int main()
{ 
   int a[ MAX ] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   int i, pass, hold, swap;

   printf( "Data items in original order\n" );

   for ( i = 0; i < MAX; i++ )
      printf( "%4d", a[ i ] );

   printf( "\n\n" );

   for ( pass = 1; pass < MAX; pass++ )
   { 
      swap = 0;

      for ( i = 0; i < MAX - pass; i++ )
         if ( a[ i ] > a[ i + 1 ] )
         { 
            swap = 1;
            hold = a[ i ];
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = hold;
         }	

      printf( "After Pass %d: ", pass );

      for ( i = 0; i <= MAX-pass; i++ )
         printf( "  %d", a[ i ] ); 
      printf( "\n" );

      if ( !swap )
         break;
   }

   printf( "\nData items in ascending order\n" );

   for ( i = 0; i < 10; i++ )
      printf( "%4d", a[ i ] );

   printf( "\n" );

   return 0;
}

