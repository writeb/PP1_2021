#include <iostream>
#include <stack>
using namespace std;

bool BracketsBalanced(string str)
{
	stack<char> st;
		for(int i=0;i<str.size();i++)
		{
			if(st.empty())
			{
				st.push(str[i]);
			}
			else if((st.top()=='('&& str[i]==')') || (st.top()=='{' && str[i]=='}') || (st.top()=='[' && str[i]==']'))
			{
				st.pop();
			}
			else
			{
				st.push(str[i]);
			}
		}
		if(st.empty())
		{
			return true;
		}
		return false;
}

int main()
{
	string str;
    cin>>str;

	if (BracketsBalanced(str))
		cout << "yes";
	else
		cout << "no";
	return 0;
}