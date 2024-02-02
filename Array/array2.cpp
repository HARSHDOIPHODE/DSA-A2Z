class Solution {
  public:
vector<int> minAnd2ndMin(int a[], int n) {
   if (n < 2) {
        return {-1};
    }

    int s1 = INT_MAX;
    int s2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (a[i] < s1) {
            s2 = s1;
            s1 = a[i];
        } else if (a[i] < s2 && a[i] != s1) {
            s2 = a[i];
        }
    }

    if (s2 == INT_MAX) {
        return {-1};
    }

    return {s1 , s2};

    
}
}