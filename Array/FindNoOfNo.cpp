/*Complete the function given below*/
int num(int a[], int n, int k)
{
    int ct=0;
     for(int i=0;i<n;i++)
     {
         while(a[i]>0)
         {
             if(a[i]%10==k)
             ct++;
             a[i]=a[i]/10;
         }
     }
     return ct;
}