#include<iostream>
using namespace std;

class Selectionsort{
    public:
    void sort(int n){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n-1;i++){
            int min=i;
            int temp;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[min]){
                    min=j;
                }
            }
            if(min!=i){
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

    }

};

int main(){
    int n;
    cin>>n;

    Selectionsort s;
    s.sort(n);
}