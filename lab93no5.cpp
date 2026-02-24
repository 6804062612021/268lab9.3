#include <stdio.h>
#include <ctype.h>
#define MAX 50

int countdigit(char t[]);

int main() {
	char text[MAX];
	printf("Enter input: ");
	gets(text);
	printf("Sum of digit char: %d\n",countdigit(text));
}

int countdigit(char t[]){
	int i=0, sum=0;
	while (i<MAX && t[i]!='\0') {
		if (isdigit(t[i])){
			sum=sum+(int)t[i]-'0';
		}
		i++;
	}
	return sum;
}
