#include<bits/stdc++.h>

using namespace std;

int main()
{
	char str[100],temp[100];
	int i,j;
	stack <char> s;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if (str[i]=='(')
			s.push(str[i]);
		else
			if (s.top() !=(-1) )
				for(j=i-1;j>=0;j--)
					if(str[j]=='(')
					{
						temp[j]=str[j];
						temp[i]=str[i];
						str[j]=str[i]='a';
						s.pop();
						break ;
					}
	}	
	for(i=0;i<strlen(str);i++)
	{
		if(temp[i]=='('||temp[i]==')')
		cout<<temp[i];
	}
}
