


#include <stdio.h>
#include <stdint.h>  
#include <stdlib.h> 
#include <math.h>

#define MAX_POINTS  5U
#define U2          2U
#define T           1U

size_t get_index(double *xa, float samp_points[6][2]){
    size_t index = 0U;
    for ( ; index<=MAX_POINTS; ++index){
        printf("Comparing %lf < %lf\r\n", *xa, samp_points[index][U2]);
        if (samp_points[index][U2]-*xa > 0.001f){
            index--;
            printf("Closest smaller sampling point at index %d: xi = %lf yi = %lf\r\n", 
                                        index, samp_points[index][U2], samp_points[index][T]);
            break;
        }
    }
    return index;
}

double lin_interp(double xa){
    unsigned static float sampling_points[6][2] = {
        {-30.0f, -20.0f },
        {-10.0f,  0.0f },
        {10.0f, 20.0f},
        {30.0f, 40.0f},
        {50.0f, 60.0f},
        {70.0f, 80.0f},
      
        
        

    };
    size_t index = get_index(&xa, sampling_points);
    double y_a = sampling_points[index][T] + 
                            (xa - sampling_points[index][U2]) * 
                            ((sampling_points[index+1U][T] - sampling_points[index][T]) 
                            / (sampling_points[index+1U][U2] - sampling_points[index][U2]));
    return y_a;
}

int main(){
    double xa;
    printf("Enter a value between -30.0 and 100.0 xa = ");
    scanf("%lf", &xa);
    if (fabs(xa) > -30.0f ||  (xa < 100.0f)){
        printf("Value out of range.\r\n");
        return 0;
    }
    printf("y(x_a=%lf) = %lf\r\n", xa, lin_interp(xa));
    return 0;
}