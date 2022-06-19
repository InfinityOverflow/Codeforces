#include <iostream>
#include <string>
using namespace std;
int main()
{
	char s [201];
	cin >> s;
	int flag=0;
	for(int i =0;i<200;i++)
	{
	    char ch=s[i];
		switch(ch)
		{
			case '.':
				cout << 0;
				break;
			case '-':
				if(s[i+1]=='.')
				 cout << 1;
				else
				 cout<<2;
				i++;
				break;
			default :
				flag++;
		}
		if(flag!=0)
		 break;
	}
}
