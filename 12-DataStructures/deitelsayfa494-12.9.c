#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

typedef struct n{
    char h;
    struct n*next;
    struct n*prev;
}node;

void terstenYazdir(node *r){
    node *iter;
    iter=r;
    while(iter->next != NULL){
        iter=iter->next;
    }
    printf("%c ",iter->h);

    while(iter->prev != NULL){
        iter=iter->prev;
        printf("%c ",iter->h);
    }

    printf("\n");
}

void yazdir(node *r){
    if(r==NULL){
        printf("Liste bostur.\n");
        return;
    }
    while(r != NULL){
        printf("%c -> ",r->h);
        r=r->next;
    }
    printf("NULL");
    printf("\n");
}

node* ekle(node*r,char harf){
    if(r==NULL){
        r=(node*)malloc(sizeof(node));
        r->h=harf;
        r->next=NULL;
        r->prev=NULL;
        return r;
    }
    if(r->h > harf){
        node *temp;
        temp=(node*)malloc(sizeof(node));
        temp->h=harf;
        temp->next=r;
        temp->prev=NULL;
        r->prev=temp;
        return temp;
    }
    node *iter;
    iter=r;
    while(iter->next != NULL && iter->next->h < harf){
        iter=iter->next;
    }
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->h=harf;
    temp->next=iter->next;
    temp->prev=iter;
    if(temp->next != NULL){
        temp->next->prev=temp;
    }
    iter->next=temp;
    return r;

}

node* duzEkle(node *r,char harf){
    if(r == NULL){
        r=(node*)malloc(sizeof(node));
        r->h=harf;
        r->next=NULL;
        return r;
    }
    node *iter;
    iter=r;
    while(iter->next != NULL){
        iter=iter->next;
    }
    iter->next=(node*)malloc(sizeof(node));
    iter->next->h=harf;
    iter->next->next=NULL;
    return r;
}

node* kopyala(node *r,node *kopya){
    node *iter;
    iter=r;
    while(iter->next != NULL){
        iter=iter->next;
    }
    kopya=duzEkle(kopya,iter->h);
    while(iter->prev != NULL){
        iter=iter->prev;
        kopya=duzEkle(kopya,iter->h);
    }
    return kopya;
}

int main(){
	node *root;
	root=NULL;
	srand(time(NULL));

	int i;
	for(i=0;i<10;i++){
        root=ekle(root,(char)(65+rand()%25));
	}
	yazdir(root);

	node *kopyaRoot;
	kopyaRoot=NULL;
    kopyaRoot=kopyala(root,kopyaRoot);
    yazdir(kopyaRoot);

	getch();
	return 0;
}
