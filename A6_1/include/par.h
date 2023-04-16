#ifndef PAR_H
#define PAR_H
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define MATCHES         20U
#define MAX_LOOP        3U
#define MIN_TAKE        1U
#define MAX_TAKE        5U
#define HURRAY(p)       "HURRAY! Player " p " won!"
#define COMPUTER        "[COMPUTER] "
#define PLAYER          "[PLAYER]   "
#define play_printf(...) printf(PLAYER __VA_ARGS__)
#define comp_printf(...) printf(COMPUTER __VA_ARGS__)

bool evaluate_match_count(int match_count);
int get_rand(void);
bool determine_winner(int *matches_leaft);
#endif