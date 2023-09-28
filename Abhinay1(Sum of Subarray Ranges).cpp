class Solution {
public:


    
    long long subArrayRanges(vector<int>& nums) {
        
        
        /* long long sum=0;
        for(int i=0;i<nums.size();i++){
            int max=nums[i];
            int min=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>max){
                    max=nums[j];
                }
                else if(nums[j]<min){
                    min=nums[j];
                }
                sum+=(max-min);
            }
        }
        return sum;*/
        int n=nums.size();
        vector<int>leftmin(n);
        vector<int>rightmin(n);
        vector<int>leftmax(n);
        vector<int>rightmax(n);
        stack<int>st;
        st.push(0);
        leftmin[0] = 1; 
        for(int i=1; i<n; i++)
        {
            while(!st.empty() && nums[i] < nums[st.top()]) 
                st.pop();
            
            if(st.empty()) 
                leftmin[i] = i+1; 
            else 
                leftmin[i] = i - st.top(); 
            
            st.push(i);
            
        }
        
        while(st.size()) 
            st.pop();
        
         
        st.push(n-1);
        rightmin[n-1] = 1;
        for(int i=n-2; i>=0; i--)
        {
            while(!st.empty() && nums[i] <= nums[st.top()]) 
                st.pop();
            
            if(st.empty()) 
                rightmin[i] = n-i; 
            else 
                rightmin[i] = st.top()-i;
            
            st.push(i);
        }        
        
        while(!st.empty()){
            st.pop();
        }

        st.push(0);
        leftmax[0] = 1; 
        for(int i=1; i<n; i++)
        {
            while(!st.empty() && nums[i] > nums[st.top()]) 
                st.pop();
            
            if(st.empty()) 
                leftmax[i] = i+1; 
            else 
                leftmax[i] = i - st.top(); 
            
            st.push(i);
            
        }
        
        while(st.size()) 
            st.pop();
        
         
        st.push(n-1);
        rightmax[n-1] = 1;
        for(int i=n-2; i>=0; i--)
        {
            while(!st.empty() && nums[i] >= nums[st.top()]) 
                st.pop();
            
            if(st.empty()) 
                rightmax[i] = n-i; 
            else 
                rightmax[i] = st.top()-i;
            
            st.push(i);
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            long long bh=(leftmax[i]*rightmax[i])-(leftmin[i]*rightmin[i]);
            sum+=bh*(long long)nums[i];
        }
        return sum;
    }
        


        
    
};
    
