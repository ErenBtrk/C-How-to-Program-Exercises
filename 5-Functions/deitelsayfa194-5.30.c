#include <stdio.h>
#include <conio.h>

int siniflandir(int);

int main(){
	int i,ortalama;
		for(i=1;i<=10;i++){
			printf("Ortalamanizi giriniz:");
			scanf("%d",&ortalama);
			if(ortalama>100||ortalama<0){
				printf("Yanlis giris yaptiniz.\n");
				i--;
			}
			else{
				printf("%d\n",siniflandir(ortalama));
			}
			
			
			
			
		}



	
	
	
	getch();
	return 0;
}

int siniflandir(int ort){
	if(ort<=100&&ort>=90)
		return 4;
	else if(ort<90&&ort>=80)
		return 3;
	else if(ort<80&&ort>=70)
		return 2;
	else if(ort<70&&ort>=60)
		return 1;
	else if(ort<60)
		return 0;
}
