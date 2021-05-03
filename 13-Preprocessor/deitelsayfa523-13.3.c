#include <stdio.h>
#include <conio.h>


#define EVET 1
#define HAYIR 0
#define DOGRU 0
#define KUP_HACIM(x) (x)*(x)*(x)


int main(){


    printf("DOGRU=%d\n",DOGRU);
    printf("__LINE__=%d\n",__LINE__);
    printf("__LINE__=%d\n",__LINE__);


    #ifdef DOGRU
        #undef DOGRU
        #define DOGRU 2
    #endif
    printf("DOGRU=%d\n",DOGRU);
    #if DOGRU
        #define YANLIS 0
        #undef DOGRU
        #define DOGRU 1
    #else
        #define YANLIS 1
    #endif

    printf("DOGRU=%d\n",DOGRU);
    printf("YANLIS=%d\n",YANLIS);
    printf("KUP HACMI=%d\n",KUP_HACIM(5));


	getch();
	return 0;
}
