#include <stdio.h>
#include <conio.h>

void yildizKare(int);

int main(){
	int kenar;
	printf("Kenar uzunlugunu giriniz:");
	scanf("%d",&kenar);
	yildizKare(kenar);
	

	
	
	
	getch();
	return 0;
}

void yildizKare(int kenar){
	int i,j;
		for(i=1;i<=kenar;i++){
			for(j=1;j<=kenar;j++){
				printf("*  ");
			}
			printf("\n\n");
		}
}
