#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct n{
    int x;
    struct n*right;
    struct n*left;
}node;

void printTree(node *tree,int space){
    int i;
    while( tree != NULL){
        printTree(tree->right,space+5);
        for(i=1;i<=space;i++){
            printf(" ");
        }
        printf("%d\n\n",tree->x);
        tree=tree->left;
        space+=5;
    }

}

node* addTree(node *tree,int a){
    if(tree == NULL){
        node *root;
        root=(node*)malloc(sizeof(node));
        root->x=a;
        root->right=NULL;
        root->left=NULL;
        return root;
    }
    if(tree->x > a){
        tree->left=addTree(tree->left,a);
        return tree;
    }
    else if(tree->x <a){
        tree->right=addTree(tree->right,a);
        return tree;
    }
    else{
        return tree;
    }

}

int find(node *tree,int a){
    if(tree == NULL){
        return 0;
    }
    if(tree->x == a){
        return 1;
    }
    if(find(tree->left,a) == 1){
        return 1;
    }
    if(find(tree->right,a) == 1){
        return 1;
    }
        return 0;
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

node* del(node *tree,int a){
    if(tree == NULL){
        return NULL;
    }
    if(tree->x == a){
        if(tree->left == NULL && tree->right == NULL){
            return NULL;
        }
        if(tree->left != NULL){
            tree->x=max(tree->left);
            tree->left=del(tree->left,max(tree->left));
            return tree;
        }
        if(tree->right != NULL){
            tree->x=min(tree->right);
            tree->right=del(tree->right,min(tree->right));
            return tree;
        }
    }
    if(tree->x > a){
        tree->left=del(tree->left,a);
        return tree;
    }
    else if(tree->x < a){
       tree->right=del(tree->right,a);
       return tree;
    }

}

int main(){
	node *tree;
	tree=NULL;
	tree=addTree(tree,49);
	tree=addTree(tree,28);
	tree=addTree(tree,83);
	tree=addTree(tree,18);
	tree=addTree(tree,40);
	tree=addTree(tree,71);
    tree=addTree(tree,97);
    tree=addTree(tree,11);
    tree=addTree(tree,19);
    tree=addTree(tree,32);
    tree=addTree(tree,44);
    tree=addTree(tree,69);
    tree=addTree(tree,72);
    tree=addTree(tree,92);
    tree=addTree(tree,99);


    printTree(tree,0);




	getch();
	return 0;
}
