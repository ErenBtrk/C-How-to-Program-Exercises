#include <stdio.h>
#include <conio.h>

void ilkHarfiAl(char *[],int);

int main(){
	char *stringListesi[15]={"ankara","istanbul","bolu","antalya","sivas",
                                           "corum","zonguldak","hakkari","trabzon","batman",
                                           "hatay","bursa","artvin","bartin","diyarbakir"};
    ilkHarfiAl(stringListesi,15);




	getch();
	return 0;
}

void ilkHarfiAl(char *stringListesi[],int boyut){
    int i;
    char dizi[20]="";
    for(i=0;i<boyut;i++){
        strcpy(dizi,stringListesi[i]);
        if(dizi[0]=='b'){
            printf("%s\n",stringListesi[i]);
        }
    }
}
