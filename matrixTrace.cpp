Given a matrix, find its trace.

Example

For

matrix = [[1, 1, 1], 
          [0, 5, 0], 
          [2, 1, 3]]
          
The output should be
matrixTrace(matrix) = 9.
         
Code:
int matrixTrace(std::vector<std::vector<int>> M) {
    int trace=0;
    for(int i=0;i<M.size();i++)
    {
        for(int j=0;j<M[i].size();j++)
        {
            if(i==j)
            {
                trace+=M[i][j];
            }
        }
    }
return trace;
}

          
