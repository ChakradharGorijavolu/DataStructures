#include<iostream>
using namespace std;
#include<string>
#include<vector>

class Array{
    public:
    void arr(int r,int c){
        vector<vector<string>>a1(r,vector<string>(c));           //Vector is used for making the array dynamically.It can resize based on its requirement operations
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
            cin>>a1[i][j];
            }
        }
        cout<<"\n";
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
            cout<<a1[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};

int main(){
    int r,c;
    cin>>r>>c;

    Array a;
    a.arr(r,c);
}