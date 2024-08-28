// gcc -O2 -S -c foo.c
// gcc -c -g -Wa,-a,-ad [other GCC options] foo.c > foo.lst
#include <stdio.h>
#include <sys/mman.h>

int sayi;

void yaz1(){
sayi=sayi+11;
sayi=sayi+12;
sayi=sayi+13;
}
void yaz2(){
sayi=sayi+21;
sayi=sayi+22;
sayi=sayi+23;
}

int main(){
printf("%p %p\n",yaz1,yaz2);
int i;

unsigned page = (unsigned)yaz1 & ~( getpagesize() - 1 );
if( mprotect( (char*)page, getpagesize(), PROT_READ | PROT_WRITE | PROT_EXEC ) )
{
	puts( "mprotect failed" );
	return 1;
}


sayi = 0;
yaz1();
printf("1) %d\n", sayi);

*(unsigned char*)(yaz1+10) = 100;

sayi = 0;
yaz1();
printf("2) %d\n", sayi);

//for(i=0;i<40;i++)	printf("%p+%d : %d\n", yaz1, i ,*(unsigned char*)(yaz1+i));
return 0;
}
