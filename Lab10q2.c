#include <stdio.h>
#include <string.h>
int main(){
	
	char name[5][30];
	int i,j=0,length,highest=0;
	for(i=0;i<5;i++){
		printf("Enter the name of student %d ",i+1);
		scanf(" %[^\n]",name[i]);
	}

	for(i=0;i<5;i++){
		length=strlen(name[i]);
		if(highest<length) {
		highest=length;
		j=i;
		}
	}
	printf("Longest name is %s having %d characters",name[j],highest);
	
	return 0;
}
