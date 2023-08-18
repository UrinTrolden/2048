#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[100];

    int row1[4];
    int row2[4];
    int row3[4];
    int row4[4];
    int grid[4][4];

    fgets(input, sizeof(input), stdin);

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
    printf("inputDirection: %d \n", inputDirection);

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