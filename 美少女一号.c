#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	system("mode con cols=100 lines=50");
	system("color 4f");
	char ch;
	FILE *fp=fopen("1.txt","r");
	while((ch=fgetc(fp))!=EOF)
		putchar(ch);
	return 0;
 } 
