// Implement a Queue using 2 stacks s1 and s2 .
// A Query Q is of 2 Types
// (i) 1 x (a query of this type means  pushing 'x' into the queue)
// (ii) 2   (a query of this type means to pop element from queue and print the poped element)


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