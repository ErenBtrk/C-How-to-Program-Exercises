#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


void stringleriSirala( char *[]);


int main(){
	  char *stringListesi[15]={"Ankara","Istanbul","Izmir","Antalya","Sivas",
                                           "Corum","Zonguldak","Hakkari","Trabzon","Manisa",
                                           "Hatay","Konya","Artvin","Adana","Diyarbakir"};
    stringleriSirala(stringListesi);



	getch();
	return 0;
}



void stringleriSirala(char *stringListesi[]){
    char geciciString[20]="";
    char *ptr1;
    ptr1=&geciciString;
    int i,j;
    char *ptr2;
    char *ptr3;

	for(i=0;i<15;i++){
            ptr2=&stringListesi[i];
        for(j=i+1;j<15;j++){
                ptr3=&stringListesi[j];
            if(strcmp(stringListesi[i],stringListesi[j])>0){
                strcpy(ptr1,ptr2);
                strcpy(ptr2,ptr3);
                strcpy(ptr3,ptr1);

            }
        }
	}
    for(i=0;i<15;i++){
            printf("%s\n",stringListesi[i]);
    }

}


