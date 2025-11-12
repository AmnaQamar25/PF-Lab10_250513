#include <stdio.h>
#include <string.h>
int main(){
	
	char name[5][30],search[30];
	int i,flag=0,a;
	for(i=0;i<5;i++){
		printf("Enter the name of student %d ",i+1);
		scanf(" %[^\n]",name[i]);
	}
	printf("Enter the name of student to search:\n");
	scanf(" %[^\n]",search);
	for(i=0;i<5;i++){
		if(strcmp(name[i],search)==0) {
		flag++,a=i;
		}
	}
	if(flag==1) printf("Name found!");
	else printf("Not found");
	
	return 0;
}

