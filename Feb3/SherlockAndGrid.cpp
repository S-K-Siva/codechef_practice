#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char>> matrix;
        for(int i = 0;i<n;i++){
            vector<char> row;
            for(int j = 0;j<n;j++){
                char ch;
                cin>>ch;
                row.push_back(ch);
            }
            matrix.push_back(row);
        }
        vector<vector<int>> bottom(n,vector<int>(n,0)),right(n,vector<int>(n,0)),array(n,vector<int>(n,0));
        // all free spaces...
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(matrix[i][j] == '.')
                    array[i][j] = 1;
            }
        }
    
        // let's do bottom-up traverse
        for(int i = 0;i<n;i++){
            bottom[n-1][i] = array[n-1][i];
        }
        for(int i = n-2;i>-1;i--){
            for(int j = 0;j<n;j++){
                // checking i and j is not a block and (i+1,j) has a path..
                bottom[i][j] = bottom[i+1][j] & array[i][j];
            }
        }
        
        // right-left traverse
        for(int i = 0;i<n;i++){
            right[i][n-1] = array[i][n-1];
        }
        for(int i = 0;i<n;i++){
            for(int j = n-2;j>-1;j--){
                right[i][j] = right[i][j+1] & array[i][j+1];
            }
        }
        
        // find all free cell we can rotate 45 degree mirror to see the view of east side..
        int result = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(right[i][j] && bottom[i][j]) result++;
            }
        }
        cout << result << endl;
        
    }
}