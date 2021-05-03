#include <stdio.h>
#include <conio.h>
#include <math.h>

int asalMi(int);

int main(){
	int i=2;
	int count=0;
		while(count!=100){
			if(asalMi(i)==1){
				printf("%d  ",i);
				count++; 
			}	
			i++;
		}
		printf("\n\n%d",(int)sqrt(17));

	
	
	
	getch();
	return 0;
}

int asalMi(int sayi){
	int i,flag=0;
		for(i=2;i<=(int)sqrt(sayi);i++){
			if(sayi%i==0){
				flag=1;
				break;
			}
			else{
				flag=0;
			}
		}
		if(flag==0&&sayi!=1){
			
			return 1;
		}
		else{
			
			return 0;
		}
}
