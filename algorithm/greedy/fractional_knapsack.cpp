#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    float val[n] = {60, 100, 120};
    float wt[n] = {10, 20, 30};
    int capacity = 50;
    float total = 0;
    float ratio[n];

    for (int i = 0; i < n; i++)
    {
        ratio[i] = val[i] / wt[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ratio[j] < ratio[j + 1])
            {
                float temp1 = ratio[j + 1];
                ratio[j + 1] = ratio[j];
                ratio[j] = temp1;

                float temp2 = val[j + 1];
                val[j + 1] = val[j];
                val[j] = temp2;

                float temp3 = wt[j + 1];
                wt[j + 1] = wt[j];
                wt[j] = temp3;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (capacity == 0)
        {
            break;
        }
        if (wt[i] <= capacity)
        {
            total += val[i];
            capacity -= wt[i];
        }
        else
        {
            float fraction = capacity / wt[i];
            total += val[i] * fraction;
            capacity = 0;
        }
    }

    cout << total;
}