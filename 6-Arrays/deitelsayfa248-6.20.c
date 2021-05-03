/* Exercise 6.20 Solution */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice( void );

int main()
{ 
   int gameStatus, sum, myPoint, i, roll, length = 0,
       wins[ 22 ] = { 0}, losses[ 22 ] = { 0}, winSum = 0, 
       loseSum = 0;

   srand( time( NULL ) );
   
   for ( i = 1; i <= 1000; i++ )
   { 
      sum = rollDice();
      roll = 1;
	
      switch ( sum )
      { 
         case 7: case 11:
            gameStatus = 1;
            break;
         case 2: case 3: case 12:
            gameStatus = 2;
            break;
         default:
            gameStatus = 0;
            myPoint = sum;
            break;
      }
	
      while ( gameStatus == 0 )
      { 
         sum = rollDice();
         roll++;

         if ( sum == myPoint )
            gameStatus = 1;
         else 
            if ( sum == 7 )
               gameStatus = 2;
      }		
	  
	  if ( roll > 21 )
	     roll = 21;
	     
      if ( gameStatus == 1 )
      { 
         wins[ roll ]++;
         winSum++;
      }
      else
      { 
         losses[ roll ]++;
         loseSum++;
      }
   }
   
   printf( "Games won or lost after the 20th roll\n"
          "are displayed as the 21st roll.\n\n" );

   for ( i = 1; i <= 21; i++ ) 
      printf( "%3d games won and %3d games lost on roll %d.\n", 
             wins[ i ], losses[ i ], i );
   
   /* calculate chances of winning */
   printf( "\nThe chances of winning are %d/%d = %.2f%%\n", 
          winSum, winSum + loseSum, 
          100.0 * winSum / ( winSum + loseSum ) );
   
   /* calculate average length of game */
   for ( i = 1; i <= 21; i++ )
      length += wins[ i ] * i + losses[ i ] * i;

   printf( "The average game length is %.2f rolls.\n",  
          length / 1000.0 );

   return 0;
}

int rollDice( void )
{ 
   int die1, die2, workSum;
		
   die1 = 1 + rand() % 6;
   die2 = 1 + rand() % 6;
   workSum = die1 + die2;

   return workSum;
}

