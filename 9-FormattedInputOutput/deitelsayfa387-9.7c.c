#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
	int sayilar[10]={0};
	int i;
	int say=0;
	int temp;
	printf("Deger\tToplam karakter sayisi\n");
	for(i=0;i<10;i++){
        sayilar[i]=1+rand()%1000;
        temp=sayilar[i];
        while(temp>0){
            temp=temp/10;
            say++;
        }
        printf("%d\t%d\n",sayilar[i],say);
	}




	getch();
	return 0;
}
