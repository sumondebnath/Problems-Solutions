#include<bits/stdc++.h>
using namespace std;

int main(){

    int row, col;
    cin>>row>>col;

    char arr[row][col];
    bool step = true;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i%2==0){
                arr[i][j] = '#';
            }
            else{
                if(step && j==col-1) {
                    arr[i][j] = '#';
                }
                else if(!step && j==0) {
                    arr[i][j] = '#';
                }
                else arr[i][j] = '.';
            }
        }
        if(i%2!=0) step = !step;
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}