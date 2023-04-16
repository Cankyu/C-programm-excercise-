#include <stdio.h>
#include "player.h"

void user_input(int *matches_leaft){
    int matches;
    int max_count = 0U;
    while (MAX_LOOP - max_count > 0U){
        play_printf("How many matches do you wanna take? (%d leaft): ", *matches_leaft);
        scanf("%d", &matches);
        if (!evaluate_match_count(matches)){
            play_printf("Invalid Match Count. Try again.\n");
            ++max_count;
            continue;
        }
        if (*matches_leaft - matches >= 1U){
            *matches_leaft -= matches;
            play_printf("New matches count %d\n", *matches_leaft);
            break;
        }
        else{
            play_printf("Not enough matches available, please choose another number.\n");
        }
        ++max_count;
    }
}

bool player_round(int *matches_leaft){
    user_input(matches_leaft);
    if (determine_winner(matches_leaft)){
        play_printf("%s\n", HURRAY(PLAYER));
        return true;
    }
    return false;
}