class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
         int m=INT_MIN;
        for(int i=0 ; i<n ; i++){
            if(arr[i]>m){
                m=arr[i];
            }
        }
        return m;
    }
};