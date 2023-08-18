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