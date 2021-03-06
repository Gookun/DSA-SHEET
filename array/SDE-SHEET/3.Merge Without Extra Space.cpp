 /*Efficiently merging two sorted arrays with O(1) extra space
   using gap method*/      

        long long nextGap(long long gap)
        {
            if (gap <= 1)
                return 0;
            return (gap/2)+(gap%2);
        }
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            long long i,j,gap=m+n;
            for(gap = nextGap(gap); gap>0 ;gap = nextGap(gap))
            {
                //comparing elements in the first array.
                for(i=0;i+gap<n;i++)
                    if(arr1[i]>arr1[i+gap])
                        swap(arr1[i],arr1[i+gap]);
                // comparing elements in both arrays.
                for(j=gap>n?gap-n:0 ; i<n && j<m ; i++,j++)
                    if(arr1[i] > arr2[j])
                        swap(arr1[i],arr2[j]);
                if(j<m){
                    for(j=0; j+gap<m ;j++)
                    if(arr2[j]>arr2[j+gap])
                        swap(arr2[j],arr2[j+gap]);
                }
            }
        } 