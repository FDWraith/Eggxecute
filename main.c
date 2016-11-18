#include <stdio.h>
#include <stdlib.h>




int main(){
  char s[100];
  printf("What would you like to do?: ");
  fgets(s,sizeof(s),stdin);

  return 0;
}

