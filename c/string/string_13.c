#include<stdio.h>
void main(){
	int i,l,n, c=0;
	char s[50],ch;
	printf("Enter the String..\n");
	scanf("%[^\n]",s);
	

	printf("Enter the char..\n");
	scanf(" %c",&ch);
printf("Enter the limit\n");
	scanf(" %d",&n);
	for(l=0;s[l];l++);
	for(i=l;i>=0;i--)
	{
		if(s[i]==ch)
		{
			c++;
			if(c<=n)
			{
				for(int j=i ; s[j]; j++)
					s[j]= s[j+1];
			}
		}

	}
	printf("%s", s);
}
