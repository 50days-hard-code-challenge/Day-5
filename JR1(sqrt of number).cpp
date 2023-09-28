int floorSqrt(int n)
{
   // Write your code here.
   int low=1 , high=n;
   // int ans=1;
   while(low<=high){
       long long mid=low+(high-low)/2;
       long long val = mid*mid;
       if(val<=n){
          low=mid+1;
       }
       else{
           high=mid-1;
       }
   }
   return high;
}
