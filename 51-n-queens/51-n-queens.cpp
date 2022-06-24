class Solution {
public:
   
    vector<vector<string>> ret;
    bool is_valid(vector<string> &board, int row, int col){
        // check col
        for(int i=row;i>=0;--i)
            if(board[i][col] == 'Q') return false;
        // check left diagonal
        for(int i=row,j=col;i>=0&&j>=0;--i,--j)
            if(board[i][j] == 'Q') return false;
        //check right diagonal
        for(int i=row,j=col;i>=0&&j<board.size();--i,++j)
            if(board[i][j] == 'Q') return false;
        return true;
    }
    void dfs(vector<string> &board, int row){
        // exit condition
        if(row == board.size()){
            ret.push_back(board);
            return;
        }
        // iterate every possible position
        for(int i=0;i<board.size();++i){
            if(is_valid(board,row,i)){
                // make decision
                board[row][i] = 'Q';
                // next iteration
                dfs(board,row+1);
                // back-tracking
                board[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
		// return empty if n <= 0
        if(n <= 0) return ret;
        // vector<string> board(n,string(n,'.'));
        // cout<<board[0].size();
        // cout<<board.size();
        
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<board.size();i++)
        {
            board[i]=s;
        }
        
        dfs(board,0);
        return ret;
    }
};
//     void solve(int row,vector<vector<string>> &ans,vector<string> &st,int num)
//     {
//         if(row==ans.size())
//         {
//             ans.push_back(st);
//             return ;
//         }
//         for(int col=0;col<num;col++)
//         {
//             if(queensafe(ans,st,row,col)==true)
//             {
//                 ans[row][col]='q';
//                 solve(row+1,ans,st,num);
//                 ans[row][col]='.';
//             }
//         }
//     }
//     bool queensafe(vector<vector<string>> &ans,vector<string> &st,int rows,int cols)
//     {
//         for(int i=rows;i>=0;i--)
//         {
//             if(ans[i][cols]=='q')
//                 return false;
//         }
//         for(int i=rows,j=cols;i>=0 && j>=0;i-1,j-1)
//         {
//             if(ans[i][j]=='q')
//                 return false;
//         }
//         for(int i=rows,j=cols;i>=0 && j<=st.size();i-1,j+1)
//         {
//             if(ans[i][j]=='q')
//                 return false;
//         }
//         return true;
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>> board(n,vector<string>(n,string(n,'.')));
//         vector<string> ans(n,string(n,'.'));
//         solve(0,ans,board);
//         return ans;
//     }
// };