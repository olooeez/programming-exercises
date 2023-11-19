#include <stdio.h>
#include <cstdlib>

void update(int *a, int *b)
{
    int aux = *a;

    *a = *a + *b;
    *b = std::abs(aux - *b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
