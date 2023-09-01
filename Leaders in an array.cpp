class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> array;
        int max_element = a[n-1];
        array.push_back(max_element);
        
        for(int i=n-2;i>=0;i--){
            if(a[i]>=max_element){
                array.push_back(a[i]);
                max_element = a[i];
            }
        }
      
       reverse(array.begin(),array.end());
       return array;
    }
};
