#include <stdio.h>
#include <conio.h>


int main(){
	printf("%10.d\n",1234);
    printf("%+.3e\n",123.456789);
    double sayi;
    scanf("%lf",&sayi);
    printf("%#o\n",100);
    char string[10];
    scanf("%s",string);
    char n;
    scanf("%[0123456789]",n);
    int x,y;
    printf( "%*.*f\n", x, y, 87.4573 );
    float yuzde;
    scanf( "%f%%", &yuzde );
    printf("%f\n",yuzde);
    printf("%+20.3lf\n",3.333333);

	getch();
	return 0;
}
