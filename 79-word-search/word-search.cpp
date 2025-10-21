class Solution {
public:
    bool dfs(vector<vector<char>>& board, string& word, int r, int c, int idx) {
        if(idx == word.size()) return true;
        if(r<0 || c<0 || r>= board.size() || c>=board[0].size() || board[r][c]!=word[idx])
            return false;
            char t=board[r][c];
            board[r][c] = '#';
            bool found = dfs(board, word,r-1, c, idx+1) ||
                         dfs(board, word,r+1, c, idx+1) ||
                         dfs(board, word,r, c-1, idx+1) ||
                         dfs(board, word,r, c+1, idx+1);
            board[r][c] = t;
            return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();

        for(int r=0;r<row; r++){
            for(int c=0;c<col;c++){
                if(board[r][c] == word[0] && dfs(board, word, r,c,0)) return true;
            }
        }
        return false;
    }
};