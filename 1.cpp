#include<bits/stdc++.h>
using namespace std;


void reverse(string str)
{
	for ( int i = str.length()-1 ; i>=0 ; i--)
	{
		cout<<str[i];
	}
}

int main()
{
	string s;
	cin>>s;
	reverse(s);
	return(0);
}
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	string str;
//	cout<<"enter your string:";
//	cin>>str;
//    cout<<"reverse : ";
//	for (int i = str.length() - 1 ; i >=0; i--)
//	{
//	    cout<<str[i];
//	}
//	return 0;
//}
