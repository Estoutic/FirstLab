#include <stdio.h>
#include <math.h>

int main(){

    int y = 2, z =4;
    double t = sin(2 + z), x;

    x = 6 * pow(t,2) - (z + 1)/ pow(y,2);
    printf("result is %lf",x);
}
