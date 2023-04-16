



#include <stdio.h>
#include <math.h>

double fahrenheit(double c) { 
   double b; 
    if (c < - 273.15) {
        printf ("fehlerhafte Eingabe");
        b = -1;
    }
    
    else {
    
        b = c*(9.0/5)+32;
    }
    
    return b;
}
    
int main()
{
    double c ;
    
    printf("Temperatur Eingabe");
    
    scanf( "%lf" , &c);
    double result = fahrenheit(c); 
    printf("Ergebnis: %.2lf " , result);
    return 0;
}
