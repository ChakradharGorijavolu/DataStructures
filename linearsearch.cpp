#include<iostream>
using namespace std;

class Linearsearch{
    public:
    void search(int n){
        int a[n];                                                                //Time complexity:  
        for(int i=0;i<n;i++){                                                               //Best case    :o(1)
            cin>>a[i];                                                                      //Worst case   :o(n)
        }                                                                                   //Average case :o(n)
        int target,flag=0;
        cin>>target;
        for(int i=0;i<n;i++){
            if(a[i]==target){
                cout<<"Target is found at Position -> "<< i+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<"Target not found in the array";
    }
};

int main(){
    int n;
    cin>>n;

    Linearsearch l;
    l.search(n);
}