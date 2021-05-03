#include <stdio.h>
#include <conio.h>



int main(){
	srand(time(NULL));
	int i,zar1,zar2,dizi[36000],frekans[13];
	for(i=0;i<13;i++){
		frekans[i]=0;
	}
	for(i=0;i<36000;i++){
		zar1=1+rand()%6;
		zar2=1+rand()%6;
		dizi[i]=zar1+zar2;	
		frekans[dizi[i]]++;	
	}
	for(i=2;i<=12;i++){
		printf("frekans %d=%d\n",i,frekans[i]);
	}
	
	
	
	getch();
	return 0;
}
