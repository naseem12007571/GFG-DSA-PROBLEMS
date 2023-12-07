void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        
        for(int i=0;i<n;i=i+k){
            int start=i;
            int end= min(i+k-1,n-1);
            while(start<end){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
    }
};
