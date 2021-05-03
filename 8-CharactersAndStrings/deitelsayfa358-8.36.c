#include <stdio.h>
#include <conio.h>
#include <string.h>

void tarihCevir(char *[],char []);

int main(){
    char *aylar[12]={"Ocak","Subat","Mart","Nisan","Mayis","Haziran",
                                 "Temmuz","Agustos","Eylul","Ekim","Kasim","Aralik"};
	char metin[50];
	printf("Lutfen tarihi(aa/gg/yy) giriniz:");
	gets(metin);
    tarihCevir(aylar,metin);





	getch();
	return 0;
}

void tarihCevir(char *aylar[],char metin[]){
    int i;
    char yeniTarih[50]="";
    char *ptr;
    ptr=strtok(metin,"/");
    i=atoi(ptr);
    if(i>12){
        printf("Lutfen tarihi dogru formatta giriniz.\n");
        gets(metin);
        tarihCevir(aylar,metin);
    }
    else{
        char *aylarPtr;
        aylarPtr=aylar[i-1];
        strcat(yeniTarih,aylarPtr);
        ptr=strtok(NULL,"/");
        strcat(yeniTarih," ");
        strcat(yeniTarih,ptr);
        ptr=strtok(NULL,"/");
        char ekle[5]="19";


        if(strncmp(ekle,ptr,2)!=0){
            strcat(ekle,ptr);
            strcat(yeniTarih," ");
            strcat(yeniTarih,ekle);
            printf("%s\n",yeniTarih);
        }
        else{
            strcat(yeniTarih," ");
            strcat(yeniTarih,ptr);
            printf("%s\n",yeniTarih);
        }
    }

}
