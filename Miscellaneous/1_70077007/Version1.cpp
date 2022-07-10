#include<iostream>

using namespace std;
void populate(int num[15])
{
	int* ptr = &num[0];
	int arraysize = 15;
	for (int i = 0; i < 15; i++)
	{
		int change = 0;
		if (i == 0 || i % 7 == 0) {
			for (int j = i; j < i + 7 && j < arraysize; j++) //have to set arraysize limit to prevent stack around array corrupted error
			{
				if (j == 0 || j % 7 == 0)
				{
					*(ptr + j) = 7;
					change = 7;
				}
				else
				{
					if (change == 7)
					{
						*(ptr + j) = 0;
						*(ptr + j + 1) = 0;
						change = 0;
						j++;
					}
					else
					{
						*(ptr + j) = 7;
						*(ptr + j + 1) = 7;
						change = 7;
						j++;
					}
				}
			}
		}
	}
}

void display(int num[15])
{
	for (int i = 0; i < 15; i++) cout << num[i];
}
int main()
{
	int num[15];
	populate(num);
	display(num);
}