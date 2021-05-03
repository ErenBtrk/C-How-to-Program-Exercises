#include <stdio.h>
#include <conio.h>

int kuvvet(int,int);

int main(){
	int taban,us;
		printf("Sayinin tabanini giriniz:");
		scanf("%d",&taban);
		printf("Sayinin ussunu giriniz:");
		scanf("%d",&us);
		printf("%d sayisinin %d.kuvveti=%d",taban,us,kuvvet(taban,us));
	

	
	
	
	getch();
	return 0;
}
	int sum=1;
int kuvvet(int a,int b){
	
	if(b>=1){
		sum=sum*a;
		kuvvet(a,b-1);
	}
	else{
		return sum;	
	}
	

}
