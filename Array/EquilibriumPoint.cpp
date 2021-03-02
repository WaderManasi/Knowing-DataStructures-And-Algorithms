/* You are required to complete this method*/
int findEquilibrium(int arr[], int n)
{
  int right=0,left=0;
  for(int i=0;i<n;i++)
    right+=arr[i];
  for(int i=0;i<n;i++)
  {
      right=right-arr[i];
      if(right==left)
      return i;
      left=left+arr[i];
  }
  return -1;
}