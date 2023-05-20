/* Rock Paper Scissors CLI | Arian Goudar */
/* game_lib.h */

#ifndef _GAME_LIB_H
#define _GAME_LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>

#include "rps.h"
#include "print_lib.h"
#include "leaderboard_lib.h"
#include "input_lib.h"

#pragma region Function Signatures and Desc.
void calc_round_winner(int, int, int *, char *);
void rock_paper_scissors(int, int *, int, int, char *);
#pragma endregion

#endif