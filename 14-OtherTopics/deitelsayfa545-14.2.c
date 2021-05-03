#include <stdio.h>
#include <conio.h>
#include <stdarg.h>

int carpim(int boyut, ... );

int main(){
    int i;
    int x,y,z,w;
        printf("Fonksiyona parametre olarak sayi giriniz:");
        scanf("%d",&x);
        printf("Fonksiyona parametre olarak sayi giriniz:");
        scanf("%d",&y);
        printf("Fonksiyona parametre olarak sayi giriniz:");
        scanf("%d",&z);
        printf("Fonksiyona parametre olarak sayi giriniz:");
        scanf("%d",&w);

        printf("x=%d    y=%d    z=%d    w=%d\n",x,y,z,w);

        printf("x ve y carpim=%d\n",carpim(2,x,y));
        printf("x , y ve z carpim=%d\n",carpim(3,x,y,z));
        printf("x , y , z ve w carpim=%d\n",carpim(4,x,y,z,w));







	getch();
	return 0;
}

int carpim(int boyut, ... ){
    int toplam;
    int y;

    va_list ap;

    va_start(ap,boyut);
    toplam=va_arg(ap,int);

    for(y=2;y<=boyut;y++){
        toplam*=va_arg(ap,int);
    }

    va_end(ap);

    return toplam;

}
