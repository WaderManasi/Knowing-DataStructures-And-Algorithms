//User function Template for C++
long long int sum=0;
//Complete this function
long long fibonacci(int n)
{
    if(n<=1)    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}