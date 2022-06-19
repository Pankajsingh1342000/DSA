#include<iostream>
using namespace std;

bool check(int grid[9][9], int row , int col, int num){
    for(int i=0; i<9; i++){
        if(grid[i][col] == num){
            return false;
        }
    }
    for(int j=0; j<9; j++){
        if(grid[row][j] == num){
            return false;
        }
    }

    int ini = row - row%3;
    int inj = col - col%3;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(grid[ini+i][inj+j] == num){
                return false;
            }
        }
    }
    return true;
}

bool sudoku(int grid[9][9], int row, int col){
    if(row == 9){
        return true;
    }
    if(col == 9){
        return sudoku(grid, row+1,0);
    }
    if(grid[row][col]!=0){
        return sudoku(grid, row, col+1);
    }

    for(int i=1; i<=9; i++){
        if(check(grid, row, col, i)){
            grid[row][col] = i;
            if(sudoku(grid, row, col+1)){
                return true;
            }
        }
        grid[row][col] = 0;
    }
    return false;
}

int main(){
    int grid[9][9] = {{3,0,6,5,0,8,4,0,0},
    {5,2,0,0,0,0,0,0,0},
    {0,8,7,0,0,0,0,3,1},
    {0,0,3,0,1,0,0,8,0},
    {9,0,0,8,6,3,0,0,5},
    {0,5,0,0,9,0,6,0,0},
    {1,3,0,0,0,0,2,5,0},
    {0,0,0,0,0,0,0,7,4},
    {0,0,5,2,0,6,3,0,0}};


    sudoku(grid,0,0);

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}