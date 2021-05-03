/* Exercise 6.23 Solution */
#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define MAX 100    /* the maximum number of commands */

void getCommands( int [][ 2 ] );
int turnRight( int );
int turnLeft( int );
void movePen( int, int [][ 50 ], int, int );
void printArray( int [][ 50 ] );

int main()
{ 
   int floor[ 50 ][ 50 ] = { 0 }, penDown = FALSE, command, direction = 0,
       commandArray[ MAX ][ 2 ] = { 0 }, distance, count = 0;

   getCommands( commandArray );
   command = commandArray[ count ][ 0 ];
   
   while ( command != 9 )
   { 
      switch ( command )
      { 
         case 1:
            penDown = FALSE;
            break;
         case 2:
            penDown = TRUE;
            break;
         case 3:
            direction = turnRight( direction );
            break;
         case 4:
            direction = turnLeft( direction );
            break;
         case 5:
            distance = commandArray[ count ][ 1 ];
            movePen( penDown, floor, direction, distance );
            break;
         case 6:
            printf( "\nThe drawing is:\n\n" );
            printArray( floor );
            break;
       }
      
      command = commandArray[ ++count ][ 0 ]; 
    }

   return 0;
 }

void getCommands( int commands[][ 2 ] )
{ 
   int i, tempCommand;
   
   printf( "Enter command ( 9 to end input ): " );
   scanf( "%d", &tempCommand );
   
   for ( i = 0; tempCommand != 9 && i < MAX; i++ )
   { 
      commands[ i ][ 0 ] = tempCommand;

      if ( tempCommand == 5 )
         scanf( ",%d", &commands[ i ][ 1 ] );
         
      printf( "Enter command ( 9 to end input ): " );
      scanf( "%d", &tempCommand );
    }

   commands[ i ][ 0 ] = 9;
   
 }

int turnRight( int d ) 
{ 
   return ++d > 3 ? 0 : d;
}

int turnLeft( int d ) 
{ 
   return --d < 0 ? 3 : d;
}

void movePen( int down, int a[][ 50 ], int dir, int dist )
{ 
   int i, j;
   static int xPos = 0, yPos = 0;

   switch ( dir )	
   { 
      case 0:   /* move to the right */
         for ( j = 1; j <= dist && yPos + j < 50; j++ )
            if ( down )
               a[ xPos ][ yPos + j ] = 1;

         yPos += j - 1;
         break;
      case 1:   /* move down */
         for ( i = 1; i <= dist && xPos + i < 50; i++ )
            if ( down )
               a[ xPos + i ][ yPos ] = 1;
            
         xPos += i - 1;
         break;
      case 2:   /* move to the left */
         for ( j = 1; j <= dist && yPos - j >= 0; j++ )
            if ( down )
               a[ xPos ][ yPos - j ] = 1;
            
         yPos -= j - 1;
         break;
      case 3:   /* move up */
         for ( i = 1; i <= dist && xPos - i >= 0; i++ )
            if ( down )
               a[ xPos - i ][ yPos ] = 1;
            
         xPos -= i - 1;
         break;
    }
 }

void printArray( int a[][ 50 ] )
{ 
   int i, j;
   
   for ( i = 0; i < 50; i++ )
   { 
   
      for ( j = 0; j < 50; j++ ) 
         putchar( a[ i ][ j ] ? '*' : ' ' );
      
      putchar( '\n' );
    }
}
