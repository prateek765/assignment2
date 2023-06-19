#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows = 5;
    int columns = 9;

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(i==0 || i==rows-1 || j==0 ||j==columns-1){
                
                    cout<<"*";
                } 
                else {
                    cout<<" ";
                }
            }
         cout<<endl;
        }
    return 0;
    }
