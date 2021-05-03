/* Exercise 5.44 Part B Solution */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu( void );
void arithmetic( void );
void correctMessage( void );
void incorrectMessage( void );

int main()
{ 
   srand( time( NULL ) );

   arithmetic();

   return 0;
}

int menu( void )
{ 
   int choice;

   do
   { 
      printf( "Choose type of problem to study.\n" );
      printf( "Enter: 1 for addition, 2 for subtraction\n" );
      printf( "Enter: 3 for multiplication, 4 for division\n" );
      printf( "Enter: 5 for a combination of 1 through 4\n " );
      printf( "? " );
      scanf( "%d", &choice );
   } while ( choice < 1 || choice > 5 );

   return choice;
}

void incorrectMessage( void )
{ 
   switch ( rand() % 4 )
   { 
      case 0:
         printf( "No. Please try again.\n? " );
         break;
      case 1:
         printf( "Wrong. Try once more.\n? " );
         break;
      case 2:
         printf( "Don't give up!\n? " );
         break;
      case 3:
         printf( "No. Keep trying.\n? " );
         break;
   }
}

void correctMessage( void )
{ 
   switch ( rand() % 4 )
   { 
      case 0:
         printf( "Very good!\n\n" );
         break;
      case 1:
         printf( "Excellent!\n\n" );
         break;
      case 2:
         printf( "Nice work!\n\n" );
         break;
      case 3:
         printf( "Keep up the good work!\n\n" );
         break;
   }
}

void arithmetic( void )
{ 
   int i, x, y, response, answer, selection, right = 0, wrong = 0;
   int type, problemMix;
   char operator;

   selection = menu();
   type = selection;

   for ( i = 1; i <= 10; i++ )
   { 
      x = rand() % 10;
      y = rand() % 10;

      if ( selection == 5 )
      { 
         problemMix = 1 + rand() % 4;
         type = problemMix;
      }

      switch ( type )
      { 
         case 1:
            operator = '+';
            answer = x + y;
            break;
         case 2:               /* note negative answers can exist */
            operator = '-';
            answer = x - y;
            break;
         case 3:
            operator = '*';
            answer = x * y;
            break;
         case 4:               /* note this is integer division  */
            operator = '/';
            if ( y == 0 )
            { 
               y = 1;          /* eliminate divide by zero error */
               answer = x / y;
            }
            else
            { 
               x *= y;         /* create "nice" division         */
               answer = x / y;
            }
            break;
      }

      printf( "How much is %d %c %d? ", x, operator, y );

      scanf( "%d", &response );

      while ( response != answer )
      { 
         ++wrong;
         incorrectMessage();
         scanf( "%d", &response );
      }

      ++right;
      correctMessage();
   }

   if ( ( double ) right / ( right + wrong) < .75 )
      printf( "Please ask your instructor for extra help.\n" );

   printf( "That's all for now. Bye.\n" );
}

