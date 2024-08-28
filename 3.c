#include <stdio.h>

int sayi=0;

void h(int t){
sayi=sayi+t;
}

int main(){
int i;
for(i=0;i<1000000000;i++) h(3);
return 0;
}
