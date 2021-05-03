#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(){
	char metin[100];
	printf("Metin giriniz:");
	gets(metin);
	char aramaKarakteri;
	printf("Arama karakteri giriniz:");
	scanf("%c",&aramaKarakteri);
	char *araPtr;
	int count=0;
	araPtr=strchr(metin,aramaKarakteri);
    while(araPtr!= NULL){
        count++;
        araPtr=strchr(araPtr+1,aramaKarakteri);
    }
	printf("Aranan karakter %c ,metinde %d kere bulunmustur.\n",aramaKarakteri,count);






	getch();
	return 0;
}
