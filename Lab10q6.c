#include <stdio.h>
#include <string.h>
int main(){
	
	char fname[3][20],lname[3][20];
	int i;
	for(i=0;i<3;i++){
	printf("Enter the first name for %d student: ",i+1);
	scanf(" %[^\n]",fname[i]);
	printf("Enter the last name for %d student: ",i+1);
	scanf(" %[^\n]",lname[i]);
	}
	for(i=0;i<3;i++){
	strcat(fname[i], " "); 
	strcat(fname[i],lname[i]);
	printf("Full name of %d: %s\n",i+1,fname[i]);	
	}
	
	return 0;
}

