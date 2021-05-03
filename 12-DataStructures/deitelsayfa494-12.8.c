#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

typedef struct n{
    int x;
    struct n*next;
}node;

void yazdir(node *r){
    if(r==NULL){
        printf("Liste bos.\n");
        return;
    }
    while(r != NULL){
        printf("%d ",r->x);
        r=r->next;
    }
}

node *ekle(node *r,int a){
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

int topla(node *r){
    int toplam=0;
    node *iter;
    iter=r;
    toplam+=iter->x;
    while(iter->next != NULL){
        iter=iter->next;
        toplam+=iter->x;
    }
    return toplam;

}

int main(){
	node *root;
	root=NULL;
	srand(time(NULL));
	int i;
	for(i=0;i<25;i++){
        root=ekle(root,rand()%100);
	}
    yazdir(root);
    printf("\nListedeki sayilarin toplami=%d\nListedeki sayilarin ortalamasi=%.2f\n",topla(root),(float)topla(root)/25);


	getch();
	return 0;
}
