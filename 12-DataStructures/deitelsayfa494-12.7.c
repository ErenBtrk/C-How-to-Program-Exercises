#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct n{
    int x;
    struct n*next;
}node;

void listeyiYazdir(node *r){
    if(r == NULL){
        printf("Liste bostur.\n");
        return;
    }
    while(r != NULL){
        printf("%d ",r->x);
        r=r->next;
    }
    printf("\n");
}

node *ekleSirali(node *r,int a){
    if(r == NULL){
        r=(node*)malloc(sizeof(node));
        r->x=a;
        r->next=NULL;
        return r;
    }
    if(r->x > a){
        node *temp;
        temp=(node*)malloc(sizeof(node));
        temp->x=a;
        temp->next=r;
        return temp;
    }
    node *iter;
    iter=r;
    while(iter->next != NULL && iter->next->x < a){
        iter=iter->next;
    }
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->x=a;
    temp->next=iter->next;
    iter->next=temp;
    return r;
}

void birlestir(node *r1,node *r2){
   node *iter;
   iter=r2;
   r1=ekleSirali(r1,iter->x);
   while(iter->next != NULL){
        iter=iter->next;
        r1=ekleSirali(r1,iter->x);
   }
}

node* listeyiBosalt(node *r){
    if(r==NULL){
        printf("Liste bosaltildi.\n");
        return NULL;
    }
    node *iter;
    iter=r;
    if(iter->next == NULL){
        free(iter);
        return NULL;
    }
    while(iter->next->next != NULL){
        iter=iter->next;
    }
    node *temp;
    temp=iter->next;
    iter->next=NULL;
    free(temp);
    return listeyiBosalt(r);



}

int main(){
	node *root1;
	root1=NULL;
	node *root2;
	root2=NULL;
    root1=ekleSirali(root1,2);
    root1=ekleSirali(root1,1);
    root1=ekleSirali(root1,6);
    root1=ekleSirali(root1,-1);
    listeyiYazdir(root1);
    root2=ekleSirali(root2,99);
    root2=ekleSirali(root2,8);
    root2=ekleSirali(root2,4);
    root2=ekleSirali(root2,16);
    listeyiYazdir(root2);
    birlestir(root1,root2);
    listeyiYazdir(root1);
    listeyiYazdir(root2);
    root2=listeyiBosalt(root2);
    listeyiYazdir(root2);

	getch();
	return 0;
}
