#include <stdio.h>
#include <conio.h>


int main(){
	int n,i,enb=0,enb2=0;
		while(i<10){
			printf("sayi giriniz:");
			scanf("%d",&n);
				if(n>enb){
					enb2=enb;
					enb=n;
				}
				else if(n>enb2){
					enb2=n;
				}
		
			
		i++;		
		}
			printf("en buyuk sayi=%d\nen buyuk 2.sayi=%d\n",enb,enb2);
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
