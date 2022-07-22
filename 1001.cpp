#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    vector<long long> a;
    long long n;

    while (scanf("%lld", &n) != EOF)
        a.push_back(n);
    for (int i = a.size() - 1; i >= 0; i--)
        printf("%4lf\n", sqrt(a[i]));

    return 0;
}