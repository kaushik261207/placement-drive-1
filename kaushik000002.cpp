#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int start=0,end=strlen(str)-1;
    while(start<end){
    	if(str[start]!=str[end]){
    		printf("not palindrome");
    		return 0;
		}
		start++;end--;
	}
	printf("palindrome");
	return 0;
}