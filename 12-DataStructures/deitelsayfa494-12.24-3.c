#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct n{
    int x;
    struct n*left;
    struct n*right;
}node;

typedef struct s{
    node * data;
    struct s*next;
}node2;

node2* enque(node2 **r,node *value){
    node2 *root;
    root=*r;
    if(root == NULL){
        root=(node2*)malloc(sizeof(node));
        root->data=value;
        root->next=NULL;
        return root;
    }
    node2 *iter;
    iter=root;
    while(iter->next != NULL){
        iter=iter->next;
    }
    iter->next=(node2*)malloc(sizeof(node2));
    iter->next->data=value;
    iter->next->next=NULL;
    return root;
}

node* deque(node2 **r){
    node2 *root;
    root=*r;
    if(root == NULL){
        return NULL;
    }
    if(root->next == NULL){
        node *treeValue;
        treeValue=root->data;
        free(root);
        *r=NULL;
        return treeValue;
    }
    node2 *temp;
    temp=root;
    node *treeValue;
    treeValue=root->data;
    root=root->next;
    *r=root;
    free(temp);
    return treeValue;


}



void printTree(node *tree){
    if(tree == NULL){
        return ;
    }
    printf("%d ",tree->x);
    printTree(tree->left);
    printTree(tree->right);
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
    else if(tree->x < a){
        tree->right=addTree(tree->right,a);
        return tree;
    }
    else{
        return tree;
    }
}

void levelOrder(node *tree,node2* que){
    node *temp;
    temp=NULL;
    que=enque(&que,tree);
    if(tree == NULL){
        return;
    }
    while(que != NULL){
        temp=deque(&que);
        printf("%d ",temp->x);
        if(temp->left != NULL){
            que=enque(&que,temp->left);
        }
        if(temp->right != NULL){
            que=enque(&que,temp->right);
        }
    }

}

int main(){
	node *tree;
	tree=NULL;
	tree=addTree(tree,10);
	tree=addTree(tree,5);
	tree=addTree(tree,25);
	tree=addTree(tree,20);
	tree=addTree(tree,30);
	tree=addTree(tree,-5);
	tree=addTree(tree,8);
	tree=addTree(tree,-15);
	tree=addTree(tree,4);
	tree=addTree(tree,1);
	node2 *que;
	que=NULL;
    levelOrder(tree,que);



	getch();
	return 0;
}
