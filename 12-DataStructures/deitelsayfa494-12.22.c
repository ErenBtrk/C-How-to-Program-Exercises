#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct n{
    int x;
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

node* ekle(node *tree,int a){
    if(tree == NULL){
        node *root;
        root=(node*)malloc(sizeof(node));
        root->x=a;
        root->right=NULL;
        root->left=NULL;
        return root;
    }
    if(tree->x < a){
        tree->right=ekle(tree->right,a);
        return tree;
    }
    else if(tree->x > a){
        tree->left=ekle(tree->left,a);
        return tree;
    }
    else{
        return tree;
    }
}

int min(node *tree){
    while(tree->left != NULL){
        tree=tree->left;
    }
    return tree->x;
}

int max(node *tree){
    while(tree->right != NULL){
        tree=tree->right;
    }
    return tree->x;
}

node* sil(node *tree,int a){
    if(tree == NULL){
        return NULL;
    }
    if(tree->x == a){
        if(tree->right == NULL && tree->left == NULL){
            return NULL;
        }
        if(tree->right != NULL){
            tree->x=min(tree->right);
            tree->right=sil(tree->right,min(tree->right));
            return tree;
        }
        if(tree->left != NULL){
            tree->x=max(tree->left);
            tree->left=sil(tree->left,max(tree->left));
            return tree;
        }
    }
    if(tree->x > a){
        tree->left=sil(tree->left,a);
        return tree;
    }
    else{
        tree->right=sil(tree->right,a);
        return tree;
    }


}


int main(){
	node *tree;
	tree=NULL;
	tree=ekle(tree,5);
	tree=ekle(tree,3);
	tree=ekle(tree,10);
	tree=ekle(tree,2);
	tree=ekle(tree,4);
	tree=ekle(tree,8);
	tree=ekle(tree,11);
    agaciYazdir(tree);
    printf("\n");
    tree=sil(tree,5);
    agaciYazdir(tree);
    printf("\n");
	tree=sil(tree,3);
	agaciYazdir(tree);
	printf("\n");
	tree=sil(tree,10);
	agaciYazdir(tree);
	printf("\n");
	tree=sil(tree,2);
	agaciYazdir(tree);
	printf("\n");
	tree=sil(tree,4);
	agaciYazdir(tree);
	printf("\n");
	tree=sil(tree,8);
	agaciYazdir(tree);
	printf("\n");
	tree=sil(tree,11);
    agaciYazdir(tree);
    printf("\n");



	getch();
	return 0;
}
