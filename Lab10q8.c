#include <stdio.h>
#include <string.h>
int main(){
	
	char word1[10],word2[10],temp;
	int i,j,length1,length2;
		printf("Enter the first word : ");
		scanf(" %s",word1);
		printf("Enter the second word : ");
		scanf(" %s",word2);
		length1=strlen(word1);
		length2=strlen(word2);
		strlwr(word1);
		strlwr(word2);
	for(i=0;i<length1-1;i++){
		for(j=i+1;j<length1;j++){
			if(word1[i]>word1[j]) {
				temp=word1[i];
				word1[i]=word1[j];
				word1[j]=temp;
			}
		}
	}	
	for(i=0;i<length2-1;i++){
		for(j=i+1;j<length2;j++){
			if(word2[i]>word2[j]) {
				temp=word2[i];
				word2[i]=word2[j];
				word2[j]=temp;
			}
		}
	}	
	if(strcmp(word1,word2) == 0) printf("They are anagrams!");
	else printf("They are not anagrams!");

	return 0;
}

