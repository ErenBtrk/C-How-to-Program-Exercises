#include <stdio.h>
#include <conio.h>
#define BOYUT 10

int main(){
	int satici[BOYUT],i,satis;
		for(i=0;i<=BOYUT-1;i++){
			printf("%d.iscinin yaptigi satisi giriniz:",i+1);
			scanf("%d",&satici[i]);
		}
		for(i=0;i<=BOYUT-1;i++){
			printf("%d.satici maasi=%d$\n",i+1,200+satici[i]*9/100);
		}

	
	
	
	getch();
	return 0;
}
