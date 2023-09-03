class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
        if(n <= 0){
            return false;
        }
        
        int count = 0;
        while(n >0){
            if(n & 1){  //and operaation
                count++;
            }
            n>>= 1;  //right shift
        }
        
        return count ==1;
    }
};
