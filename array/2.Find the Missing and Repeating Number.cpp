/*Find Missing And Repeating 
Using counting array
*/ 
    int *findTwoElement(int *arr, int n) {
        /*
        different approach
        xor all a[i] -->x
        x ^ (1^2^....^n)
        x ^ y = num
        seperate in 2 baskets
        seperate (1....N) in 2 baskets
        xor both baskets to find the number.
        */
        int r;
        for(int i = 0; i<n;i++)
        {
            if(arr[abs(arr[i])-1]>0)
                arr[abs(arr[i])-1]*=-1;
            else
                r=abs(arr[i]);
        }
        int i=1;
        for(i = 1; i<=n;i++)
        {
            if(arr[i-1]>0)break;
        }
        int *ans=new int[2];
        ans[0]=r;
        ans[1]=i;
        return ans;
    }