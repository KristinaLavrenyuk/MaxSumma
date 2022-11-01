
#include <iostream>
using namespace std;

int main()
{
    int n, a, sum, maxsum = 0, maxnum = 0, b, c;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        cin >> a;
        b = a;
        while (a > 0)
        {
            c = a % 10;
            a /= 10;
            sum += c;
        }
        if (maxsum < sum)
        {
            maxsum = sum;
            maxnum = b;
        }
    }
    cout << "MaxNum: " << maxnum << endl << "MaxSum: " << maxsum << endl;
    system("pause");
}
