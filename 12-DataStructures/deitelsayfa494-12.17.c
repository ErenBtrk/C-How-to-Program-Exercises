#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct n{
    char *string;
    struct n*right;
    struct n*left;
}node;

void dolas1(node *agac){
    if(agac == NULL){
        return;
    }
    dolas1(agac->right);
    printf("%s ",agac->string);
    dolas1(agac->left);
}

void dolas2(node *agac){
    if(agac == NULL){
        return;
    }
    printf("%s ",agac->string);
    dolas2(agac->left);
    dolas2(agac->right);

}
void dolas3(node *agac){
    if(agac == NULL){
        return;
    }
    dolas3(agac->right);
    printf("%s ",agac->string);
    dolas3(agac->left);

}

node *ekle(node *agac,char *delp){
    if(agac == NULL){
        node *root;
        root=(node*)malloc(sizeof(node));
        root->string=delp;
        root->right=NULL;
        root->left=NULL;
        return root;
    }
    if(strcmp(agac->string,delp) < 0){
        agac->right=ekle(agac->right,delp);
        return agac;
    }
    else{
        agac->left=ekle(agac->left,delp);
        return agac;
    }
}

int main(){
	char metin[100];
	printf("Bir metin giriniz:");
	gets(metin);
	node *agac;
	agac=NULL;
	char *delp;
	delp=strtok(metin," ,.;!?");
	while(delp != NULL){
        agac=ekle(agac,delp);
        delp=strtok(NULL," ,.;!?");
	}
    dolas1(agac);
    printf("\n");
    dolas2(agac);
     printf("\n");
    dolas3(agac);



	getch();
	return 0;
}
