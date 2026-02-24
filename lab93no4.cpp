#include <stdio.h>
#define MAX 50

int countVowel(char t[],int count[]);

int main() {
	char text[MAX];
	int c[] = {0,0,0,0,0};
	int cVowel;
	printf("Enter text : ");
	scanf("%s", text);
	cVowel = countVowel(text,c);
	printf("Text : [%s] has %d vowels\n", text, cVowel);
	printf("Has %d 'A'\n",c[0]);
	printf("Has %d 'E'\n",c[1]);
	printf("Has %d 'I'\n",c[2]);
	printf("Has %d 'O'\n",c[3]);
	printf("Has %d 'U'\n",c[4]);
}

int countVowel(char t[],int count[]) {
	int i=0, sum=0;
	while (i<MAX && t[i]!='\0') {
		if (t[i]=='A' || t[i]=='a') {count[0]++;sum++;}
		if (t[i]=='E' || t[i]=='e') {count[1]++;sum++;}
		if (t[i]=='I' || t[i]=='i') {count[2]++;sum++;}
		if (t[i]=='O' || t[i]=='o') {count[3]++;sum++;}
		if (t[i]=='U' || t[i]=='u') {count[4]++;sum++;}
		i++;
	}
	return sum;
}
