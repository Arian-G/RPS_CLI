/* Rock Paper Scissors CLI | Arian Goudar */
/* rps.c */

#include "rps.h"

int main(int argc, char * argv[])
{
    /*
    srand(time(NULL));
    print_menu();

    int i;
    int round_total = 0;
    int game_counter = 0;
    int score = 0;
    int continue_choice = false;
    leaderboard_pt head_pt = NULL;
    do
    {
        round_total = 0;
        game_counter++;

        print_game_header(game_counter, head_pt);
        get_game_rounds(&round_total);

        for(i = 0; i < round_total; ++i)
        {
            rock_paper_scissors(head_pt);
        }

        prompt_continue(&continue_choice);
    }
    while(continue_choice != true);
    */

    srand(time(NULL));

    printf("\nRock Paper Scissors CLI | Arian Goudar\n");
    //simulate_load();
    sleep(1);
    
    profile user = {};
    get_username(user.username);

    int i;
    do
    {
        user.game_counter++;
        get_main_menu(&user.main_choice);

        switch(user.main_choice)
        {
            case SINGLEPLAYER :
            {
                get_game_rounds(&user.round_total);
                for(i = 0; i < user.round_total; i++)
                {
                    rock_paper_scissors(user.game_counter, &user.curr_score, i, user.round_total, user.username);
                }
                break;
            }

            case MULTIPLAYER :
            {
                // TODO
                break;
            }

            case VIEW_INSTRUCTIONS :
            {
                print_instructions();
                break;
            }

            case VIEW_LEADERBOARD :
            {
                // TODO
                break;
            }

            case LOAD_LEADERBOARD :
            {
                // TODO
                break;
            }

            case SAVE_PROFILE :
            {
                // TODO
                break;
            }

            case VIEW_ABOUT :
            {
                print_about();
                break;
            }

            case EXIT_GAME :
            {
                // TODO
                break;
            }

            default :
            {
                fprintf(stderr, RED"\n  [ERROR]. Value out of range. Exiting...\n\n"COLOR_RESET);
                exit(EXIT_FAILURE);
            }
        }

    }
    while(user.main_choice != EXIT_GAME);

    printf("\n\nThank you for playing, |%s|\n\n", user.username);

    return EXIT_SUCCESS;
}