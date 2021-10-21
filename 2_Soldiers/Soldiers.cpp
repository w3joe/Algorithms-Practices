#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, Q, K, Linit, Rinit;
    vector<int> L, R, soldiers;
    cin >> N >> Q >> K;
    for (int i = 0; i < Q; i++)
    {
        cin >> Linit >> Rinit;
        L.insert(L.end(), Linit);
        R.insert(R.end(), Rinit);
    }
    for (int i = 1; i < N+1; i++)soldiers.insert(soldiers.end(), i);

    for (int i = 0; i < Q; i++) {
        int Lth = L[i]-1, Rth = R[i]-1;
        while (Lth < Rth) {
            // swap arr[start] and arr[end]
            int temp = soldiers[Lth];
            soldiers[Lth] = soldiers[Rth];
            soldiers[Rth] = temp;
            Lth++;
            Rth--;
        }
    }
    std::cout << soldiers[K-1];
}

