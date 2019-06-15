#include <iostream>
#include <cstdio>
using namespace std;

void printResult(int i, long l, char c, float f, double d) {
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%f\n", f);
    printf("%lf\n", d);
}

int main() {

    int i;
    long l;
    char c;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    printResult(i, l, c, f, d);

    return 0;
}
