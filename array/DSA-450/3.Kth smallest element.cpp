//Kth smallest element

        priority_queue<int>p;
       for(int i=l;i<k;i++)
           p.push(arr[i]);
       for(int i=k;i<=r;i++) 
       {
           if(arr[i]<p.top()){
               p.pop();
               p.push(arr[i]);
           } 
       }
       return p.top();
    }