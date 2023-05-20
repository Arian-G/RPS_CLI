/* Rock Paper Scissors CLI | Arian Goudar */
/* game_lib.c */

#include "game_lib.h"

void calc_round_winner(int user_rps, int comp_rps, int * current_score, char * username)
{
    switch((comp_rps - 1) - (user_rps - 1) % 3)
    {
        case 0 :
        {
            printf("\n\n");
            printf(" ---------------------------------------\n");
            printf(" ----------------- DRAW ----------------\n");
            printf(" ---------------------------------------\n");
            break;
        }
        
        case 1 :
        {
            printf("\n\n");
            printf(MAGENTA);
            printf(" ---------------------------------------\n");
            printf(" ------------ COMPUTER WINS ------------\n");
            printf(" ---------------------------------------\n");
            printf(COLOR_RESET);
            break;            
        }

        case 2 :
        {
            printf("\n\n");
            printf(MAGENTA);
            printf(" ---------------------------------------\n");
            printf(" ------------- %s WINS -------------\n", toupper(username));
            printf(" ---------------------------------------\n");
            printf(COLOR_RESET);
            (*current_score)++;
            break;
        }

        default :
        {
            fprintf(stderr, RED"\n  [ERROR]. Value out of range. Exiting...\n\n"COLOR_RESET);
            exit(EXIT_FAILURE);
        }
    }
    sleep(4);
}

void rock_paper_scissors(int game_counter, int * current_score, int curr_round, int round_total, char * username)
{
    int comp_rps = rand() % (3 + 1 - 1) + 1;
    int user_rps = 0;
    get_rps_choice(&user_rps, curr_round, round_total);

    print_game(user_rps, comp_rps, game_counter, curr_round, round_total, username);
    calc_round_winner(user_rps, comp_rps, current_score, username);
    sleep(2);
}