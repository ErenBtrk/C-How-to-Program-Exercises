#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct n{
    int x;
    struct n*next;
}node;

void listeyiYazdir(node *r){
    while(r != NULL){
        printf("%d ",r->x);
        r=r->next;
    }
    printf("\n");
}

node *ekle(node *r,int a){
    if(r == NULL){
        r=(node*)malloc(sizeof(node));
        r->x=a;
        r->next=NULL;
        return r;
    }
    node *iter;
    iter=r;
    while(iter->next != NULL){
        iter=iter->next;
    }
    iter->next=(node*)malloc(sizeof(node));
    iter->next->x=a;
    iter->next->next=NULL;
    return r;
}

int* listeAra(node *r,int aranan){
    int *sonuc=NULL;
    if(r == NULL){
        return NULL;
    }
    if(r->x == aranan){
        sonuc=&r->x;
    }
    else{
        sonuc= listeAra(r->next,aranan);
    }
    return sonuc;
}


int main(){
	node *root;
	root=NULL;
	root=ekle(root,5);
	root=ekle(root,1);
	root=ekle(root,8);
	root=ekle(root,15);
	root=ekle(root,-3);
	root=ekle(root,7);
	listeyiYazdir(root);
    printf(listeAra(root,-1) ? "Aranan deger bulundu.\n" : "Aranan deger bulunamadi.\n");





	getch();
	return 0;
}
