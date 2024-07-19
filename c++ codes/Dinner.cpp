#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 0)
    {
        cout << "error";
        return -1;
    }
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int arrangement(int n, int r)
{
    if (r < 0 || n < 0 || r > n)
    {
        cout << "unable to arrange" << endl;
        return -1;
    }
    int factN = factorial(n);
    int factNR = factorial(n - r);
    if (factN == -1 || factNR == -1)
    {
        return -1;
    }
    int per = factN / factNR;
    return per;
}

int main()
{
    int T; // number of test cases
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int N, R;
        cin >> N >> R;
        int result = arrangement(N, R);
        if (result != -1)
        {
            cout << result << endl;
        }
    }
    return 0;
}
