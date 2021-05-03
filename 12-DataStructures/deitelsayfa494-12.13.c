#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef struct n{
    char h;
    struct n*next;
}node;

typedef struct t{
    int x;
    struct t*next;
}nodeiki;

void stackYazdir(node *r){
    while(r != NULL){
        printf("%c ",r->h);
        r=r->next;
    }
    printf("\n");
}

void stackYazdir2(nodeiki *r){
    while(r != NULL){
        printf("%d ",r->x);
        r=r->next;
    }
    printf("\n");
}

nodeiki *push2(nodeiki *r,int eklenecek){
    if(r == NULL){
        r=(nodeiki*)malloc(sizeof(nodeiki));
        r->x=eklenecek;
        r->next=NULL;
        return r;
    }
    nodeiki *iter;
    iter=r;
    while(iter->next != NULL){
        iter=iter->next;
    }
    iter->next=(nodeiki*)malloc(sizeof(nodeiki));
    iter->next->x=eklenecek;
    iter->next->next=NULL;
    return r;

}

int pop2(nodeiki **r ){
    nodeiki *root;
    root=*r;
    if(root == NULL){
        printf("Stack bostur.\n");
        return -1;
    }
    if(root->next == NULL){
        int rValue;
        rValue=root->x;
        free(root);
        *r=NULL;
        return rValue;
    }
    nodeiki *iter;
    iter=root;
    while(iter->next->next != NULL){
        iter=iter->next;
    }
    nodeiki *temp;
    temp=iter->next;
    int rValue;
    rValue=iter->next->x;
    iter->next=NULL;
    free(temp);
    return rValue;


}

node *push(node *r,char eklenecek){
    if(r == NULL){
        r=(node*)malloc(sizeof(node));
        r->h=eklenecek;
        r->next=NULL;
        return r;
    }
    node *iter;
    iter=r;
    while(iter->next != NULL){
        iter=iter->next;
    }
    iter->next=(node*)malloc(sizeof(node));
    iter->next->h=eklenecek;
    iter->next->next=NULL;
    return r;
}

char pop(node **r){
    node *root;
    root=*r;
    if(root == NULL){
        printf("Stack bos.\n");
        return -1;
    }
    if(root->next == NULL){
        char rChar;
        rChar=root->h;
        free(root);
        *r=NULL;
        return rChar;
    }
    node *iter;
    iter=root;
    while(iter->next->next != NULL){
        iter=iter->next;
    }
    node *temp;
    char rChar;
    temp=iter->next;
    rChar=iter->next->h;
    iter->next=NULL;
    free(temp);
    return rChar;

}

char stackTop(node *r){
    node *iter;
    iter=r;
    while(iter->next != NULL){
            iter=iter->next;
    }
    return iter->h;
}

int operatorMu( char c )
{
    int result = 0;

    switch( c )
    {
        case '^': case '*': case '/': case '%': case '+': case '-':
            result = 1;
            break;
        default:
            break;
    }

    return result;
}

int isEmpty(node *r){
    if(r == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty2(nodeiki *r){
    if(r == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int oncelik( char operator1, char operator2 )
{
    int result = 1;

    switch( operator1 )
    {
        case '^':
            if( operator2 == '^')
                result = 0;
            break;
        case '*': case '/': case '%':
            switch( operator2 ) {
                case '^':
                    result = -1;
                    break;
                case '*': case '/': case '%':
                    result = 0;
                    break;
                default:
                    break;
            }
            break;
        case '+': case '-':
            switch( operator2 ) {
                case '-': case '+':
                    result = 0;
                    break;
                default:
                    result = -1;
                    break;
            }
            break;
    }

    return result;
}

void sonEkeCevir(char ortaEk[],char sonEk[]){
    int i=0;
    int j=0;
    char c;

    node *root;
    root=NULL;
    root=push(root,'(');
    while(ortaEk[i] != '\0'){
        i++;
    }
    ortaEk[i++]=')';
    ortaEk[i]='\0';

    i=0;

    while( !isEmpty(root) && ortaEk[i] != '\0'){
        c=ortaEk[i++];
        if(isdigit(c)){
            while(isdigit(c)){
                sonEk[j++]=c;
                c=ortaEk[i++];
            }
            sonEk[j++]=' ';
            if(c == ')' || operatorMu(c)){
                i--;
            }
        }
        else if(c == '('){
                root=push(root,'(');
        }
        else if(operatorMu(c)==1){
            if(!isEmpty(root) && operatorMu(stackTop(root))){
                while(operatorMu(stackTop(root)) && (oncelik(stackTop(root),c)) >=0 ){
                    sonEk[j++]=pop(&root);
                    sonEk[j++]=' ';
                }
                root=push(root,c);
            }
            else{
                root=push(root,c);
            }
        }
        else if(c == ')'){
            if(!isEmpty(root)){
                c=pop(&root);
                while(!isEmpty(root) && c != '('){
                    sonEk[j++]=c;
                    sonEk[j++]=' ';
                    c=pop(&root);
                }
            }
        }
    }
    sonEk[j]='\0';
    stackYazdir(root);
}

int hesapla(int op1,int op2,char c){
    int sonuc;
    switch(c){
    case '-':
        sonuc=op1-op2;
        break;
    case '+':
        sonuc=op1+op2;
        break;
    case '*':
        sonuc=op1*op2;
        break;
    case '/':
        sonuc=op1/op2;
        break;
    case '%':
        sonuc=op1%op2;
    case '^':
        sonuc=pow(op1,op2);
        break;
    default:
        break;
    }
    return sonuc;
}

int sonEkiOku(char *sonEk){
    int i=0;
    char c;
    nodeiki *root;
    root=NULL;
    int mult=1;
    int sayi=0;
    int x,y;
    while(sonEk[i] != '\0'){
        mult=1;
        sayi=0;
        c=sonEk[i];
        if(isdigit(c)){
            while(isdigit(c)){
                sayi*=mult;
                sayi+=c-48;
                c=sonEk[++i];
                mult*=10;
            }
            --i;
            root=push2(root,sayi);
        }
        else if(operatorMu(c)){
            if(isEmpty2(root)){
                printf("Gecersiz son ek ifadesi.\n");
                return 0;
            }
            x=pop2(&root);
            if(isEmpty2(root)){
                printf("Gecersiz son ek ifadesi.\n");
                return 0;
            }
            y=pop2(&root);
            root=push2(root,hesapla(y,x,c));
        }
        i++;
    }
    if(isEmpty2(root)){
        printf("Gecersiz son ek ifadesi.\n");
        return 0;
    }
    return pop2(&root);



}

int main(){
	char ortaEk[50];
	char sonEk[50];
	printf("Bir orta ek ifadesi giriniz:");
	gets(ortaEk);
	sonEkeCevir(ortaEk,sonEk);
	printf("%s\n",sonEk);
    printf("SONUC=%d",sonEkiOku(sonEk));





	getch();
	return 0;
}
