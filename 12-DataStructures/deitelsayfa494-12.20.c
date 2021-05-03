#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct n{
    int x;
    struct n*next;
}node;



void linkListYazdir(node *r){
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

void printListBackwards( node *r )
{
    node *copyPtr = NULL;

    if( r == NULL ) {
        printf( "\nThe list is:\n" );
        printf( "NULL" );
        return;
    }
    else
    {
        copyPtr = r;
        r = r->next;
        printListBackwards( r );
        printf( " --> %d", copyPtr->x );

    }
}

void printReverse( node* r)
{
    // Base case
    if (r == NULL)
       return;

    // print the list after head node
    printReverse(r->next);

    // After everything else is printed, print head
    printf("%d  ", r->x);

}


int main(){
	node *root;
	root=NULL;
    root=ekle(root,5);
    root=ekle(root,2);
    root=ekle(root,6);
    root=ekle(root,11);
    root=ekle(root,1);
    root=ekle(root,22);
    linkListYazdir(root);
   // linkedListiTerstenYazdir(root);

    printListBackwards(root);
    //printReverse(root);



	getch();
	return 0;
}
