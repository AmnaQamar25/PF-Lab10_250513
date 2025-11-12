#include <stdio.h>
int main(){
	
	char name[5][30];
	int i;
	for(i=0;i<5;i++){
		printf("Enter the name of student %d ",i+1);
		scanf(" %[^\n]",name[i]);
	}
printf("Name of the five students are :\n");
	for(i=0;i<5;i++){
		printf("%s\n",name[i]);
	}
	
	return 0;
}

