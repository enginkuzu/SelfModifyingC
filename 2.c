#include <stdio.h>

int sayi=0;

void h(){
sayi=sayi+3;
}

int main(){
int i;
for(i=0;i<1000000000;i++) h();
return 0;
}
