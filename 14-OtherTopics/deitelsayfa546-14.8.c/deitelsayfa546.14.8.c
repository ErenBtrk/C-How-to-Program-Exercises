#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct n{
    char c;
    struct n*next;
}node;

void stackYazdir(node *r){
    while(r != NULL){
        printf("%c",r->c);
        r=r->next;
    }
    printf("\n");
}

node *push(node *r,char harf){
    if(r == NULL){
        r=(node*)malloc(sizeof(node));
        r->c=harf;
        r->next=NULL;
        return r;
    }
    node *iter;
    iter=r;
    while(iter->next != NULL){
        iter=iter->next;
    }
    iter->next=(node*)malloc(sizeof(node));
    iter->next->c=harf;
    iter->next->next=NULL;
    return r;
}

char pop(node **r){
    node *root;
    root=*r;
    if(root == NULL){
        printf("Sira bos.\n");
        return -1;
    }
    if(root->next == NULL){
        char rChar;
        rChar=root->c;
        free(root);
        *r=NULL;
        return rChar;
    }
    node *iter;
    iter=root;
    node *temp;
    while(iter->next->next != NULL){
        iter=iter->next;
    }
    char rChar;
    rChar=iter->next->c;
    temp=iter->next;
    free(temp);
    iter->next=NULL;
    *r=root;
    return rChar;

}

int main(int argc,char *argv[]){
	if(argc>3){
        printf("Fazla arguman sayisi.\n");
        exit(EXIT_SUCCESS);
	}
	else if(argc<3){
        printf("Yetersiz arguman sayisi.\n");
        exit(EXIT_SUCCESS);
	}
	else{
        FILE *dosya1;
        FILE *dosya2;
        char c;
            if((dosya1=fopen(argv[1],"r+"))==NULL){
                printf("%s dosyasi acilamadi.\n",argv[1]);
            }
            else{
                if((dosya2=fopen(argv[2],"w+"))==NULL){
                    printf("%s dosyasi acilamadi.\n",argv[2]);
                }
                else{
                    node *root;
                    root=NULL;
                    while((c=getc(dosya1)) != EOF){
                        root=push(root,c);
                    }
                    while(root != NULL){
                        putc(pop(&root),dosya2);
                    }
                    printf("%s dosyasindaki metin , %s dosyasina basariyla tersten yazildi.\n",argv[1],argv[2]);
                    fclose(dosya1);
                    fclose(dosya2);
                }
            }

    }





	getch();
	return 0;
}
