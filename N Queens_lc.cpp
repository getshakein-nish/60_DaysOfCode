class Solution {
    public:
    void nQueens(int col,vector<vector<string>>&ans,vector<string>&board,int n,vector<int>&leftRow,vector<int>&lowerDiagnol,vector<int>&upperDiagnol){
        
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row<n; row++){
            if(leftRow[row]!=1 && lowerDiagnol[row+col]!=1 && upperDiagnol[n-1+col-row]!=1){
                // marking
                leftRow[row]=1;
                lowerDiagnol[row+col]=1;
                upperDiagnol[n-1+col-row]=1;
                board[row][col]='Q';
                
                //recursion call
                nQueens(col+1,ans,board,n , leftRow,lowerDiagnol, upperDiagnol);
                
                //backtrack
                leftRow[row]=0;
                lowerDiagnol[row+col]=0;
                upperDiagnol[n-1+col-row]=0;
                board[row][col]='.';
            }
        }
        
    }
        
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>leftRow(n,0);
        vector<int>lowerDiagnol(2*n-1,0);
        vector<int>upperDiagnol(2*n-1,0);
        nQueens(0,ans,board,n,leftRow,lowerDiagnol,upperDiagnol);
        
        return ans;
    }
};
