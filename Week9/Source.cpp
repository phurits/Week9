#include<iostream>
using namespace std;
int wordlen(char* ptr);

int main()
{
	char a[9999];
	int n = wordlen(&a[0]);
	int i = 0, j = 0;
	cin >> a;
	for (j = 97; j <= 122; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] == j)
			{
				cout << a[i] << " ";
				break;
			}
		}
	}
	cout << endl;
	for (j = 65; j <= 90; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] == j)
			{
				cout << a[i] << " ";
				break;
			}
		}
	}

	return 0;
}

int wordlen(char* ptr)
{
	int b = 0;
	while (ptr[b] != '\0')
	{
		b++;
	}
	return b;
}