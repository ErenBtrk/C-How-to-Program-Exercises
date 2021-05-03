#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct n{
    int x;
    struct n*next;
}node;

void listeyiYazdir(node *r){
    if(r==NULL){
        printf("Liste bos.\n");
        return ;
    }
    while(r != NULL){
        printf("%d ",r->x);
        r=r->next;
    }
    printf("\n");
}

node* ekle(node* r,int a){
    if(r==NULL){
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

void bagla(node *r1,node *r2){
    node *iter;
    iter=r1;
    while(iter->next != NULL){
        iter=iter->next;
    }
    iter->next=r2;
}

int main(){
	node *root1;
	root1=NULL;
	node *root2;
	root2=NULL;
	root1=ekle(root1,10);
	root1=ekle(root1,20);
	root1=ekle(root1,30);
	root2=ekle(root2,5);
	root2=ekle(root2,15);
	root2=ekle(root2,25);
    listeyiYazdir(root1);
    listeyiYazdir(root2);
    bagla(root1,root2);
    listeyiYazdir(root1);


	getch();
	return 0;
}
