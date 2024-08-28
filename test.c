#include <stdio.h>

int main(){

int i=1+2+3;
int j=i+4;
int k=j+5;

switch(i){
case 0:
case 1: i++; break;
case 2: j++; break;
case 3: k++; break;
case 4: i++; break;
case 5: i++; break;
}

char *c = (char*)malloc(777);
free(c);


return 0;
}
