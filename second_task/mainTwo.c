#include <stdio.h>
#include <math.h>

void checkArea();

double firstLine(double x);

double secondLine(double x);

int main(){

    checkArea();
}

void checkArea(){

    double x,y;

    printf("Please enter x value \n");
    scanf("%lf",&x);
    
    printf("Please enter y value \n");
    scanf("%lf",&y);  

    if( secondLine(x)  < y < firstLine(x)){
        printf("coordinate in area");
    }
    else{
        printf("coordinate not in area");
    }

}

double firstLine(double x){
    return x + 1;
}

double secondLine(double x){
    return x - 1;
}
