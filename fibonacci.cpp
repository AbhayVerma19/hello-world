#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	int a = 0, b = 1, c, i;
	if (n == 0)
		return a;
	for (i = 2; i <= n; i++)
    {
		c = a + b;
		a = b;
		b = c;
    cout<<c<<endl;
	}
}

int main()
{
	int n;
	cout<<"Enter the number for fibonacci series: ";
	cin>>n;

	cout << fib(n);
	return 0;
}



