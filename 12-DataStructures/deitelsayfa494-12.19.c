#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct n{
    int x;
    struct n*right;
    struct n*left;
}node;


void printTree(node *tree){
    if(tree == NULL){
        return;
    }
    printf("%d ",tree->x);
    printTree(tree->left);
    printTree(tree->right);


}

node *ekle(node *tree,int a){
    if(tree == NULL){
        node *root;
        root=(node*)malloc(sizeof(node));
        root->x=a;
        root->right=NULL;
        root->left=NULL;
        return root;
    }
    if(tree->x > a){
        tree->left=ekle(tree->left,a);
        return tree;
    }
    else if(tree->x < a){
        tree->right=ekle(tree->right,a);
        return tree;
    }
    else{
        printf("Kopya");
        return tree;
    }

}

int elemanSayisi(node *tree){
    static int count=0;
    if(tree == NULL){
        return count;
    }

    count++;
    elemanSayisi(tree->left);
    elemanSayisi(tree->right);
}

int height_of_binary_tree( node *tree)
{
if(tree == NULL)
return 0;
else
{
 int left_side=0;
 int right_side=0;
left_side = height_of_binary_tree(tree -> left);
right_side = height_of_binary_tree(tree -> right);
if(left_side > right_side)
{
return left_side+1;

}
else
return right_side+1;
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


int main(){
    srand(time(NULL));
	node *tree;
	tree=NULL;
	int rSayi;
	int i;
	for(i=0;i<10;i++){
        rSayi=1+rand()%20;
        printf("%3d",rSayi);
        tree=ekle(tree,rSayi);
	}
	printf("\n");
	printTree(tree);
	printf("\nAgacin eleman sayisi=%d\n",elemanSayisi(tree));
    printf("Max derinlik =%d \n",height_of_binary_tree(tree));
    printf("Max Sayi=%d\nMin Sayi=%d\n",max(tree),min(tree));

	getch();
	return 0;
}


