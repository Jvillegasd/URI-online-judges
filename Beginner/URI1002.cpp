#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
    double r;
    scanf("%lf", &r);
    printf("A=%.4lf\n", 3.14159 * pow(r, 2));
    return 0;
}