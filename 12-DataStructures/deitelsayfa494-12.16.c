#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

typedef struct n{
    int x;
    struct n*right;
    struct n*left;
}node;

void agaciYazdir(node *agac){
    if(agac == NULL){
        return;
    }
    agaciYazdir(agac->left);

    printf("%d ",agac->x);
    agaciYazdir(agac->right);

}

node *ekle(node *agac,int a){
    if(agac == NULL){
        node *root;
        root=(node*)malloc(sizeof(node));
        root->x=a;
        root->right=NULL;
        root->left=NULL;
        return root;
    }
    if(agac->x > a){
        agac->left = ekle(agac->left,a);
        return agac;
    }
    else{
        agac->right=ekle(agac->right,a);
        return agac;
    }
}

int arama(node *agac,int aranan){
    if(agac == NULL){
        return -1;
    }
    if(agac->x == aranan){
        return 1;
    }
    if(arama(agac->right,aranan)==1){
        return 1;
    }
    if(arama(agac->left,aranan)==1){
        return 1;
    }
    return -1;
}

int maxBul(node *agac){
    node *iter;
    iter=agac;
    while(iter->right != NULL){
        iter=iter->right;
    }
    return iter->x;
}

int minBul(node *agac){
    node *iter;
    iter=agac;
    while(iter->left != NULL){
        iter=iter->left;
    }
    return iter->x;
}

node* sil(node *agac,int a){
    if(agac == NULL){
        return NULL;
    }
    if(agac ->x == a){
        if(agac->right == NULL && agac->left == NULL){
            return NULL;
        }
        if(agac->right != NULL){
            agac->x=minBul(agac->right);
            agac->right=sil(agac->right,minBul(agac->right));
            return agac;
        }
        else if(agac->left != NULL){
            agac->x=maxBul(agac->left);
            agac->left=sil(agac->left,maxBul(agac->left));
            return agac;
        }
    }
    if(agac->x < a){
        agac->right=sil(agac->right,a);
        return agac;
    }
    else{
        agac->left=sil(agac->left,a);
        return agac;
    }
}

void agacOlustur(void){
    node *agac;
    agac=NULL;
    int i;
    srand(time(NULL));
    for(i=0;i<10;i++){
        int x=1+rand()%15;
        printf("%d ",x);
        agac=ekle(agac,x);
    }
    printf("\n");
    agaciYazdir(agac);

}


int main(){
	agacOlustur();





	getch();
	return 0;
}
