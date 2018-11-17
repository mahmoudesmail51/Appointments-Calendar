#include <iostream>

using namespace std;
int redeem(int n)
{
    int x;
	if (n >= 7)
	{
		x = n/7;
		return (x + redeem(x+(n % 7)));
	}
	else
	{
		return 0;
	}
}



using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << (n + redeem(n));
	return 0;
}




