Question:
Given a rectangular matrix of integers, check if it is possible to rearrange its rows in such a way that all its columns become strictly
increasing sequences (read from top to bottom).

Ex:
[[2,7,1], 
 [0,2,0], 
 [1,3,1]]
Expected Output:
false

bool rowsRearranging(std::vector<std::vector<int>> m) {
    sort(m.begin(),m.end());
    for(int i=0;i<m[0].size();i++)
    {
        for(int j=0;j<m.size()-1;j++)
        {
            if(m[j][i]>=m[j+1][i])
            return false;
        }
    }
return true;
}
