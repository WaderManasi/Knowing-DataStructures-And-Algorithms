
//User function Template for C++

void printArrayRecursively(int arr[],int n)
{
    if(n==0) return ;
   printArrayRecursively(arr,n-1);
   cout<<arr[n-1]<<" ";
}
