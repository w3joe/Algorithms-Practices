#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Checker {
	bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) {
		if (a.first != b.first)return a.first < b.first;
		return a.second > b.second;
	}
};
int main()

{
	int num;
	vector<int> list;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int temp;
		cin >> temp;
		list.insert(list.end(), temp);
	}
	list.insert(list.end(), 0);
	vector< pair <int, int> > desc;
	int temp = 0, count = 1;
	for (int i = 0; i < list.size(); i++)
	{
		if (i == 0)temp = list[i];
		else
		{
			if (list[i] != temp)
			{
				desc.push_back(make_pair(count, temp));
				count = 1;
				temp = list[i];
			}
			else count++;
		}
	}
	Checker checker;
	sort(desc.rbegin(), desc.rend(), checker);
	for (int i = 0; i < desc.size(); i++)
	{
		for (int j = 0; j < desc[i].first; j++)cout << desc[i].second << " ";
	}
}

