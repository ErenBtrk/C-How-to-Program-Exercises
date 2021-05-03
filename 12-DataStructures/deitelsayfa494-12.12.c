#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct n{
    char h;
    struct n*next;
}node;

void stackYazdir(node *r){
    while(r != NULL){
        printf("%c ",r->h);
        r=r->next;
    }
    printf("\n");
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


int main(){
	char ortaEk[50];
	char sonEk[50];
	printf("Bir orta ek ifadesi giriniz:");
	gets(ortaEk);
	sonEkeCevir(ortaEk,sonEk);
	printf("%s",sonEk);






	getch();
	return 0;
}
