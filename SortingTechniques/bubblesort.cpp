#include<iostream>
using namespace std;

class Bubblesort{
    public:
    void sort(int n){                     //Optimized binary search in an efficient way
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            int flag=0;
            for(int j=0;j<n-1-i;j++){
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    flag=1;
                }
            }
            if(flag==0)
            break;
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
};

int main(){
    int n;
    cin>>n;

    Bubblesort obj;
    obj.sort(n);
}