#include <stdio.h>
int main(){
	
	char name[5][30];
	int i,j,vowels=0,consonants=0;
	for(i=0;i<5;i++){
		printf("Enter the name of student %d ",i+1);
		scanf(" %[^\n]",name[i]);
	}

	for(i=0;i<5;i++){
		for(j=0;name[i][j]!='\0';j++){
			if(name[i][j]=='a' || name[i][j]=='e' || name[i][j]=='i' || name[i][j]=='o' || name[i][j]=='u'||
			   name[i][j]=='A' || name[i][j]=='E' || name[i][j]=='I' || name[i][j]=='O' || name[i][j]=='U') vowels++;
			else if((name[i][j]>='A' && name[i][j]<='Z') || (name[i][j]>='a' && name[i][j]<='z')) consonants++;
		}
		printf("%s have %d vowels and %d consonants\n",name[i],vowels,consonants);
		vowels=0,consonants=0;
	}
	
	return 0;
}

