//9.Which among them forms a perfect Sudoku Pattern ?
//https://practice.geeksforgeeks.org/problems/is-sudoku-valid4820/1/

class Solution{
public:

    int isValid(vector<vector<int>> mat){
        // code here
        for (int i = 0; i < 9; i++)
        {
            vector<int> colm(9, 0), row(9, 0);
            for (int j = 0; j < 9; j++)
            {
                if (mat[i][j] != 0)
                {
                    if (colm[mat[i][j] - 1] == 0)
                        colm[mat[i][j] - 1] += 1;
                    else
                        return 0;
                }
                if (mat[j][i] != 0)
                {
                    if (row[mat[j][i] - 1] == 0)
                        row[mat[j][i] - 1] += 1;
                    else
                        return 0;
                }
                if (i % 3 == 0 && j % 3 == 0)
                {
                    vector<int> box(9, 0);
                    for (int k = i; k < (i + 3); k++)
                    {
                        for (int l = j; l < (j + 3); l++)
                        {
                            if (mat[k][l] != 0)
                            {
                                if (box[mat[k][l] - 1] == 0)
                                    box[mat[k][l] - 1] += 1;
                                else
                                    return 0;
                            }
                        }
                    }
                }
            }
        }
        return 1;
    }
};
