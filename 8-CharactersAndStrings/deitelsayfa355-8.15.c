#include <stdio.h>
#include <conio.h>

void stringiTersCevir(char []);

int main(){
	char metin[100]="";
	gets(metin);
	stringiTersCevir(metin);
    const char *delp;
    delp=strtok(metin," ");
   while(delp!=NULL){
        stringiTersCevir(delp);
        printf("%s\n",delp);
        delp=strtok(NULL," ");

   }





	getch();
	return 0;
}

void stringiTersCevir(char dizi[]){
    int i;
    int temp;
    for(i=0;i<strlen(dizi)/2;i++){
        temp=dizi[i];
        dizi[i]=dizi[strlen(dizi)-i-1];
        dizi[strlen(dizi)-i-1]=temp;
    }
}
