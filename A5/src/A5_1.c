
#include <stdio.h>
#include <math.h>
#define ARRAY_LENGTH(array) (sizeof((array))/sizeof((array)[0]))
int input[5];



int produkt( void){
    int result= 1;
    for(int i=0; i<ARRAY_LENGTH(input); ++i){
        result *= input[i];
    }   
    return result;
}

int max(void){
    int result = input[0];
    for(int i=1; i<ARRAY_LENGTH(input); ++i){
        
        if (result < input[i]){
            result = input[i];
        }

    }
    return result;
}


double mittelwert (void){
    int result= 0;

    for(int i=0; i<ARRAY_LENGTH(input); ++i){
       result += input[i];
       
       
    }   
    return (double) result/ARRAY_LENGTH(input);
}

int main () {

    //int input[5]; 
    
    for(int i = 0; i<5; ++i) {
        printf("Geben Sie die %d Zahl ein: ", i+1);
        scanf("%d", (input+i));
        printf("Eingegeben: %d\n", *(input+i));
    } 

    int result = produkt(); 
    printf("Produkt: %d ", result);

    result = max(); 
    printf("Maximum: %d ", result);

    double result_M = mittelwert();
    printf("Mittelwert: %.2lf", result_M);
}