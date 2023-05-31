class Solution {
public:


bool isSafe(char value, vector<vector<char>>& board, int row, int col){
int n = board.size();
    for(int i = 0; i<n ;i++){
        //  row m same element na ho

        if(board[row][i]==value){
             return false;
        }
        //  col m same element na ho

        if(board[i][col]==value){
             return false;
        }

        //  case 3  3*3 box m similar element present na ho

        if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==value) {

        return false;
        }   
        
    }
    return true;
}


bool solve(vector<vector<char>>& board){
    //  is case m base case nhi lika jeyega

   int n = board.size();

   for(int row = 0; row<n;row++){
       for(int col =0 ; col<n ; col++){
    //  check if cell is empty or not
          if(board[row][col]=='.'){
            //    try to fill all value in empty cell
              for(char value ='1'; value<= '9' ; value++){
                //   check safety
                  if(isSafe(value,board,row, col)){
                    //   insert value
                      board[row][col]=value;

                    //    recursion call
                    bool aageKaSolution = solve(board);
                    if(aageKaSolution==true){
                        return true;
                    }

                    //  back Track
                   else{
                    board[row][col]='.';
                   }
                  }
              }
            //   if 1 se 9 tak koi bhi value se solution nhi nikle tu current cell par,
            //   that means piche khi par glat number store h 
            return false;
              }

           }
      
         }
      //     all cell filled

      return true;
  
     }

    void solveSudoku(vector<vector<char>>& board) {
        
        

        solve(board);
    }
};


