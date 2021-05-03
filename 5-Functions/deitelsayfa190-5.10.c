/* Exercise 5.10 Solution */
#include <stdio.h>
#include <math.h>

void calculateFloor( void );

int main()
{ 
   calculateFloor();

   return 0;
}

void calculateFloor( void )
{ 
   double x, y;
   int loop;

   for ( loop = 1; loop <= 5; loop++ )
   { 
      printf( "Enter a floating point value: " );
      scanf( "%lf", &x );
      y = floor( x + .5 );
      printf( "%f rounded is %.1f\n\n", x, y );
   }
}
