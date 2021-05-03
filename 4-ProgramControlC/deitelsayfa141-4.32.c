#include <stdio.h>
#include <conio.h>


int main(){
	/*Cift sayili n girdilerinde program hatali calisiyor*/
	/*
	int i,j,k,n;
		printf("Lutfen 1-19 arasinda sayi giriniz:");
		scanf("%d",&n);
	    for(i=1;i<=n-2;i+=2){
	    	for(k=(n-i)/2;k>0;k--){
	    		printf(" ");
	    	}
	    	for(j=1;j<=i;j++){
	    		printf("*");
			}
			printf("\n");
			}
		for(i=n;i>=0;i-=2){
			for(k=(n-i)/2;k>0;k--){
				printf(" ");
			}
			for(j=1;j<=i;j++){
				printf("*");
			}
			printf("\n");
		}		
		
	*/
	int i,j,k,boyut;
		printf("Boyut giriniz:");
		scanf("%d",&boyut);
		for(i=1;i<=boyut;i++){
			for(k=boyut-1;k>=i;k--){
				printf(" ");
			}
			for(j=1;j<=i;j++){
				printf("*");
			}
			for(j=2;j<=i;j++){
				printf("*");
			}
			for(k=boyut-1;k>=i;k--){
				printf(" ");
			}
			printf("\n");
		}
		for(i=1;i<=boyut-1;i++){
			for(k=1;k<=i;k++){
				printf(" ");
			}
			for(j=boyut-1;j>=i;j--){
				printf("*");
			}
			for(j=boyut-2;j>=i;j--){
				printf("*");
			}
			for(k=1;k<=i;k++){
				printf(" ");
			}
			printf("\n");
		}
	
	
	
	getch();
	return 0;
}
