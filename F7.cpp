#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long int a;
	int f=1,sl=0,sr=0,count=0;
	cin>>a;
	int k[a],r[a],l[a];
	
	for (int i=0;i<a;i++)
	{
	   cin>>k[i];
	   sl+=k[i];
	   l[i]=sl;
	}
	cout<<endl;
	for (int i=a-1;i>=0;--i)
	{
		sr+=k[i];
		r[i]=sr;
	}
	
	cout<<endl;
	/*
	for (int i=0;i<a;i++)
	{cout<<k[i]<<" ";}
	
	cout<<endl;
	
	for (int i=0;i<a;i++)
	{cout<<r[i]<<" ";}
	
	cout<<endl;
	for (int i=0;i<a;i++)
	{cout<<l[i]<<" ";}
	*/
	cout<<endl<<endl;
	for (int i=0;i<a;++i)
	{
	if (l[i]==r[i])
	{
		cout<<i;
		f=0;
		break;
	}	
	}
	if (f==1)
	{cout<<"-1";}	
	
	return 0;
}
