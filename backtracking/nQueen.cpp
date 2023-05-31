//  n- Queen 


#include<iostream>
#include<vector>

using namespace std;

void printAns(vector<vector<char>>& boards ,int n){
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<boards[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool isSafe(vector<vector<char>>& boards , int row, int col, int n){

    //  check in row queen is present or not

    int i = row;
    int j = col;

    while(j>=0){
        if(boards[i][j]=='Q'){
            return false;
        }
        j--;
    }

    //  check upper left diagonal queen is present or not
i = row;
j = col;
    while(i>=0 &&j>=0){
        if(boards[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }

    //  check lower left diagonal queen is present or not
i= row;
j =col;
    while(i<n && j>=0){
        if(boards[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }

    return true;
}


void solveQueen(vector<vector<char>>& boards , int n, int col){
    //  base case

    if(col>=n){
        printAns(boards, n);

        return ;
    }


    //  traverse the whole boards

    for(int row =0; row<n; row++){
        if(isSafe(boards,row, col, n)){
            boards[row][col]='Q';

            //  recrusive call
            solveQueen(boards , n, col+1);

            //  back track

            boards[row][col]='-';
        }
    }
}


int main(){
    int n =4;

    vector<vector<char>> boards(n,vector<char> (n,'-'));
    int col=0;
    solveQueen(boards , n, col);

    return 0;

}