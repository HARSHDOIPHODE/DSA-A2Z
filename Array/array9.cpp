class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum=n*(n+1)/2;
       int arrSum=0;
       for(int i=0;i<array.size();i++){
          arrSum+=array[i];  
       }
       return sum-arrSum;
    
    }
};