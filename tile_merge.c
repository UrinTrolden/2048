void left_tile_merge(int grid[4][4])
{
    int tempJ = 0;
    int tryCount = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((grid[i][j] == grid[i][j + 1]) && (grid[i][j] != 0))
            {
                tempJ = j;
                grid[i][j] *= 2;
                while (tempJ < 2)
                {
                    grid[i][tempJ + 1] = grid[i][tempJ + 2];
                    tempJ++;
                }
                if (tryCount < 3)
                {
                    j = -1;
                    tryCount++;
                }
            }
        }
        tryCount = 0;
    }
}

/* void right_tile_merge(int grid[4][4])
{
    int tempJ = 0;
    int tryCount = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((grid[i][j] == grid[i][j + 1]) && (grid[i][j] != 0))
            {
                tempJ = j;
                grid[i][j] *= 2;
                while (tempJ < 2)
                {
                    grid[i][tempJ + 1] = grid[i][tempJ + 2];
                    tempJ++;
                }
                if (tryCount < 3)
                {
                    j = -1;
                    tryCount++;
                }
            }
        }
        tryCount = 0;
    }
} */