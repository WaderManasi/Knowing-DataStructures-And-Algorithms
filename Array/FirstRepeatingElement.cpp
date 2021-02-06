
//Solution:
int firstRepeated(int arr[], int n) {
   for(int i=0;i<n;i++)
   {
       if(count(arr,arr+n,arr[i]) > 1)
       return i+1;
   }
   return -1;
}
