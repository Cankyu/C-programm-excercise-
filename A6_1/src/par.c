#include "par.h"

bool evaluate_match_count(int match_count){
    if (match_count <= MAX_TAKE && match_count >= MIN_TAKE){
        return true;
    }
    else{
        return false;
    }
}

int get_rand(void){
    return (rand() % 4U) + 1U; // Returns a pseudo-random integer between 1 and 5 (hopefully :) )
}

bool determine_winner(int *matches_leaft){
    if (*matches_leaft == MIN_TAKE){
        return true;
    }
    return false;
}