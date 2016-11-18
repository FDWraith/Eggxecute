#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main(){
  char s[100];
  printf("What would you like to do?: ");
  fgets(s,sizeof(s),stdin);

  char * cmd[100];
  char * currentString = s;
  int i = 0;

  while( currentString ){
    cmd[i] = strsep(&currentString," ");
    i++;
  }
  cmd[i] = 0;

  execvp(cmd[0], cmd);
  
  return 0;
}

