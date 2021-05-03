#include <stdio.h>

int mystery( unsigned bits );


int main()
{
    unsigned x;

    printf("Enter an integer: ");
    scanf("%u", &x);
    printf("The result is %d\n", mystery(x) );

    return 0;
}

int mystery( unsigned bits )
{
    int i, mask=1<<31, total=0;

    for( i=1; i<=32; i++, bits<<=1 )
        if( (bits & mask ) == mask ) {
            ++total;
        }

    return !( total % 2) ? 1 : 0;
}
