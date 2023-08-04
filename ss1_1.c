#include<stdio.h>

main(){
	
	FILE *p;
	char a;
	
	p = fopen("SV1_2.txt","r");
	
	if(p== NULL){
		printf("error");
		
	}
	else{
		while(a!=EOF){
			a = fgetc(p);
			printf("%c",a);
			
 		}
 		fclose(p);
	}
	return 0 ;
}

