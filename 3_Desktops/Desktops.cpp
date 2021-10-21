#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, Ans;
	string stdID = "aeiouAEIOU";
	vector<char> prodID;
	cin >> N;
	Ans = N;
	for (int i = 0; i < N; i++)
	{
		char temp;
		cin >> temp;
		prodID.insert(prodID.end(), temp);
	}
	for (int i = 0; i < N; i++)if (stdID.find(prodID[i]) != std::string::npos) Ans--;
	cout << Ans;
}