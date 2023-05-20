/* Rock Paper Scissors CLI | Arian Goudar */
/* print_lib.c */

#include "print_lib.h"

void simulate_load()
{
    int progress = 0;
    int i = 0;
    for (i = 0; i < 5; ++i)
    {
        progress += rand() % 20;
        printf("\rLoading [%d]", progress);
        fflush(stdout);
        sleep(1);
    }
    printf("\rLoading [Complete]");
    printf("\n\n");
}

void print_instructions()
{
    printf("\n\n");
    printf("|===================| INSTRUCTIONS |===================|\n");
    printf("  Rock Paper Scissors is a game based on chance.        \n");
    printf("  There are 4 potential outcomes:                       \n");
    printf("                                                        \n");
    printf("  1).  Rock beats scissors                              \n");
    print_ASCII(ROCK_SCISSORS);
    printf("\n");
    printf("  2).  Scissors beats paper                             \n");
    print_ASCII(SCISSORS_PAPER);
    printf("\n");
    printf("  3).  Paper beats rock                                 \n");
    print_ASCII(PAPER_ROCK);
    printf("\n");
    printf("  4).  Tie                                              \n");
    print_ASCII(ROCK_ROCK);
    printf("\n");
    printf("                                                        \n");

    printf("  Press [Enter] to continue...\n");
    while(getchar() != '\n');
}

void print_about()
{
    printf("\n\n");
    printf("|=====================| ABOUT |=====================|\n");
    printf("  This game was created by Arian Goudar.             \n");
    printf("  It is a personal project built to practice         \n");
    printf("  file handling, networking, algorithms and          \n");
    printf("  data structures, and the C language as a whole.    \n");
    printf("                                                     \n");

    printf("  Press [Enter] to continue...\n");
    while(getchar() != '\n');
}

