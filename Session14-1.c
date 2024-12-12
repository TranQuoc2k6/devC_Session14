#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	printf("nhap chuoi ky tu bat ky: ");
	scanf("%s",&string);
	printf("ky tu vua nhap la: %s\n",string);
	printf("do dai ky tu vua nhap la: %d",strlen(string));
	return 0;
}
