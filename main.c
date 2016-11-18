#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main(){
  char s[100];
  printf("What would you like to do?: ");
  fgets(s,sizeof(s),stdin);

  //Get rid of newLine char
  int j = 0;
  for(; j<strlen(s);j++){
    if( strcmp(&s[j],"\n") == 0){
      s[j] = 0;
      j--;
    }
  }
  

  char * cmd[100];
  char * currentString = s;
  int i = 0;
  
  while( currentString ){
    cmd[i] = strsep(&currentString," ");
    printf("Added %s\n", cmd[i]);
    i++;
  }

  
  //cmd[i-1] = strncpy( cmd[i-1], cmd[i-1], strlen(cmd[i-1]) - 1 );

  
  cmd[i] = 0;
  //printf("cmd[0]: %s \n", cmd[0]);
  //printf("cmd[1]: %s \n", cmd[1]);
  
  execvp(cmd[0], cmd);

  
  return 0;
}

