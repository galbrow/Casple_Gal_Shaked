#include <stdio.h>

int main()
{
	FILE *fp = fopen("input.txt","r");
	if(fp==NULL)
		return 0;
	char str[1000];
	int num=0;
	do
	{
		
		char c=fgetc(fp);
		char newc=c;
		if(feof(fp))
			break;
		if(c>64 && c<91){
			newc=c+32;
			num=num+1;
	}
		printf("%d\t%d\n",c,newc);
	}while(1);
	printf("\n%s%d\n","the number of letters: ",num);
	fclose(fp);
	return(0);
}
