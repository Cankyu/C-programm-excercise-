#include "comp.h"

void winning_algorithm(int *matches_leaft){
    bool hit = false;
    for(int k = MIN_TAKE; k <= MAX_TAKE; ++k) {     
        if ((*matches_leaft - k) % (MAX_TAKE + 1U) == 1U){
            if ((*matches_leaft - k) >= 1U){
                *matches_leaft -= k;
                comp_printf("Decrementing by k: %d\n", k);
                hit = true;
                break;
            }
            else{
                comp_printf("Not enough matches leaft to find a magic number. Giving up.\n");
                break;
            }
        }
    }
    if (!hit && *matches_leaft > 1U){
        comp_printf("Couldn't find a magic number. Falling back to default decrement by 1.\n");
        *matches_leaft -= 1U;
    }

    comp_printf("New matches count %d\n", *matches_leaft);
}

bool computer_round(int *matches_leaft){
    winning_algorithm(matches_leaft);
    if (determine_winner(matches_leaft)){
        comp_printf("%s\n", HURRAY(COMPUTER));
        return true;
    }
    return false;
}
