#include <stdio.h>
#include <conio.h>

struct parca{
    int parcaNumarasi;
    char parcaAdi[25];


};

typedef struct parca Parca;

int main(){
	Parca a,b[10],*ptr;
	scanf("%d",&a.parcaNumarasi);
	scanf("%s",&a.parcaAdi);
    b[3]=a;
    ptr=b;
    printf("\n%d %s\n",(ptr+3)->parcaNumarasi,(ptr+3)->parcaAdi);
    printf("%d %s\n",(b+3)->parcaNumarasi,(b+3)->parcaAdi);
	printf("%d %s",b[3].parcaNumarasi,b[3].parcaAdi);
	getch();
	return 0;
}
