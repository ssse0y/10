#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	
	FILE *fp=NULL;/* file ������*/ 
	char c;
	
	fp=fopen("sample.txt","r");
	
	while((c=fgetc(fp))!= EOF)
		putchar(c);
	
	fclose(fp);
} 
