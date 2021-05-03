#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    char metin[100];
	printf("Metin giriniz:\n");
	gets(metin);
	printf("Bir arama stringi giriniz:\n");
	char aramaStringi[100]="";
	scanf("%s",aramaStringi);
    char *araPtr;
    araPtr=strstr(metin,aramaStringi);
    int count;
    while(araPtr!=NULL){
            count++;
        printf("%s\n",araPtr);
        araPtr=strstr(araPtr+1,aramaStringi);
    }
    printf("Arama degeri metinde %d kere bulunmustur.\n",count);











	getch();
	return 0;
}

