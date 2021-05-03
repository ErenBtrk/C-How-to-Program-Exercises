/* Exercise 6.33 solution */
#include <stdio.h>
#define SIZE 80

int testPalindrome( char [], int, int );

int main()
{ 
   char c, string[ SIZE ], copy[ SIZE ];
   int count = 0, copyCount, i;

   printf( "Enter a sentence:\n" );

   while (  (  c = getchar()  ) != '\n' && count < SIZE )
      string[ count++ ] = c;

   string[ count ] = '\0';    /* terminate string */

   /* make a copy of string without spaces */
   for ( copyCount = 0, i = 0; string[ i ] != '\0'; i++ )
      if ( string[ i ] != ' ' )
         copy[ copyCount++ ] = string[ i ];

   if ( testPalindrome( copy, 0, copyCount - 1 ) )
      printf( "\"%s\" is a palindrome\n", string );
   else
      printf( "\"%s\" is not a palindrome\n", string );

   return 0;
}

int testPalindrome( char array[], int left, int right )
{ 
   if ( left == right || left > right )
      return 1;
   else if ( array[ left ] != array[ right ] )
      return 0;
   else
      return testPalindrome( array, left + 1, right - 1 );
}

