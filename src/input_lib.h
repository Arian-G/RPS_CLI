/* Rock Paper Scissors CLI | Arian Goudar */
/* input_lib.h */

#ifndef _INPUT_LIB_H
#define _INPUT_LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>

#include "rps.h"
#include "print_lib.h"
#include "game_lib.h"
#include "leaderboard_lib.h"

#define STDIN_BUFFER 100

#pragma region Function Signatures and Desc.
void get_username(char *);
void get_main_menu(int *);
void get_game_rounds(int *);
void prompt_continue(int *);
void get_rps_choice(int *, int, int);
void int_input_handler(int *, int);
void char_input_handler(char *, int);
#pragma endregion

#endif