vector<int> find(int arr[], int n , int x )
{
    vector<int> res{-1,-1};
    
    bool findStartIndex = true;

    int start = 0;
    int end = n - 1;
    int ans=-1;

        while(start <= end) {
            int mid = start + (end - start) / 2;
    
            if (x < arr[mid])
                end = mid - 1;
            else if (x > arr[mid])
                start = mid + 1;
            else {
                ans = mid;
                if(findStartIndex)
                    end = mid-1;
                else
                    start = mid+1;
            }
        }
        
    res[0]=ans;
    start = 0;
    end = n - 1;
    ans=-1;
    findStartIndex = false;
    if(res[0]!=-1){
        while(start <= end) {
            int mid = start + (end - start) / 2;
    
            if (x < arr[mid])
                end = mid - 1;
            else if (x > arr[mid])
                start = mid + 1;
            else {
                ans = mid;
                if(findStartIndex)
                    end = mid-1;
                else
                    start = mid+1;
            }
        }
        res[1]=ans;
    }
    return res;
}