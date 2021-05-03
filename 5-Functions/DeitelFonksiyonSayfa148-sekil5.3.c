#include <stdio.h>
#include <conio.h>

int kare(int); /* fonksiyonun ilk hali(prototipi) */

int main(){
	int x;
	
	for(x=1;x<=10;x++){
		printf("%d",kare(x));
		printf("\n");
	}
	
	return 0;
}
	int kare(int y){ /*Fonksiyon tanýmý*/
		return y*y;
	}
	
	
	
	
	
	
	
	
	

