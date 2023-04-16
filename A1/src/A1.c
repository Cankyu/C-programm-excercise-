#include <stdio.h>
#include <math.h>

#define PI M_PI 

double kreisumfang(double r){
    double u= 2*PI*r;
    return u;
}


double kreisflaeche(double r){
    double a = PI*pow(r, 2);
    return a;
}

int main(){

    double r;

    printf("Geben Sie ein Radius ein: ");
    scanf("%lf", &r);

    double result_1 = kreisumfang(r); 
    printf("Kreisumfang: %.2lf " , result_1);

    double result_2 = kreisflaeche(r); 
    printf("Kreisfläche: %.2lf " , result_2);

return 0;
}