#include<stdio.h>
#include<string.h>

//https://github.com/weilanhanf/NWU_data_structure_algorithm
//https://www.cnblogs.com/welan/category/1328658.html


int main()
{
	char str[100];
	gets(str);
	int len = strlen(str);
	
	for(int i=0;i<len;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||str[i]>='A'&&str[i]<='Z')
			putchar('0'); 
		else if(str[i]>='0'&&str[i]<='9')
			putchar('1'); 
	}
	
	return 0;
 } 
