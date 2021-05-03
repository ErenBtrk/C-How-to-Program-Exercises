#include <stdio.h>
#include <conio.h>
#define BOYUT 5

int main(){
	unsigned int degerler[5]={2,4,6,8,10};
	unsigned int *vPtr;
	int i;
	for(i=0;i<5;i++){
		printf("%u  ",degerler[i]);
	}
	printf("\n");
	vPtr=degerler;
	for(i=0;i<5;i++){
		printf("%u  ",*(vPtr+i));
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%u  ",*(degerler+i));
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%u  ",vPtr[i]);
	}
	printf("\n");
	printf("%u  %u  %u",degerler[4],*(degerler+4),vPtr[4]);
	// i) vPtr+3 1002506 adresini gösterir.
	// j) vPtr=degerler[4] ise vPtr-=4  4*2=8 byte 1002500+8=1002508-8=1002500 adresini gösterir.
	
	
	getch();
	return 0;
}
