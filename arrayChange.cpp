Question:
You are given an array of integers. On each move you are allowed to increase exactly one of its element by one.
Find the minimal number of moves required to obtain a strictly increasing sequence from the input.

Output:
Input:
inputArray: [1, 1, 1]
Expected Output:
3

Input:
inputArray: [2, 1, 10, 1]
Expected Output:
12

Code:
int arrayChange(std::vector<int>a) {
    int ans=0;
    for(int i=0;i<a.size()-1;i++)
    {
        int l=a[i];
        int r=a[i+1];
        if(l>=r)
        {
            a[i+1]+=(l-r+1);
            ans+=(l-r+1);
        }
    }
    return ans;
}
