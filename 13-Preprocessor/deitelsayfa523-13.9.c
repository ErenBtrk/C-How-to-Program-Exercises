#include <stdio.h>
#include <conio.h>

#define DIZIYAZDIR(dizi,diziBoyut) int i; \
                                                    for(i=0;i<diziBoyut; \
                                                    i++ ){\
                                                    printf("%d\n",dizi[i]); }

int main(){
    int dizi[]={5,4,2,3,1};
	DIZIYAZDIR(dizi,5);





	getch();
	return 0;
}
