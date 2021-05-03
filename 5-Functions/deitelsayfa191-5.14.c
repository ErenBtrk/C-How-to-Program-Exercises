#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int rastgeleSayiSec(void);

int main(){

	printf("%d",rastgeleSayiSec());
	
	
	getch();
	return 0;
}

int rastgeleSayiSec(void){
	srand(time(NULL));
	int a[4]={2,4,6,8};
	int y;
	y=a[rand()%4];	
	return y;
}
