#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3

typedef struct n{
    int x;
    struct n*next;
}node;

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
        printf("Sira bostur.\n");
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

int siraninUzunlugu(node *r){
    int count=0;
    while(r != NULL){
        count++;
        r=r->next;
    }
    return count;
}

int isEmpty(node *r){
    if(r == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void siraOlustur(void){
    node *root;
    root=NULL;
    int i;
    for(i=0;i<10;i++){
        root=enque(root,i*5);
        sirayiYazdir(root);
        printf("Siranin uzunlugu =%d\n ",siraninUzunlugu(root));
    }

    for(i=0;i<11;i++){
        printf("%d dequed.\n",deque(&root));
        sirayiYazdir(root);
        printf("Siranin uzunlugu =%d\n ",siraninUzunlugu(root));
    }

}

int main(){
    srand(time(NULL));
	int musteriGelis;
	int servisSuresi;
	int mevcutMusteriGelis;

	musteriGelis=1+rand()%MAX;
	servisSuresi=musteriGelis+(1+rand()%MAX);

    int dk;
    int temp;
    int enUzunSira=0;
    int enUzunBekleme=0;

    node *root;
    root=NULL;
    root=enque(root,musteriGelis);

    for(dk=musteriGelis;dk<=720;dk++){
        temp=siraninUzunlugu(root);
        if(temp>enUzunSira){
            enUzunSira=temp;
        }
        if(dk == musteriGelis){
            printf("Musteri %d.dakikada geldi.\n",dk);
            root=enque(root,dk);
            musteriGelis=(1+rand()%MAX)+dk;
                if(mevcutMusteriGelis == 0){
                    servisSuresi=(1+rand()%MAX)+dk;
                    mevcutMusteriGelis=dk;
                }
        }
        if(dk == servisSuresi){
            if((servisSuresi - mevcutMusteriGelis) > enUzunBekleme){
                enUzunBekleme=servisSuresi - mevcutMusteriGelis;
            }
            printf("Musteriye servis %d.dakikada yapildi,Musteri %d.dakikada gelmisti.\n",dk,mevcutMusteriGelis);
            if(!isEmpty(root)){
                mevcutMusteriGelis=deque(&root);
                servisSuresi=(1+rand()%MAX)+dk;
            }
            else{
                mevcutMusteriGelis=0;
            }
        }
    }

    printf("Herhangi bir zamanda siradaki maksimum musteri sayisi : %d\n",enUzunSira);
    printf("Herhangi bir musterinin en uzun bekleme suresi : %d\n",enUzunBekleme);
    printf("Kapanis zamaninda siradaki musteri sayisi : %d\n",siraninUzunlugu(root));

	getch();
	return 0;
}
