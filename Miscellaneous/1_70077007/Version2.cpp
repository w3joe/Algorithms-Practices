#include<iostream>
void populate(int a[15])
{
	int* p = &a[0];
	for (int i = 0; i < 8; i++)
	{
		if (i == 0) *(p + i) = 7;
		else if( i == 1) *(p + i) = 0;
		else if (i > 1 && i < 4) *(p + i) = *(p + 4 - i - 1);
		else *(p + i) = *(p + 8 - i - 1);
	}
	for (int i = 7; i < 15; i++) *(p + i) = *(p + i - 7);
}
void display(int a[15])
{
	for (int i = 0; i < 15; i++) std::cout << a[i];
}
int main()
{
	int a[15];
	populate(a);
	display(a);
}