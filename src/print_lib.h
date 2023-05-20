/* Rock Paper Scissors CLI | Arian Goudar */
/* print_lib.h */

#ifndef _PRINT_LIB_H
#define _PRINT_LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "rps.h"
#include "input_lib.h"
#include "game_lib.h"
#include "leaderboard_lib.h"

// CLI Color Codes:
#define RED             "\x1b[31m"
#define GREEN           "\x1b[32m"
#define YELLOW          "\x1b[33m"
#define BLUE            "\x1b[34m"
#define MAGENTA         "\x1b[35m"
#define CYAN            "\x1b[36m"
#define COLOR_RESET     "\x1b[0m"

enum ASCII
{
    ROCK = 1, PAPER, SCISSORS,
    ROCK_ROCK, PAPER_PAPER, SCISSORS_SCISSORS,

    ROCK_SCISSORS, PAPER_ROCK, SCISSORS_PAPER,

    ROCK_PAPER, PAPER_SCISSORS, SCISSORS_ROCK
};
typedef enum ASCII ASCII;

#pragma region Function Signatures and Desc.
void simulate_load();
void print_instructions();
void print_about();
void print_ASCII(ASCII);
void print_game(int, int, int, int, int, char *);
#pragma endregion

#endif