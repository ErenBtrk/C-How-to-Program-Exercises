#include <stdio.h>
#include <conio.h>


int main(){
	long int deger1=200000,deger2;
	int *iPtr;
	iPtr=&deger1;
	printf("%ld\n",*iPtr);
	deger2=*iPtr;
	printf("%ld\n",deger2);
	printf("%d\n",&deger1);
	printf("%d\n",iPtr);
	
	
	
	getch();
	return 0;
}
