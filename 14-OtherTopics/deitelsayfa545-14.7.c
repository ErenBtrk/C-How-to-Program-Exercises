#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define BOYUT 10

int main(){
	int *dizi;
	int *yeniDizi;
	dizi=(int*)calloc(BOYUT,sizeof(int));
	if(dizi == NULL){
        printf("Calloc ile alan tahsis edilemedi.\n");
        exit(EXIT_SUCCESS);
	}
	int i;
	for(i=0;i<BOYUT;i++){
        printf("Dizinin %d. elemanini giriniz:",i+1);
        scanf("%d",&dizi[i]);
	}
	printf("Calloc ile tahsis edilen dizi:\n");
	for(i=0;i<BOYUT;i++){
        printf("%d ",dizi[i]);
	}
	dizi[11]=31;
	printf("\n11=%d\n",dizi[11]);
	#ifdef BOYUT
        #undef BOYUT
        #define BOYUT 5
	#endif // BOYUT
	yeniDizi=(int*)malloc(BOYUT*sizeof(int));
	if(yeniDizi == NULL){
        printf("Hafiza tahsisinde hata.\n");
        exit(EXIT_SUCCESS);
	}
    for(i=0;i<BOYUT;i++){
        yeniDizi[i]=dizi[i];
    }
    dizi=(int*)realloc(dizi,BOYUT*sizeof(int));
    if(dizi == NULL){
        printf("Hafiza tahsisinde hata.\n");
        exit(EXIT_SUCCESS);
    }

    dizi=yeniDizi;
    printf("\nRealloc ile yeniden tahsis edilen dizi:\n");
	for(i=0;i<BOYUT;i++){
        printf("%d ",dizi[i]);
	}

	getch();
	return 0;
}
