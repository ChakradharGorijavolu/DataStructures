#include <iostream>
#include <vector>
#include <string>

using namespace std;

class FCFS {
public:
    void sort(int PID) {                                                    // Cpu scheduling algorithm but it's having convey effect
        vector<int> WT(PID), BT(PID);
        vector<string> P(PID);

        cout << "Enter process IDs (strings):" << endl;
        for (int i = 0; i < PID; i++) {
            cin >> P[i];
        }

        cout << "Enter waiting times:" << endl;
        int AWT=0;
        for (int i = 0; i < PID; i++) {
           
            cin >> WT[i];
            AWT=AWT+WT[i];
        }

        cout << "Enter burst times:" << endl;
        for (int i = 0; i < PID; i++) {
            cin >> BT[i];
        }

        cout << "Turnaround times:" << endl;
        int ATAT=0;
        for (int i = 0; i < PID; i++) {
            int TAT = WT[i] + BT[i];
            ATAT=ATAT+TAT;
            cout << "Process " << P[i] << ": " << TAT << endl;
        }

        cout << "Avg Waiting time: " << AWT/PID << " Units"<<endl;
        cout << "Avg Turnaround time: " << ATAT/PID << " Units" <<endl;
        
    }
};

int main() {
    int PID;
    cout << "Enter number of processes: ";
    cin >> PID;

    FCFS obj;
    obj.sort(PID);

    return 0;
}
