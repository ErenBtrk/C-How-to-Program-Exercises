#include <stdio.h>
#include <conio.h>
#define BOYUT 1000

int main(){
	int i,j,dizi[BOYUT],flag=0,count=0;
		for(i=0;i<BOYUT;i++){
			dizi[i]=1;		
		}
		printf("\n\n");
		for(i=2;i<BOYUT;i++){
			for(j=2;j<i;j++){
				 if(i%j==0){
				 	flag=1;
				 	break;
				 } 	 
				 else{
				 	flag=0;
				 }
			}
			if(flag==1){
				dizi[i]=0;
			}
			else{
				dizi[i]=1;
			}
		}
		for(i=0;i<BOYUT;i++){
			if(i==0||i==1){
				dizi[i]=0;
			}
			if(dizi[i]==1){
				count++;
				printf("%d\t",i);
			}
			else{
				printf("*\t");
			}
			if(i%10==0){
				printf("\n");
			}	
		}
		printf("\n\nTOPLAM %d ASAL SAYI BULUNDU...\n\n",count);
		
	getch();
	return 0;
}
