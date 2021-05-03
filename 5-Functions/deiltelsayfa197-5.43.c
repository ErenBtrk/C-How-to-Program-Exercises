#include <stdio.h>
#include <conio.h>


int main(){
	static int i=1;
	 	printf("%d\n",i);
	 	i ++;
	 	main();  /*recursively call int main() */
	

	
	
	
	getch();
	return 0;
}
