#include<iostream>
using namespace std;
#include<vector>

class Array{
    public:
    void arr(int n){
        vector<int>a1(n);           //Vector is used for making the array dynamically.It can resize based on its requirement operations
        for(int i=0;i<n;i++){
            cin>>a1[i];
        }
        for(int i=0;i<n;i++){
            cout<<a1[i]<<" ";
        }
    }
};

int main(){
    int n;
    cin>>n;

    Array a;
    a.arr(n);
}