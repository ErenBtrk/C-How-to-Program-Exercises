#include <stdio.h>
#include <conio.h>

int cift(int);

int main(){
	int i,sayi;
		for(i=1;i<=10;i++){
			printf("sayi giriniz:");
			scanf("%d",&sayi);
			if(cift(sayi)){
				printf("sayi cifttir.\n");
			}
			else{
				printf("sayi tektir.\n");
			}
		}
	

	
	
	
	getch();
	return 0;
}

int cift(int x){
	if(x%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
