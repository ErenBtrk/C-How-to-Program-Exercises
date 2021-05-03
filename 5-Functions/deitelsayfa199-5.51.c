/* Exercise 5.51 Solution */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice( void );
int craps( void );
void chatter( void );

int main()
{ 
   int result, wager = 0, bankBalance = 1000;

   srand( time( NULL ) );

   printf( "You have $%d in the bank.\n", bankBalance );
   printf( "Place your wager: " );
   scanf( "%d", &wager );

   while( wager <= 0 || wager > 1000 )
   { 
      printf( "Please bet a valid amount.\n" );
      scanf( "%d", &wager );
   }

   result = craps();

   if ( result == 0 )
   { 
      bankBalance -= wager;
      printf( "Your new bank balance is $%d\n", bankBalance );

      if ( bankBalance == 0 )
         printf( "Sorry. You Busted! Thank You For Playing.\n" );
   }
   else
   { 
      bankBalance += wager;
      printf( "Your new bank balance is $%d\n", bankBalance );
   }

   return 0;
}

int rollDice( void )
{ 
   int die1, die2, workSum;
   
   die1 = 1 + rand() % 6;
   die2 = 1 + rand() % 6;
   workSum = die1 + die2;
   printf( "Player rolled %d + %d = %d\n", die1, die2, workSum );

   return workSum;
}

int craps( void )
{ 
   int gameStatus, sum, myPoint;

   sum = rollDice();

   switch ( sum )
   { 
      case 7: case 11:
         gameStatus = 1;
         chatter();
         break;
      
      case 2: case 3: case 12:
         gameStatus = 2;
         chatter();
         break;
   
      default:
         gameStatus = 0;
         myPoint = sum;
         printf( "Point is %d\n", myPoint );
         chatter();
         break;
   }

   while ( gameStatus == 0 )
   { 
      chatter();
      sum = rollDice();
   
      if ( sum == myPoint )
         gameStatus = 1;
      else 
         if ( sum == 7 )
            gameStatus = 2;
  }      

   if ( gameStatus == 1 )
   { 
      printf( "Player wins\n" );
      return 1;
   }
   else
   { 
      printf( "Player loses\n" );
      return 0;
   }
}

void chatter( void )
{ 
   int select;

   select = 1 + rand() % 6;

   switch ( select )
   { 
      case 1:
         printf( "Oh, you're going for broke, huh?\n" );
         break;
      case 2:
         printf( "Aw cmon, take a chance!\n" );
         break;
      case 3:
         printf( "Hey, I think this guy is going to break the bank!!\n" );
         break;
      case 4:
         printf( "You're up big. Now's the time to cash in your chips!\n" );
         break;
      case 5:
         printf( "Way too lucky! Those dice have to be loaded!\n" );
         break;
      case 6:
         printf( "Bet it all! Bet it all!\n" );
         break;
      default:
         break;
   }
}


