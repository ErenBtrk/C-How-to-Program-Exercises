#include <stdio.h>
#include <conio.h>
#define BOYUT 10

int main(){
	int i;
	float sayilar[10];
	float *nPtr;
		for(i=0;i<10;i++){
			sayilar[i]=i*1.1;
		}
			printf("Dizinin belirteclerini kullanarak:\n");
		for(i=0;i<10;i++){
			printf("%.1f  ",sayilar[i]);
		}
	nPtr=sayilar;
	nPtr=&sayilar[0];
			printf("\n");
			printf("Gosterici/offset gosterimi ve nPtr gostericisi:\n");
		for(i=0;i<10;i++){
			printf("%.1f  ",*(nPtr+i));
		}
			printf("\n");
			printf("Gosterici/offset gosterimi ve dizinin isminin gosterici olmasi:\n");
		for(i=0;i<10;i++){
			printf("%.1f  ",*(sayilar+i));
		}
			printf("\n");
			printf("nPtr gostericisini belirteçler ile kullanarak:\n");
		for(i=0;i<10;i++){
			printf("%.1f  ",nPtr[i]);
		}
			printf("\n");
		printf("%.1f %.1f %.1f %.1f\n",sayilar[4],*(nPtr+4),*(sayilar+4),nPtr[4]);
		//  i)Adres: 1002500 + 8 * 4 = 1002532. Deðer: 8.8
		/* j)sayilar[5] in adresi: 1002500 + 5 * 4 = 1002520
			nPtr -= 4 adresi 1002520 – 4 * 4 = 1002504
			O konumdaki deðer 1.1	*/
			
		
	getch();
	return 0;
}
