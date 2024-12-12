#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	printf("moi ban nhap ky tu: ");
	scanf("%s",&string);
	for(int i=0; string[i]!='\0'; i++){
		printf("%c ", string[i]);
	}
	return 0;
};
