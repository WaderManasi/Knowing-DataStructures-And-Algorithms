/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
       s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
       int res=0;
       if(s2.empty())
       {
           if(s1.empty())
           {
               return -1;
           }
           else
           {
               while(!s1.empty())
               {
                   s2.push(s1.top());
                   s1.pop();
               }
           }
       }
       res=s2.top();
       s2.pop();
       return res;
}