#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool KiemTraXauNgoac(string str,stack<char> a)
{
	
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='('||str[i]=='['||str[i]=='{')
		{
			a.push(str[i]);
		}
		else 
		{
			if(!a.empty())
			{
				if(str[i]==']')
				{
					if(a.top()!='[')
					{
						return false;
					}
				}
				
				a.pop();
			}
			else 
			{
				return false;
			}
		}
	}
	return a.empty()==true;
	
}
int main()
{

	string str;
	stack<char> a;
	getline(cin,str);
	if(KiemTraXauNgoac(str,a)==true)
	{
		cout<<"Xau ngoac dung"<<endl;
	}
	else 
	{
		cout<<"xau ngoac sai:"<<endl;
	}
	return 0;
	};
	