#include <stdio.h>
#include <conio.h>


int main(){
	//a
	printf("%-15.8u\n",40000);
    //b
    unsigned int heks;
    scanf("%x",&heks);
    printf("%u\n",heks);
    //c
    printf("%d %d\n",200,-200);
    //d
    printf("%#x\n",100);
    //e
    printf("%09.3f\n",1.234);
    //f
    int saat,dakika,saniye;
    printf("Saat giriniz(ss:dd:sn):");
    scanf("%d%*c%d%*c%d",&saat,&dakika,&saniye);
    printf("saat=%d,dakika=%d,saniye=%d\n",saat,dakika,saniye);
    //g
    fflush(stdin); /* clear stdin */
    char s[20]="";
    scanf("\"%[^\"]", s);
    printf("%s\n",s);
    //h
    printf("Saat giriniz(ss:dd:sn):");
    scanf("%d:%d:%d",&saat,&dakika,&saniye);
    printf("saat=%d,dakika=%d,saniye=%d\n",saat,dakika,saniye);



	getch();
	return 0;
}
