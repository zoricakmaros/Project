#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<time.h>

bool isLetterInstring(char *p ,char ch){
 char *strstr;	

int Length= strlen(p);
printf("%d",Length);
int i;
for(i=0;i<Length;i++){
if(*(p+1)==ch){
return true;
}	
}

return false;	
}	
	



int main (){

	
char *pstring;
bool v;
pstring =(char*)malloc (sizeof(char)*21);
scanf("%d",pstring);
if (isLetterInstring(pstring,'i')){
printf("letter is this:");
free(pstring);	
	



	
}
else{
printf("letter isnt this:");	
}
return 0;
}
