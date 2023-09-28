/*********************************************

 Following is the TreeNode class structure

 class TreeNode {
     int val;
     TreeNode left;
     TreeNode right;

     TreeNode(int val) {
         this.val = val;
         this.left = null;
         this.right = null;
     }
 }

 *********************************************/

public class Solution {

    public static boolean helper(TreeNode root1,TreeNode root2){
        if(root1==null){
            if(root2==null){
                return true;
            }
            else{
                return false;
            }
        }
        if(root2==null){
            if(root1==null){
                return true;
            }
            else{
                return false;
            }
        }
        // if(root1.val!=root2.val){
        //     return false;
        // }
        return helper(root1.left,root2.right) && helper(root1.right, root2.left);
    }
    public static boolean isSymmetric(TreeNode root) {
        // Write your code here.

        // Base Case 
        if(root == null){
            return true;
        }
        return helper(root.left, root.right);
    }
}
