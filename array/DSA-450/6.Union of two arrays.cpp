/*Union of two arrays
using set*/
int doUnion(int a[], int n, int b[], int m)  {
    set<int> s;
    for (int i = 0; i < n; i++)
      s.insert(a[i]);
    for (int i = 0; i < m; i++)
        s.insert(b[i]);
    return s.size();
    }

//Time Complexity: O(m * log(m) + n * log(n))
