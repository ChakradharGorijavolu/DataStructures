#include<iostream>
using namespace std;

class InsertionSort {
public:
    void sort(int n) {
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int temp, j;
        for(int i = 0; i < n; i++) {
            temp = a[i];
            j = i - 1;
            while(j >= 0 && a[j] > temp) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = temp;
        }
        
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
};

int main() {
    int n;
    cin >> n;
    
    InsertionSort obj;
    obj.sort(n);
    
    return 0;
}