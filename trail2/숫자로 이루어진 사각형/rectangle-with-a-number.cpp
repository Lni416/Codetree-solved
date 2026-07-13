#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int k=1;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << k << ' ';
            if(k==9) k=1;
            else k++;
        }
        cout << '\n';
    }
    return 0;
}