#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b,c,d;
	cin>>a>>b;
	int k[a*2];
	
	for (int i=0;i<a;i++)
{
	cin>>k[i];
	k[i+a-1]=k[i];
}
b=b%a;
cout<<endl;	
if (b>0)
{

for (int i=b;i<a+b;i++)
{
	cout<<k[i]<<" ";
}
}

	return 0;
}
