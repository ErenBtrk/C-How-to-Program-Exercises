#include <stdio.h>
#include <conio.h>


int main(){
	int i,j,k;
		for(i=1;i<=5;i++){
			for(k=4;k>=i;k--){
				printf(" ");
			}
			for(j=1;j<=i;j++){
				printf("*");
			}
			for(j=2;j<=i;j++){
				printf("*");
			}
			for(k=4;k>=i;k--){
				printf(" ");
			}
			printf("\n");
		}
		for(i=1;i<=4;i++){
			for(k=1;k<=i;k++){
				printf(" ");
			}
			for(j=4;j>=i;j--){
				printf("*");
			}
			for(j=3;j>=i;j--){
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
