#include <stdio.h>
#include<string.h>

int main(void) {
	char a[100],t;
	int i,len,l;
	
	gets(a);
	len=strlen(a);
	l=len-1;
	
	for(i=0;i<(len/2);i++){
		t=a[i];
		a[i]=a[l];
		a[l]=t;
		l--;
	}
	puts(a);
	return 0;
}
