#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int coin[] = {1, 10, 5, 25};
    int amount = 73;
    int totalCoin = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (coin[j] < coin[j + 1])
            {
                int temp = coin[j];
                coin[j] = coin[j + 1];
                coin[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (coin[i] <= amount)
        {
            totalCoin += amount / coin[i];
            amount = amount % coin[i];
        }
    }


    cout << totalCoin;
}