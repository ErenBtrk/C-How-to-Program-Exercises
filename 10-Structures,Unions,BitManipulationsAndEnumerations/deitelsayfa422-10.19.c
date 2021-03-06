#include <stdio.h>

int multiple( int num );


int main()
{
    int y;

    printf("Enter an integer between 1 and 32000: ");
    scanf("%d", &y);

    if( multiple( y ))
        printf("%d is a multiple of X\n", y);
    else
        printf("%d is not a multiple of X\n", y);

    return 0;
}

int multiple( int num )
{
    int i, mask=1, mult=1;

    for( i=1; i<=10; i++, mask<<=1 )
        if( (num & mask )!=0 ) {
            mult = 0;
            break;
        }

    return mult;
}
