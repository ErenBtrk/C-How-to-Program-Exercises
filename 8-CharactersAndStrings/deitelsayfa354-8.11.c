#include <stdio.h>
#include <conio.h>
#include <string.h>
#include  <stdlib.h>
#include <time.h>

char* concat(const char *, const char *);
void rastgeleCumle( const char*[], const char*[], const char*[], const char*[]);

int main(){
	 const char *nesne[20]={"cicek","top","belgesel","araba","kamyon",
                                            "cay","kahve","kitap","kalem","corap",
                                            "bilgisayar","televizyon","telefon","oyuncak","sapka",
                                            "kardes","elma","armut","muz","pizza"};
	 const char *isim[20]={"Ali","Veli","Ayse","Fatma","Yarasa",
                                        "Alex","Michael","Starset","Durant","Lebron",
                                        "Kivanc","Picasso","Deniz","CardiB","Jhin",
                                        "Haydar","Osman","Nuriye","Kawhi","Jordan"};

	 const char *fiil[20]={"oku","at","bin","sur","oyna","izle","ye","bak","ac","ic",
                                        "al","getir","gotur","firlat","tut","kes","git","gel","ara","giy"};

	 const char *edat[20]={"gibi","kadar","icin","ragmen","sanki",
                                          "ile","dogru","baska","gore","yalniz",
                                          "ancak","karsin","sanki","tek","bir",
                                          "itibaren","uzere","sadece","itibaren","dolayi"};
    srand(time(NULL));
    rastgeleCumle(isim,edat,nesne,fiil);




	getch();
	return 0;
}

void rastgeleCumle( const char *a[20], const char*b[20], const char*c[20], const char*d[20]){
    int x,y,z,w;
    int i,j;

    for(i=0;i<20;i++){
        x=rand()%20;
        y=rand()%20;
        z=rand()%20;
        w=rand()%20;
        printf("%s\n",concat(concat(a[x],b[y]),concat(c[z],d[w])));
    }

}
char* concat(const char *s1, const char *s2){
    char *result = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}
