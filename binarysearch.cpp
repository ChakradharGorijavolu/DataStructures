#include<iostream>
using namespace std;

class Binarysearch{
    public:
    int search(int n){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int low=0,mid,high=n-1,target,res=0;
        cin>>target;
        mid=(low+high)/2;
        while(low<=high){                                                        //Time complexity: 
            if(target==a[mid]){                                                                  //Best case    :o(1)
                res=mid;                                                                         //Worst case   :o(logn)
                break;                                                                           //Average case :o(logn)
            }
            else if(target<a[mid]){
                high=mid-1;
            }
            else if(target>a[mid]){
                low=mid+1;
            }
        }
       if(res != 0) {
            cout << "Element is found at location: " << res;
        }
        else {
            cout << "Element not found";
        }
        return res;
    }
};

int main(){
    int n;
    cin>>n;

    Binarysearch b;
    b.search(n);
}