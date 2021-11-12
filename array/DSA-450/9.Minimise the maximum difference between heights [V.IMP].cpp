    //Minimise the maximum difference between heights [V.IMP]

    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n); 
        int i,mx,mn,ans;
        ans = arr[n-1]-arr[0];  // this can be one possible solution
        
        for(i=0;i<n;i++)
        {
            if(arr[i]>=k)  // since height of tower can't be -ve so taking only +ve heights
            {
                mn = min(arr[0]+k, arr[i]-k);
                mx = max(arr[n-1]-k, arr[i-1]+k);
                ans = min(ans, mx-mn);
            }
        }
        return ans;
    }