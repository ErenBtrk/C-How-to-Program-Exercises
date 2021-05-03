#include <stdio.h>
#include <conio.h>


int main(){
	char dizi[100],dizi2[100],dizi3[100],dizi4[100];
	gets(dizi);    gets(dizi2);    gets(dizi3);    gets(dizi4);
    int a=atoi(dizi);
    int b=atoi(dizi2);
    int c=atoi(dizi3);
    int d=atoi(dizi4);
    printf("%d+%d+%d+%d=%d\n",a,b,c,d,a+b+c+d);



	getch();
	return 0;
}
