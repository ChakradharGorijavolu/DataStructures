#include<iostream>
#include<vector>
using namespace std;

class TwodArray{
    public:
    void arr(int r,int c){
        vector<vector<int>>a1(r,vector<int>(c));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>a1[i][j];
            }
        }
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

    TwodArray ok;
    ok.arr(r,c);
}