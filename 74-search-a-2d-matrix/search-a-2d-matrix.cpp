class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix,int target){
        if (matrix.empty()||matrix[0].empty()){
            return false;
        }
        int m=matrix.size();
        int n=matrix[0].size();

        int top=0;
        int bottom=m-1;
        int target_row=-1;

        while(top<=bottom){
            int mid=top+(bottom-top)/2;
            if (matrix[mid][0]<=target){
                target_row=mid;
                top=mid+1; 
            } 
            else{
                bottom=mid-1;
            }
        }
        if(target_row==-1){
            return false;
        }
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid_col=left+(right-left)/2;
            if(matrix[target_row][mid_col]==target){
                return true;
            }
            else if(matrix[target_row][mid_col]<target){
                left=mid_col+1;
            } 
            else{
                right=mid_col-1;
            }
        }
        return false;
    }
};
