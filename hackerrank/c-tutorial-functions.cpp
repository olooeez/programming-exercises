#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

bool descend(const int i, const int j) { return (i > j); }
int max_of_four(const int, const int, const int, const int);

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

int max_of_four(const int a, const int b, const int c, const int d)
{
    int arr[] = {a, b, c, d};

    std::vector<int> vec(arr, arr + 4);

    std::sort(vec.begin(), vec.end(), descend);

    return vec.front();
}
