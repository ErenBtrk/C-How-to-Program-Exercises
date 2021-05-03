#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct treeNode{
    int x;
    struct treeNode*left;
    struct treeNode*right;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

struct queNode{
    TreeNodePtr data;
    struct queNode *next;
};

typedef struct queNode QueNode;
typedef QueNode *QueNodePtr;




QueNodePtr enque(QueNodePtr *r,TreeNodePtr a){
    QueNodePtr root;
    root=*r;
    if(root == NULL){
        root=(QueNodePtr)malloc(sizeof(QueNodePtr));
        root->data=a;
        root->next=NULL;
        return root;
    }
    QueNodePtr iter;
    iter=root;
    while(iter->next != NULL){
        iter=iter->next;
    }
    iter->next=(QueNodePtr)malloc(sizeof(QueNodePtr));
    iter->next->data=a;
    iter->next->next=NULL;
    return root;

}

TreeNodePtr deque(QueNodePtr *r){
    QueNodePtr root;
    root=*r;
    if(root == NULL){
        return NULL;
    }
    if(root->next == NULL){
        QueNodePtr temp;
        temp=root;
        TreeNodePtr value;
        value=root->data;
        free(temp);
        *r=NULL;
        return value;
    }
    QueNodePtr temp;
    temp=root;
    TreeNodePtr value;
    value=root->data;
    root=root->next;
    free(temp);
    *r=root;
    return value;


}

void agaciYazdir(TreeNodePtr tree){
    if(tree == NULL){
        return;
    }
    printf("%d ",tree->x);
    agaciYazdir(tree->left);
    agaciYazdir(tree->right);
}

TreeNodePtr agacaEkle(TreeNodePtr tree,int a){
    if(tree == NULL){
        TreeNodePtr root;
        root=(TreeNodePtr)malloc(sizeof(TreeNodePtr));
        root->x=a;
        root->left=NULL;
        root->right=NULL;
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

int isEmpty(QueNodePtr r){
    if(r == NULL){
        return 1;
    }
    else {
        return 0;
    }
}

void levelOrder(TreeNodePtr tree,QueNodePtr que){
    TreeNodePtr temp;
    temp=NULL;
    que=enque(&que,tree);
    if(tree == NULL){
        return ;
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
    TreeNodePtr tree;
    tree=NULL;
    tree=agacaEkle(tree,10);
    tree=agacaEkle(tree,2);
    tree=agacaEkle(tree,8);
    tree=agacaEkle(tree,11);
    tree=agacaEkle(tree,17);
    tree=agacaEkle(tree,4);
    //agaciYazdir(tree);

    QueNodePtr que;
    que=NULL;
    levelOrder(tree,que);








	getch();
	return 0;
}
