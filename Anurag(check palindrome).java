class Solution {
    public boolean isPalindrome(int n) {
        int temp=n;
        int newnum=0;
        if(n<0)
        {
            return false;
        }
        while(n!=0)
        {
            int rem=n%10;
            newnum=(newnum*10)+rem;
            n=n/10;

         }
         if(temp!=newnum)
         {
             return false;
         }
         return true;
    }
}
