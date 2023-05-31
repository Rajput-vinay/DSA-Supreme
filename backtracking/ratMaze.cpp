//  Rat Maze



#include <iostream>
#include<vector>
using namespace std;

bool isSafe(int i , int j , int row , int col, vector<vector<bool>>&visited , int arr[][4]){
  if((i >=0 && i<row) && (j>=0 &&j<col) && visited[i][j]==false && arr[i][j]==1){
    return true;
  }
  else{
  return false;
  }
}

void ratMaze(int arr[][4],int row , int col , int i,int j,vector<string>&path,string output,vector<vector<bool>>&visited){

  //  base 
  if(i ==row-1 && j ==col -1){
    path.push_back(output);
    return;
  }
  // 
// down
  if(isSafe(i+1,j,row,col,visited, arr)){
    visited[i+1][j]=true;

    ratMaze(arr,row,col,i+1,j,path,output +'D',visited);

    // Back tracker
  visited[i+1][j]=false;
  }

  // left
  if(isSafe(i,j-1,row,col,visited, arr)){
    visited[i][j-1]=true;

    ratMaze(arr,row,col,i,j-1,path,output +'L',visited);

    // Back tracker
   visited[i][j-1]=false;
  }

  // Right
  if(isSafe(i,j+1,row,col,visited, arr)){
    visited[i][j+1]=true;

    ratMaze(arr,row,col,i,j+1,path,output +'R',visited);

    // Back tracker
   visited[i][j+1]=false;
  }

   // UP
  if(isSafe(i-1,j,row,col,visited, arr)){
    visited[i-1][j]=true;

    ratMaze(arr,row,col,i-1,j,path,output +'U',visited);

    // Back tracker
   visited[i-1][j]=false;
  }
}



int main() {
  int arr[4][4] = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
  int row = 4;
  int col = 4;

  vector<vector<bool>>visited(row,vector<bool>(col,false));
  visited[0][0] = true;
  vector<string>path;
  string output ="";

  ratMaze(arr,row,col, 0,0,path ,output,visited);

  for(auto i :path){
    cout<< i<<" ";
  }
 cout<<endl;
  return 0;
}