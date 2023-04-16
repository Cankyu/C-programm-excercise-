#include <stdio.h>
#include <math.h>
#define PI M_PI
#define SOME_TEXT "THIS IS SOME USELESS TEXT"

#define UMF(r) 2U * PI * r
#define FLA(r) PI * r * r

/*double kreisumfang(double r){
    double u = 2 * PI * r;
    return u;
}

double kreisflaeche(double r){
    double a = PI * pow(r, 2);
    return a;
}*/

int main(){
    double r;
#ifdef SOME_TEXT
    printf("%s\n", SOME_TEXT);
#endif

    printf("Geben Sie ein Radius ein: ");
    scanf("%lf", &r);

    //double result_1 = kreisumfang(r); 
    double result_1 = UMF(r);
    printf("Kreisumfang: %.2lf " , result_1);

    //double result_2 = kreisflaeche(r); 
    double result_2 = FLA(r);
    printf("Kreisfläche: %.2lf\n" , result_2);

    return 0;
}