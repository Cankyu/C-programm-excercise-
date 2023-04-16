#include <stdio.h>
#include <math.h>
#include "player.h"
#include "comp.h"
#include "par.h"

int main(){
    int matches_leaft = MATCHES;
    //player always starts first
    while(matches_leaft > 1){
        if (player_round(&matches_leaft) || computer_round(&matches_leaft)){
            break;
        }
    }
}