#include <stdio.h>
#include <math.h>

void getValues();

double getBValue();

double getAValue(double b);

const float z  = -4.1;
const float y = -0.6;


int main(){

    getValues();
}

void getValues(){

    double a,b;

    b = getBValue();

    printf("%lf",getAValue(b));

}

double getBValue(){

    return ((z + pow(y,2)) * (1 / tan(z)));

}

double getAValue(double b ){
    return ( cos(z) - sin(b * pow(y,2)));
}