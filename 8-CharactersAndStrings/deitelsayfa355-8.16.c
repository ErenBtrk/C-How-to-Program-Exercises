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
    while(araPtr!=NULL){
        printf("%s\n",araPtr);
        araPtr=strstr(araPtr+1,aramaStringi);
    }



	getch();
	return 0;
}

char* concat(const char *s1, const char *s2){
    char *result = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(result, s1);
    strcpy(s2,result);
}
