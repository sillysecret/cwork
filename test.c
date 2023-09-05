	#include <stdio.h>
	#include <string.h>
void *mymemset(void *str,int c,int n)
{
int i =0;
unsigned char *p = str;

	while(n > 0)
	{
		*p = (unsigned char)c;
		p++;	
		n--;
	}
return str;	
}




int main(void){
	char *str;
	
	str =strdup("heloword");

	mymemset(str,'a',5);

	printf("%s\n",str);



return 0;
}
