#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct n{
    char veri;
    struct n *next;
}node;

void secimFonk(void){

    printf("[1]-Linked list'e eleman eklemek icin harf giriniz:\n"
           "[2]-Linked list'ten eleman silmek icin harf giriniz:\n"
           "[3]-Cikis\n");


}

void bastir(node *r){
    printf("Liste:\n");

    while(r!=NULL){
        printf("%c->",r->veri);
        if(r->next==NULL){
            printf("NULL");
        }
        r=r->next;
    }
    printf("\n");
}

node* ekleAlfabetik(node *r,char veri){
    if(r==NULL){
        r=(node*)malloc(sizeof(node));
        r->next=NULL;
        r->veri=veri;
        return r;
    }
    if(r->veri > veri){
        node *temp;
        temp=(node*)malloc(sizeof(node));
        temp->veri=veri;
        temp->next=r;
        return temp;
    }
    node *iter;
    iter=r;
    while(iter->next!=NULL && iter->next->veri < veri){
        iter=iter->next;
    }
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->next=iter->next;
    iter->next=temp;
    temp->veri=veri;
    return r;
}

node* sil(node *r,char veri){
    node *iter;
    node *temp;
    iter=r;
    if(r->veri == veri){
        temp=r;
        r=temp->next;
        free(temp);
        printf("\''%c\'' harfi silindi.\n",veri);
        return r;
    }
    while(iter->next!=NULL && iter->next->veri != veri){
        iter=iter->next;
    }
    if(iter->next==NULL){
        printf("\''%c\'' harfi bulunamadi\n",veri);
        return r;
    }
    temp=iter->next;
    iter->next=iter->next->next;
    free(temp);
    printf("\''%c\'' harfi bulunamadi\n",veri);
    return r;

}


int main(){
	node *root;
	root=NULL;
	int secim;
	char harf;

	secimFonk();
    printf("Seciminizi giriniz:");
    scanf("%d",&secim);
        while(secim!=3){
            switch(secim){
            case 1:
                printf("Eklenecek harfi giriniz:");
                scanf("\n%c",&harf);
                root=ekleAlfabetik(root,harf);
                bastir(root);
                break;
            case 2:
                printf("Silinecek harfi giriniz:\n");
                scanf("\n%c",&harf);
                root=sil(root,harf);
                bastir(root);
                break;
            case 3:
                break;
            default:
                printf("Hatali giris.\n");
                break;

            }
            printf("\nSeciminizi giriniz:");
            scanf("%d",&secim);

        }
        printf("Cikis yapildi.\n");


	getch();
	return 0;
}
