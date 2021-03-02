int findMax(struct Height arr[], int n)
{
    int res=-1;
    for(int i=0;i<n;i++)
    {
        int h=(arr[i].feet*12+arr[i].inches);
      if(res<h)
      res=h;
    }
    return res;
}