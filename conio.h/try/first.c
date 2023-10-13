#include <stdio.h>
#include <stdlib.h>

// ---- all colours -----
#define ANSI_COLOR_RED "\x1b[1;31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

int main()
{
    // --- trying AND tesing things up ------
    printf("Game\n");
    printf(ANSI_COLOR_RED "This text is RED!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_GREEN "---" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_RED "---" ANSI_COLOR_RESET "\n");

    int rows, cols;
    printf("Enter the rows : ");
    scanf("%d", &rows);
    printf("Enter the cols : ");
    scanf("%d", &cols);

    // -- it stores the game board values...
    // if there is 1 at cell.. player 1 has marked
    // if there is 2 at cell.. player 2 has marked
    // if there is 0 at cell.. its an empty cell
    int values[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            values[i][j] = 0;

    // --- game variable decides when game will end and while loop stops
    int game = 1;

    // store which player gonna play now
    int current_player = 1;

    // game engine
    while (game)
    {
        // to clear the screen
        system("cls");

        // making a grid with i and j loop
        for (int i = 0; i <= 3 * rows; i++)
        {
            for (int j = 0; j <= 4 * cols; j++)
            {
                int current_row = i / 3;
                int current_col = j / 4;

                // printing board
                if (i == 0 || i % 3 == 0 || j == 0 || j % 4 == 0)
                    printf(ANSI_COLOR_CYAN "*" ANSI_COLOR_RESET "");
                else
                {
                    if (values[current_row][current_col] == 1)
                        printf(ANSI_COLOR_RED "-" ANSI_COLOR_RESET "");
                    else
                    {
                        if (values[current_row][current_col] == 2)
                            printf(ANSI_COLOR_YELLOW "-" ANSI_COLOR_RESET "");
                        else
                            printf(" ");
                    }
                }
            }
            printf("\n");
        }

        /// conditon to check game win
        for (int i = 0; i < rows - 3; i++)
        {
            for (int j = 0; j < cols - 3; j++)
            {
                if (values[i][j] != 0)
                {
                    if (values[i][j] == values[i][j + 1] &&
                        values[i][j] == values[i][j + 2] &&
                        values[i][j] == values[i][j + 3])
                    {
                        printf("player %d wins", values[i][j]);
                        game = 0;
                    }
                    if (values[i][j] == values[i + 1][j] &&
                        values[i][j] == values[i + 2][j] &&
                        values[i][j] == values[i + 3][j])
                    {
                        printf("Player %d wins,", values[i][j]);
                        game = 0;
                    }
                    if (values[i][j] == values[i - 1][j + 1] &&
                        values[i][j] == values[i - 2][j + 2] &&
                        values[i][j] == values[i - 3][j + 3])
                    {
                        printf("Player %d wins,", values[i][j]);
                        game = 0;
                    }
                    if (values[i][j] == values[i + 1][j + 1] &&
                        values[i][j] == values[i + 2][j + 2] &&
                        values[i][j] == values[i + 3][j + 3])
                    {
                        printf("Player %d wins,", values[i][j]);
                        game = 0;
                    }
                }
            }
        }
        if (game)
        {
            int user_row, user_col;
            ask : 
            printf("\n--------- Player %d Turns ----------------------\n", current_player);
            printf("Enter the row : ");
            scanf("%d", &user_row);
            printf("Enter the col : ");
            scanf("%d", &user_col);
            if(values[user_row][user_col]==0){
                values[user_row][user_col] = current_player;
            } else goto ask;
            if (current_player == 1)
                current_player = 2;
            else
                current_player = 1;
        }
    }

    return 0;
}