void print_ASCII(ASCII code)
{
    switch(code)
    {
        case ROCK :
        {
            printf(YELLOW);
            printf("    _______     \n");
            printf("---'   ____)    \n");
            printf("      (_____)   \n");
            printf("      (_____)   \n");
            printf("      (____)    \n");
            printf("---.__(___)     \n");
            printf(COLOR_RESET);
            break;
        }

        case ROCK_ROCK :
        {
            printf(YELLOW);
            printf("    _______                  _______    \n");
            printf("---'   ____)                (____   '---\n");
            printf("      (_____)              (_____)      \n");
            printf("      (_____)              (_____)      \n");
            printf("      (____)                (____)      \n");
            printf("---.__(___)                  (___)__.---\n");
            printf(COLOR_RESET);
            break;
        }

        case ROCK_PAPER :
        {
            printf(YELLOW);
            printf("    _______                  _______    \n");
            printf("---'   ____)            ____(____   '---\n");
            printf("      (_____)          (______          \n");
            printf("      (_____)         (_______          \n");
            printf("      (____)           (_______         \n");
            printf("---.__(___)              (__________.---\n");
            printf(COLOR_RESET);
            break;
        }

        case ROCK_SCISSORS :
        {
            printf(YELLOW);
            printf("    _______                  _______    \n");
            printf("---'   ____)            ____(____   '---\n");
            printf("      (_____)          (______          \n");
            printf("      (_____)         (_______          \n");
            printf("      (____)                (____)      \n");
            printf("---.__(___)                  (___)__.---\n");
            printf(COLOR_RESET);
            break;
        }

        case PAPER :
        {
            printf(YELLOW);
            printf("    _______        \n");
            printf("---'   ____)____   \n");
            printf("          ______)  \n");
            printf("          _______) \n");
            printf("         _______)  \n");
            printf("---.__________)    \n");
            printf(COLOR_RESET);
            break;
        }

        case PAPER_PAPER :
        {
            printf(YELLOW);
            printf("    _______                  _______    \n");
            printf("---'   ____)____        ____(____   '---\n");
            printf("          ______)      (______          \n");
            printf("          _______)    (_______          \n");
            printf("         _______)      (_______         \n");
            printf("---.__________)          (__________.---\n");
            printf(COLOR_RESET);
            break;
        }

        case PAPER_ROCK :
        {
            printf(YELLOW);
            printf("    _______                  _______    \n");
            printf("---'   ____)____            (____   '---\n");
            printf("          ______)          (_____)      \n");
            printf("          _______)         (_____)      \n");
            printf("         _______)           (____)      \n");
            printf("---.__________)              (___)__.---\n");
            printf(COLOR_RESET);
            break;
        }

        case PAPER_SCISSORS :
        {
            printf(YELLOW);
            printf("    _______                  _______    \n");
            printf("---'   ____)____        ____(____   '---\n");
            printf("          ______)      (______          \n");
            printf("          _______)    (__________       \n");
            printf("         _______)           (____)      \n");
            printf("---.__________)              (___)__.---\n");
            printf(COLOR_RESET);
            break;
        }

        case SCISSORS :
        {
            printf(YELLOW);
            printf("    _______        \n");
            printf("---'   ____)____   \n");
            printf("          ______)  \n");
            printf("       __________) \n");
            printf("      (____)       \n");
            printf("---.__(___)        \n");
            printf(COLOR_RESET);
            break;
        }

        case SCISSORS_SCISSORS :
        {
            printf(YELLOW);
            printf("    _______                  _______    \n");
            printf("---'   ____)____        ____(____   '---\n");
            printf("          ______)      (______          \n");
            printf("       __________)    (__________       \n");
            printf("      (____)                (____)      \n");
            printf("---.__(___)                  (___)__.---\n");
            printf(COLOR_RESET);
            break;
        }

        case SCISSORS_ROCK :
        {
            printf(YELLOW);
            printf("    _______                  _______    \n");
            printf("---'   ____)____            (____   '---\n");
            printf("          ______)          (_____)      \n");
            printf("       __________)         (_____)      \n");
            printf("      (____)                (____)      \n");
            printf("---.__(___)                  (___)__.---\n");
            printf(COLOR_RESET);
            break;
        }

        case SCISSORS_PAPER :
        {
            printf(YELLOW);
            printf("    _______                  _______    \n");
            printf("---'   ____)____        ____(____   '---\n");
            printf("          ______)      (______          \n");
            printf("       __________)    (__________       \n");
            printf("      (____)           (_______         \n");
            printf("---.__(___)              (__________.---\n");
            printf(COLOR_RESET);
            break;
        }

        default :
        {
            fprintf(stderr, RED"\n  [ERROR]. Value out of range. Exiting...\n\n"COLOR_RESET);
            exit(EXIT_FAILURE);
        }
    }
}

void print_game(int user_rps, int comp_rps, int game_number, int curr_round, int round_total, char * username)
{
    printf("\n\n");
    printf("|=====================| GAME %d |=====================| \n", game_number);
    printf("|==================| ROUND %d OF %d |==================|\n", curr_round + 1, round_total);
    sleep(1);

    printf("\nRock...\n");
    print_ASCII(ROCK_ROCK);
    sleep(2);

    printf("\nPaper...\n");
    print_ASCII(PAPER_PAPER);
    sleep(2);

    printf("\nScissors...\n");
    print_ASCII(SCISSORS_SCISSORS);
    sleep(2);

    printf("\n\n\nShoot\n");

    if(user_rps == comp_rps)
    {
        // Tie:
        print_ASCII(user_rps + 3);
    }
    else if( (user_rps == (comp_rps + 1)) || (user_rps == (comp_rps - 2)) )
    {
        // Win:
        print_ASCII(user_rps + 6);
    }
    else
    {
        // Lose:
        print_ASCII(user_rps + 9);
    }
    printf("\n");
    printf(" | PLAYER |--------vs-------| COMPUTER |\n");

}