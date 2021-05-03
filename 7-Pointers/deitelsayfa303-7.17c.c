/* Exercise 7.17 Solution */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void moveTortoise( int * );
void moveHare( int * );
void printCurrentPositions( int *, int * );

int main()
{ 
   int tortoise = 1, hare = 1, winner, timer = 0;

   srand( time( NULL ) );

   printf( "ON YOUR MARK, GET SET\n" );
   printf( "BANG               !!!!\n" );
   printf( "AND THEY'RE OFF    !!!!\n" );
   
   while ( tortoise != 70 && hare != 70 ) {    
      moveTortoise( &tortoise );
      moveHare( &hare );
      printCurrentPositions( &tortoise, &hare );
      ++timer;
   }

   if ( tortoise >= hare )
      printf( "\nTORTOISE WINS!!! YAY!!!\n" );
   else
      printf( "Hare wins. Yuch.\n" );

   printf( "TIME ELAPSED = %d seconds", timer );

   return 0;
}

void moveTortoise( int *turtlePtr )
{ 
   int x;
   
   x = rand() % 10 + 1;

   if ( x >= 1 && x <= 5 )
      *turtlePtr += 3;
   else if ( x == 6 || x == 7 )
      *turtlePtr -= 6;
   else
      ++( *turtlePtr );
   
   if ( *turtlePtr < 1 )
      *turtlePtr = 1;
   if ( *turtlePtr > 70 )
      *turtlePtr = 70;
}

void moveHare( int *rabbitPtr )
{ 
   int y;
   
   y = rand() % 10 + 1;

   if ( y == 3 || y == 4 )
      *rabbitPtr += 9;
   else if ( y == 5 )
      *rabbitPtr -= 12;
   else if ( y >= 6 && y <= 8 )
      ++( *rabbitPtr );
   else if ( y == 10 )
      *rabbitPtr -= 2;
   
   if ( *rabbitPtr < 1 )
      *rabbitPtr = 1;
   if ( *rabbitPtr > 70 )
      *rabbitPtr = 70;
}

void printCurrentPositions( int *snapperPtr, int *bunnyPtr )
{ 
   int count;
   
   for ( count = 1; count < 71; count++ ) 

      if ( count == *snapperPtr && count == *bunnyPtr )
         printf( "OUCH!!!" );
      else if ( count == *bunnyPtr )
         printf( "H" );
      else if ( count == *snapperPtr )
         printf( "T" );
      else 
         printf( " " );

   printf( "\n" );
}
