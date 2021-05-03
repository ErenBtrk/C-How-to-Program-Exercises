#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct n{
    char *string;
    struct n*right;
    struct n*left;
}node;

void agaciYazdir(node *tree){
    if(tree == NULL){
        return;
    }
     agaciYazdir(tree->left);
    printf("%s ",tree->string);
    agaciYazdir(tree->right);
}

node* ekle(node *tree,char *dizi){
    if(tree == NULL){
        node *root;
        root=(node*)malloc(sizeof(node));
        root->string=dizi;
        root->right=NULL;
        root->left=NULL;
        return root;
    }
    if(strcmp(dizi,tree->string)>0){
        tree->right=ekle(tree->right,dizi);
        return tree;
    }
    else{
        tree->left=ekle(tree->left,dizi);
        return tree;
    }


}

int ikiliAramaAgaci(node *tree,char *aranan){
    if(tree == NULL){
        return 0;
    }
    if(strcmp(tree->string,aranan)==0){
        return 1;
    }
    if(ikiliAramaAgaci(tree->right,aranan)==1){
        return 1;
    }
    if(ikiliAramaAgaci(tree->left,aranan)==1){
        return 1;
    }
    return 0;
}



int main(){
    node *tree;
    tree=NULL;
    tree=ekle(tree,"Dokuz");
    tree=ekle(tree,"Veli");
    tree=ekle(tree,"Yarasa");
    tree=ekle(tree,"Kirk");
    tree=ekle(tree,"Ali");
    tree=ekle(tree,"Elli");
    tree=ekle(tree,"whatthefuck");
    tree=ekle(tree,"AQ");


    agaciYazdir(tree);



    printf(ikiliAramaAgaci(tree,"whatthe") ? "Aranan kelime bulundu.\n" : "Aranan kelime bulunamadi.\n");





	getch();
	return 0;
}
