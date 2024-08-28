#include <stdio.h>

int sayi=0;

int h(int t){
return sayi+t;
}

int main(){
int i;
for(i=0;i<1000000000;i++) sayi = h(3);
return 0;
}
