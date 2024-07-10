#include<iostream>
using namespace std;

class FCFS{
    public:
    void sort(int PID){                     //Cpu scheduling algorithm but its having convey effect
        int WT[PID],BT[PID];
        for(int i=1;i<=PID;i++){
            cin>>WT[i];
        }
        for(int i=1;i<=PID;i++){
            cin>>BT[i];
        }
        int TAT=0;
        for(int i=1;i<=PID;i++){
            TAT=WT[i]+BT[i];
        }

        for(int i=0;i<PID;i++){
            cout<<TAT<<" ";
        }
    }
};

int main(){
    int PID;
    cin>>PID;

    FCFS obj;
    obj.sort(PID);
}