#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

typedef struct n{
    int x;
    struct n*sag;
    struct n*sol;
}node;

void agaciYazdir(node *r){
    if(r == NULL){
        return;
    }

    agaciYazdir(r->sol);
    printf("%d ",r->x);
    agaciYazdir(r->sag);
}

int arama(node *agac,int aranan){
    if( agac == NULL){
        return -1;
    }
    if(agac->x == aranan){
        return 1;
    }
    if(arama(agac->sol,aranan)==1){
        return 1;
    }
    if(arama(agac->sag,aranan)==1){
        return 1;
    }
    return -1;

}

node *ekle(node *agac,int a){
    if(agac == NULL){
        node *root;
        root=(node*)malloc(sizeof(node));
        root->x=a;
        root->sag=NULL;
        root->sol=NULL;
        return root;
    }
    if(agac->x > a){
        agac->sol=ekle(agac->sol,a);
        return agac;
    }
    else if(agac->x < a){
        agac->sag=ekle(agac->sag,a);
        return agac;
    }
    else{
        printf("kopya");
        return agac;
    }
}



int maxBul(node *agac){
    while(agac->sag != NULL){
        agac=agac->sag;
    }
    return agac->x;
}

int minBul(node *agac){
    while(agac->sol != NULL){
        agac=agac->sol;
    }
    return agac->x;
}

node *sil(node *agac,int a){
    if(agac == NULL){
        return NULL;
    }
    if(agac->x == a){
        if(agac->sag == NULL && agac->sol == NULL){
            return NULL;
        }
        if(agac->sol != NULL){
            agac->x=maxBul(agac->sol);
            agac->sol=sil(agac->sol,maxBul(agac->sol));
            return agac;
        }
        else if(agac->sag != NULL){
            agac->x=minBul(agac->sag);
            agac->sag=sil(agac->sag,minBul(agac->sag));
            return agac;
        }
    }
    if(agac->x < a){
        agac->sag=sil(agac->sag,a);
        return agac;
    }
    else{
        agac->sol=sil(agac->sol,a);
        return agac;
    }





}

void agacOlustur(void){
    node *agac;
    agac=NULL;
    int i;
    int randomSayi;
    for(i=0;i<10;i++){
        randomSayi=1+rand()%20;
        printf("%3d",randomSayi);
        agac=ekle(agac,randomSayi);
    }
    printf("\n");
    agaciYazdir(agac);


}

void diziOlustur(void){
    int boyut;
    printf("Dizinin boyutunu giriniz:");
    scanf("%d",&boyut);
    int dizi[boyut];
    int i,j;
    int k=0;
    int randomSayi;
    int flag=0;
    for(i=0;i<boyut;i++){
        flag=0;
        randomSayi=1+rand()%20;
        for(j=0;j<boyut;j++){
            if(randomSayi == dizi[j]){
                flag=1;
            }
        }
        if(flag==0){
            dizi[k++]=randomSayi;
        }

    }
    for(i=0;i<k;i++){
        printf("%d ",dizi[i]);
    }


}


int main(){
    srand(time(NULL));
	agacOlustur();
	printf("\n\n\n");
    diziOlustur();



	getch();
	return 0;
}
