#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd, char *logindb, char *passdb); 

int main(){
	char user[64],pass[64],valid=0;
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	printf("Enter username : ");
	scanf("%s",&user);
	printf("Enter password : ");
	scanf("%s",&pass);
	for(int i=0;i<5;i++){
		if(checkLogin(user,pass,login[i],password[i])){
			valid=1;
			break;
		}
	}
	if(valid) printf("Welcome\n");
	else printf("Incorrect login or password\n");
	return 0;
}

int checkLogin(char *login, char *passwd, char *logindb, char *passdb){
	int i;
	for(i=0;i<5;i++){
		if(*(login+i)!=*(logindb+i)) return 0;
	}
	for(i=0;i<5;i++){
		if(*(passwd+i)!=*(passdb+i)) return 0;
	}
	return 1;
}
