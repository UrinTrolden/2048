void left_zero_trim(int grid[4][4])
{
    int tempJ = 0;
    int tryCount = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (grid[i][j] == 0)
            {
                tempJ = j;
                while (tempJ < 3)
                {
                    grid[i][tempJ] = grid[i][tempJ + 1];
                    if (tempJ == 2)
                    {
                        grid[i][tempJ + 1] = 0;
                    }

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

void up_zero_trim(int grid[4][4])
{
    int tempI = 0;
    int tryCount = 0;

    for (int j = 3; j >= 0; j--)
    {
        for (int i = 0; i < 4; i++)
        {
            if (grid[i][j] == 0)
            {
                tempI = i;
                while (tempI < 3)
                {
                    grid[tempI][j] = grid[tempI + 1][j];
                    if (tempI == 2)
                    {
                        grid[tempI + 1][j] = 0;
                    }

                    tempI++;
                }
                if (tryCount < 3)
                {
                    i = -1;
                    tryCount++;
                }
            }
        }
        tryCount = 0;
    }
}

void right_zero_trim(int grid[4][4])
{
    int tempJ = 0;
    int tryCount = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j >= 0; j--)
        {
            if (grid[i][j] == 0)
            {
                tempJ = j;
                while (tempJ >= 1)
                {
                    grid[i][tempJ] = grid[i][tempJ - 1];
                    if (tempJ == 1)
                    {
                        grid[i][tempJ - 1] = 0;
                    }

                    tempJ--;
                }
                if (tryCount < 3)
                {
                    j = 4;
                    tryCount++;
                }
            }
        }
        tryCount = 0;
    }
}

void down_zero_trim(int grid[4][4])
{
    int tempI = 0;
    int tryCount = 0;

    for (int j = 3; j >= 0; j--)
    {
        for (int i = 3; i >= 0; i--)
        {
            if (grid[i][j] == 0)
            {
                tempI = i;
                while (tempI >= 1)
                {
                    grid[tempI][j] = grid[tempI - 1][j];
                    if (tempI == 1)
                    {
                        grid[tempI - 1][j] = 0;
                    }

                    tempI--;
                }
                if (tryCount < 3)
                {
                    i = 4;
                    tryCount++;
                }
            }
        }
        tryCount = 0;
    }
}