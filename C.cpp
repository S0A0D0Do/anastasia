#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int p;
	p=a*b;
    while (a!=b)
    {if (a>b)
    a=a-b;
    else
    b=b-a;
	}
	return p/b;
}

int main() {
	
	long long a,b,m;
	cin>>a>>b;
	
	if (a==0 or b==0)
	{
		cout<<"0";
	}
	else
	 cout<<gcd(a,b);
	return 0;
}
