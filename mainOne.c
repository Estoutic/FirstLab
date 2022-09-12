#include <stdio.h>
#include <math.h>

void checkArea();

int main(){

    checkArea();
}

void checkArea(){

    double a,b,c;

    printf("Please enter frist side value \n");
    scanf("%lf",&a);
    
    printf("Please enter second side value \n");
    scanf("%lf",&b);
    
    
    printf("Please enter third side value \n");
    scanf("%lf",&c);
    
    if((a + b) <= c || (a + c) <= b || (c+ b) <= a){
        printf("incorrect values please try again \n");
        checkArea();
    }
    else{
        double semiPerimeter = (a + b + c)/2;
        double result = (2 * sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c)))/a;
        printf("result is %lf\n",result);
    }

}