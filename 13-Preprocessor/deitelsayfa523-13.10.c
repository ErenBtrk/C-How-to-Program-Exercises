#include <stdio.h>
#include <conio.h>

#define DIZITOPLA(dizi,diziBoyut) int i;\
                                                   int toplam=0; \
                                                   for(i=0;i<diziBoyut;i++){ \
                                                   toplam+=dizi[i]; } \
                                                   printf("Toplam=%d",toplam); \


int main(){
	int dizi[]={1,3,8,5,10};
	DIZITOPLA(dizi,5);





	getch();
	return 0;
}
