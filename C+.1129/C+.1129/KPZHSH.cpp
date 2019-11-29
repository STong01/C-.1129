#include <iostream>
using namespace std;

int main()
{
	int n;
	int tmp;
	while (cin >> n)
	{
		if (n = 0)
			continue;
		else
		{
			tmp = n / 2;
			cout << tmp << endl;
		}
	}

	system("pause");
	return 0;
}