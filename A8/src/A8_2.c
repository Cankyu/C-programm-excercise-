

#include <stdio.h>
#include <stdint.h>  
#include <stdlib.h> 
#include <math.h>

#define MAX_POINTS  5U
#define X           0U
#define Y           1U

size_t get_index(double *xa, float stueztstellen[6][2]){
    size_t index = 0U;
    for ( ; index<=MAX_POINTS; ++index){
        printf("Comparing %lf < %lf\r\n", *xa, stueztstellen [index][X]);
        if (stuetzstellen [index][X]-*xa > 0.001f){
            index--;
            printf("Closest smaller sampling point at index %d: xi = %lf yi = %lf\r\n", 
                                        index, stueztstellen[index][X], stueztstellen[index][Y]);
            break;
        }
    }
    return index;
}






double interpoliert(double xa) { 
    static float stuetzstellen [6][2] = {
    {0.0f, 0.1f},
    {0.1f, 0.2f},
    {0.3f, 0.25f},
    {0.7f, 1.1f},
    {0.8f, 1.2f},
    {1.0f, 1.25f}

}
    
    
    
    
  
        
        y_a=y(i)+x(a)-x(i)*(y(i+1)-y(i))/(x(i+1)-x(i))
    
    
    
    
    return y_a;
}
    
int main()
{
    double xa;
    
    printf("Geben Sie Werte von 0 bis 1 für xa ein");
    scanf( "%lf" , &xa);
    if ((xa < 0.0f) || (xa > 1.0f)){
        return 0;
    }

    double result = interpoliert(x); 
    printf("Ergebnis: %.2lf " , result);
    return 0;
}
