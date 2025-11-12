#include <stdio.h>
#include <string.h>
int main(){
	
	char name[30],*lname,*fname,*splited;
	int i=0,count=0;
	printf("Enter the full name: ");
	scanf(" %[^\n]",name);	
	while(name[i]!='\0'){
		if(name[i]!=' ') count++;
		i++;
	}		
	splited=strtok(name," ");
	fname=strlwr(splited);
	while (splited != NULL){
        lname = splited;
        splited = strtok(NULL, " "); 
    }
	printf("%c%s%d",fname[0],strlwr(lname),count);
	return 0;
}

