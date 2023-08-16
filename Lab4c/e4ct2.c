#include <stdio.h>
#include <string.h>
int main(void){
  char user_n[99], pass_n[99];
  
	do{
    puts("Enter Username and Password");
    scanf(" %s %s", user_n, pass_n  );
	}
    while((strcmp(user_n  , "a"))&& (strcmp(pass_n  ,"123")));
	
  puts("Login Successful");
  return 0;
}
