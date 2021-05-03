#include <stdio.h>
#include <conio.h>

int mukemmel(int);

int main(){
	int i;
		for(i=1;i<=1000;i++){
			if(mukemmel(i)==1){
				printf("%d sayisi mukemmel bir sayidir.\n",i);
			}
		}
	

	
	
	
	getch();
	return 0;
}

int mukemmel(int sayi){
	int i=1,carpanTop=0;
	while(i<sayi){
		if(sayi%i==0){
			carpanTop=carpanTop+i;
			i++;
		}
		else{
			i++;
		}
	}	
		if(carpanTop==sayi){
			return 1;
		}	
		else{
			return 0;
		}
}
