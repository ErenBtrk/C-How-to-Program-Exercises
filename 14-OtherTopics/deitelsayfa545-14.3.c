#include <stdio.h>

int main( int argc, char *argv[])
{
    int i;

    /* argv[0] is the name of the program */

    for(i=1; i<argc; i++)
        printf("%s\n", argv[i]);

    return 0;
}
