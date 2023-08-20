void left_tile_merge(int grid[4][4])
{
    int tempJ = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((grid[i][j] == grid[i][j + 1]) && (grid[i][j] != 0))
            {
                tempJ = j;
                grid[i][j] *= 2;
                while (tempJ < 2)
                {
                    grid[i][tempJ + 1] = grid[i][tempJ + 2];
                    grid[i][tempJ + 2] = 0;
                    tempJ++;
                }
            }
        }
    }
}

void up_tile_merge(int grid[4][4])
{
    int tempI = 0;

    for (int j = 3; j >= 0; j--)
    {
        for (int i = 0; i < 3; i++)
        {
            if ((grid[i][j] == grid[i + 1][j]) && (grid[i][j] != 0))
            {
                tempI = i;
                grid[i][j] *= 2;
                while (tempI < 2)
                {
                    grid[tempI + 1][j] = grid[tempI + 2][j];
                    grid[tempI + 2][j] = 0;
                    tempI++;
                }
            }
        }
    }
}

void right_tile_merge(int grid[4][4])
{
    int tempJ = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j >= 1; j--)
        {
            if ((grid[i][j] == grid[i][j - 1]) && (grid[i][j] != 0))
            {
                tempJ = j;
                grid[i][j] *= 2;
                while (tempJ > 1)
                {
                    grid[i][tempJ - 1] = grid[i][tempJ - 2];
                    grid[i][tempJ - 2] = 0;
                    tempJ--;
                }
            }
        }
    }
}

void down_tile_merge(int grid[4][4])
{
    int tempI = 0;

    for (int j = 3; j >= 0; j--)
    {
        for (int i = 3; i >= 0; i--)
        {
            if ((grid[i][j] == grid[i - 1][j]) && (grid[i][j] != 0))
            {
                tempI = i;
                grid[i][j] *= 2;
                while (tempI > 1)
                {
                    grid[tempI - 1][j] = grid[tempI - 2][j];
                    grid[tempI - 2][j] = 0;
                    tempI--;
                }
            }
        }
    }
}