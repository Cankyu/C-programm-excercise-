


#include <stdio.h>
#include <math.h>


int produkt(int *input, size_t len){
    int result= 1;
    for(int i=0; i<len; ++i){
        result *= input[i];
    }  
    return result;
}

int max(int *input, size_t len){
    int result = input[0];
    for(int i=1; i<len; ++i){
       
        if (result < input[i]){
            result = input[i];
        }

    }
    return result;
}


double mittelwert (int *input, size_t len){
    int result= 0;

    for(int i=0; i<len; ++i){
       result += input[i];
       
       
    }  
    return (double) result/len;
}

int main () {

    int input[5];
   
    for(int i = 0; i<5; ++i) {
        printf("Geben Sie die %d Zahl ein: ", i+1);
        scanf("%d", (input+i));
        printf("Eingegeben: %d\n", *(input+i));
    }

    int result = produkt(input, 5);
    printf("Produkt: %d ", result);

    result = max(input, 5);
    printf("Maximum: %d ", result);

    double result_M = mittelwert(input , 5);
    printf("Mittelwert: %.2lf", result_M);
}
