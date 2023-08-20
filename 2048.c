#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "2048.h"
#include "zero_trim.h"
#include "tile_merge.h"

int main()
{
    char input[100];
    int grid[4][4];

    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        printf("EOF Error\n");
    }

    int tokenCount = 0;
    int rowCount = 0;

    char *token = strtok(input, " \n");
    while (token != NULL && tokenCount < 16)
    {
        for (int i = 0; i < 4; i++)
        {
            grid[rowCount][i] = atoi(token);
            tokenCount++;
            token = strtok(NULL, " \n");
        }
        fgets(input, sizeof(input), stdin);
        token = strtok(input, " \n");
        rowCount++;
    }

    // 0 = left, 1 = up, 2 = right, 3 = down.
    int inputDirection = atoi(input);

    switch (inputDirection)
    {
    case 0:
        left_zero_trim(grid);
        left_tile_merge(grid);
        break;

    case 1:
        up_zero_trim(grid);
        up_tile_merge(grid);
        break;

    case 2:
        right_zero_trim(grid);
        right_tile_merge(grid);
        break;

    case 3:
        down_zero_trim(grid);
        down_tile_merge(grid);
        break;

    default:
        break;
    }

    // printf("Final print:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
