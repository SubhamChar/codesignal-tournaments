Given an integer, find the sum of all its digits.

Example

For n = 111, the output should be
digitSum(n) = 3.

1 + 1 + 1 = 3.

Code:
int digitSum(int n) {
int sum=0;
while(n!=0)
{
    sum+=n%10;
    n=n/10;
}
return sum;
}
