/* Rock Paper Scissors CLI | Arian Goudar */
/* input_lib.c */

#include "input_lib.h"

void get_username(char * username)
{
    // TODO:
    //      Include password field and hash table.
    int range = USERNAME_LENGTH;

    printf("\n\n");
    printf("|=================| CREATE PROFILE |=================|\n");
    printf("  In order to use multiplayer, save progress,         \n");
    printf("  and view the leaderboard you must create a          \n");
    printf("  user profile.                                       \n");
    printf("                                                      \n");
    printf("  Please enter a username [max 15 chars]:             \n");
    printf("  > ");
    char_input_handler(username, range);
    printf("                                                      \n");
    printf("  Hello, |%s|                                         \n", username);

    sleep(1);
}

void get_main_menu(int * menu_choice)
{
    int range = 8;

    printf("\n\n");
    printf("|==============================================|\n");
    printf("|             ROCK PAPER SCISSORS              |\n");
    printf("|==============================================|\n");
    printf("|                                              |\n");
    printf("| 1). Singleplayer                             |\n");
    printf("| 2). Multiplayer                              |\n");
    printf("| 3). View Instructions                        |\n");
    printf("| 4). View Leaderboard                         |\n");
    printf("| 5). Load Leaderboard                         |\n");
    printf("| 6). Save Profile                             |\n");
    printf("| 7). View About                               |\n");
    printf("| 8). Exit Game                                |\n");
    printf("|                                              |\n");
    printf("|==============================================|\n");
    printf("                                                \n");
    printf("  Please pick an option:                        \n");
    printf("  > ");
    int_input_handler(menu_choice, range);

    sleep(1);
}

void get_game_rounds(int * round_total)
{
    int range = 3;

    printf("\n\n");
    printf("|====================| ROUNDS |====================|\n");
    printf("  How many rounds would you like to play?           \n");
    printf("                                                    \n");
    printf("  1).  Best 1 out of 1                              \n");
    printf("  2).  Best 2 out of 3                              \n");
    printf("  3).  Best 3 out of 5                              \n");
    printf("                                                    \n");
    printf("  Please pick an option:                            \n");
    printf("  > ");
    int user_choice = 0;
    int_input_handler(&user_choice, range);

    switch(user_choice)
    {
        case 1 :
        {
            (*round_total) = 1;
            break;
        }

        case 2 :
        {
            (*round_total) = 3;
            break;
        }

        case 3 :
        {
            (*round_total) = 5;
            break;
        }

        default :
        {
            fprintf(stderr, RED"\n  [ERROR]. Value out of range. Exiting...\n\n"COLOR_RESET);
            exit(EXIT_FAILURE);
        }
    }

    sleep(1);
}

void prompt_continue(int * continue_choice)
{
    int range = 2;

    printf("\n\n");
    printf("|===================| NEW GAME |===================|\n");
    printf("  Do you want to start a new game?                  \n");
    printf("                                                    \n");
    printf("  1).  Yes                                          \n");
    printf("  2).  No                                           \n");
    printf("                                                    \n");
    printf("  Please pick an option:                            \n");
    printf("  > ");
    int_input_handler(continue_choice, range);

    sleep(1);
}

void get_rps_choice(int * rps_choice, int curr_round, int round_total)
{
    int range = 3;

    printf("\n\n");
    printf("|=================| CHOOSE A HAND |=================|\n");
    printf("|================| ROUND    %d OF %d |================|\n", curr_round + 1, round_total);
    printf("  Which hand do you want?                            \n");
    printf("                                                     \n");
    printf("  1).  Rock                                          \n");
    print_ASCII(ROCK);
    printf("\n");
    printf("  2).  Paper                                         \n");
    print_ASCII(PAPER);
    printf("\n");
    printf("  3).  Scissors                                      \n");
    print_ASCII(SCISSORS);
    printf("\n");
    printf("                                                     \n");
    printf("  Please pick an option:                             \n");
    printf("  > ");
    int_input_handler(rps_choice, range);

    printf("\n\n");
    printf("  You chose:                                         \n");
    printf("                                                     \n");
    print_ASCII((ASCII)(*rps_choice));

    sleep(1);
}

void int_input_handler(int * option_choice, int range)
{
    char user_input[STDIN_BUFFER] = {""};
    fgets(user_input, sizeof(user_input), stdin);
    sscanf(user_input, "%d", option_choice);

    while((*option_choice) < 1 || (*option_choice) > range)
    {
        printf(RED"\n  [ERROR]. Please pick an option between 1 and %d: \n"COLOR_RESET, range);
        printf("  > ");
        int_input_handler(option_choice, range);
    }
}

void char_input_handler(char * user_string, int range)
{
    // TODO
    //      Fix error input. Need to reset buffer?
    char user_input[STDIN_BUFFER] = {""};
    fgets(user_input, sizeof(user_input), stdin);
    while(strlen(user_input) < 1 || strlen(user_input) > range)
    {
        printf(RED"\n  [ERROR]. Please enter a string between 1 and %d chars: \n"COLOR_RESET, range);
        printf("  > ");
        char_input_handler(user_string, range);
    }

    char * token = strtok(user_input, "\n");
    strcpy(user_string, token);
}