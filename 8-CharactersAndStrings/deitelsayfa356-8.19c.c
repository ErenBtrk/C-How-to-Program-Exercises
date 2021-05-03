#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(){
	char metin[100];
	char harfFrekans[27]={0};
	printf("Metin giriniz:\n");
	gets(metin);
    int count=0;
    int i,j;
    char *araPtr;
    char iHarf;
	for(i=65;i>=65&&i<=122;i++){
            iHarf=i;
            if(i>90&&i<97){
                continue;
            }
        araPtr=strchr(metin,iHarf);
        while(araPtr!=NULL){
            if(i>=97){
                harfFrekans[i-97]++;
            }
            else{
                harfFrekans[i-65]++;
            }
            araPtr=strchr(araPtr+1,iHarf);

        }
	}
	int a;
        printf("Alfabedeki harflerin metindeki sayilari:\n");
    for(i=0;i<27;i++){
        printf("%c harfi=",i+65);
        for(j=0;j<harfFrekans[i];j++){
            printf("*");
        }
        printf("\n");
    }

	getch();
	return 0;
}
