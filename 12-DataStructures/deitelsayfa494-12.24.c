#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct n{
    int x;
    struct n*next;
    struct n*right;
    struct n*left;
}node;



void agaciYazdir(node *tree){
    if(tree == NULL){
        return;
    }
    printf("%d ",tree->x);
    agaciYazdir(tree->left);
    agaciYazdir(tree->right);

}

node* agacaEkle(node *tree,int a){
    if(tree == NULL){
        node *root;
        root=(node*)malloc(sizeof(node));
        root->x=a;
        root->right=NULL;
        root->left=NULL;
        return root;
    }
    if(tree->x > a){
        tree->left=agacaEkle(tree->left,a);
        return tree;
    }
    else if(tree->x < a){
        tree->right=agacaEkle(tree->right,a);
        return tree;
    }
    else{
        return tree;
    }

}

void sirayiYazdir(node *r){
    while(r != NULL){
        printf("%d ",r->x);
        r=r->next;
    }
        printf("\n");
}

node *enque(node *r,int a){
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

int deque(node **r){
    node *root;
    root=*r;
    if(root == NULL){
        printf("Sira bos.\n");
        return -1;
    }
    if(root->next == NULL){
        int rValue;
        rValue=root->x;
        free(root);
        *r=NULL;
        return rValue;
    }
    node *temp;
    temp=root;
    int rValue;
    rValue=root->x;
    root=root->next;
    free(temp);
    *r=root;
    return rValue;


}

int derinlik(node *tree){
    if(tree == NULL){
        return 0;
    }
    int left=0;
    int right=0;

    left=derinlik(tree->left);
    right=derinlik(tree->right);

    if(left>right){
        return left+1;
    }
    else{
        return right+1;
    }
}

void seviyeYazdir(node *tree,int seviye){
    if(tree == NULL){
        return;
    }
    if(seviye == 1){
        printf("%d ",tree->x);
    }
    else if(seviye > 1){
        seviyeYazdir(tree->left,seviye-1);
        seviyeYazdir(tree->right,seviye-1);
    }
}

int main(){
	node *sira;
	sira=NULL;
	node *tree;
	tree=NULL;
    tree=agacaEkle(tree,5);
    tree=agacaEkle(tree,11);
    tree=agacaEkle(tree,8);
    tree=agacaEkle(tree,1);
    tree=agacaEkle(tree,20);
    tree=agacaEkle(tree,15);
    tree=agacaEkle(tree,4);
    tree=agacaEkle(tree,2);
    tree=agacaEkle(tree,-3);
    tree=agacaEkle(tree,-21);
    tree=agacaEkle(tree,12);

   // agaciYazdir(tree);
    printf("derinlik=%d\n",derinlik(tree)-1);

    int i;
    for(i=1;i<derinlik(tree);i++){
        seviyeYazdir(tree,i);
    }







	getch();
	return 0;
}
