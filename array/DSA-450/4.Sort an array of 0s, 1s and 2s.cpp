  //Sort an array of 0s, 1s and 2s using Dutch national flag algorithm
  void sort012(int a[], int n)
    {
    int low=0, mid =0;
    int high=n-1;
    while(mid<=high){
        switch(a[mid]){
            case 0:
                swap(a[low++], a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[high--],a[mid]);
                break;
        }
    }  
    }