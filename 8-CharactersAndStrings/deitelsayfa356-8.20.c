#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    char metin[100];
	printf("Metin giriniz:\n");
	gets(metin);

    char *delp;
    delp=strtok(metin," \n");
    int count;
    while(delp!=NULL){
            count++;
        printf("%s\n",delp);
        delp=strtok(NULL," \n");
    }
    printf("metinde %d tane kelime bulunmustur.\n",count);











	getch();
	return 0;
}


