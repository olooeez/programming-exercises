#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;

    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    printf("%.3f\n", d);
    printf("%.9f\n", e);
    return 0;
}
