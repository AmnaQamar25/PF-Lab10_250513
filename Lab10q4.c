#include <stdio.h>
#include <string.h>
int main(){
	
	char name[5][30],temp[30];
	int i,j;
	for(i=0;i<5;i++){
		printf("Enter the name of student %d ",i+1);
		scanf(" %[^\n]",name[i]);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(strcmp(name[i],name[j]) > 0) {
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}	
	for(i=0;i<5;i++){
		printf("%s \n",name[i]);
	}
	return 0;
}

