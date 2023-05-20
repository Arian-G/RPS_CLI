/* Rock Paper Scissors CLI | Arian Goudar */
/* rps.h */

#ifndef _RPS_H
#define _RPS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#include "leaderboard_lib.h"
#include "print_lib.h"
#include "game_lib.h"
#include "input_lib.h"

#define USERNAME_LENGTH 16

enum main_menu
{
    SINGLEPLAYER = 1, MULTIPLAYER, 
    VIEW_INSTRUCTIONS, VIEW_LEADERBOARD, 
    LOAD_LEADERBOARD, SAVE_PROFILE,
    VIEW_ABOUT, EXIT_GAME
};
typedef enum main_menu main_menu;

struct profile
{
    int round_total;
    int game_counter;
    int curr_score;
    int main_choice;
    char username[USERNAME_LENGTH];
};
typedef struct profile profile;

#endif
