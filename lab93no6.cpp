#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main (){
    char str1[100], str2[100], str_rem[100];
    int i = 0, j = 0, k = 0;
	int countrm[100]={0};
 
    printf ("Enter the First string:\n");
    fflush (stdin);
    gets (str1);
    printf("Enter the Second string:\n");
    gets(str2);   	

    for (i = 0; str1[i]!= '\0'; i++){
        for (j = 0; str2[j] != '\0'; j++){
            if (str1[i] == str2[j]){
            	countrm[i] = countrm[i]+1;
                continue;
            }
            else{
                str_rem[k] = str2[j];
                k++;
            }
        }
        str_rem[k] = '\0';
        strcpy (str2, str_rem);
        k = 0;
    }
 
    printf ("On removing characters from second string we get: %s\n", str_rem);
    
    for(i=0;i<strlen(str1);i++){
    	if(countrm[i]!=0) printf("Removed '%c' in total of %d times\n",str1[i],countrm[i]);
		else printf("There is no %c in str2\n",str1[i]);
	}
 
    return 0;
}
