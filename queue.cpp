#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void enter_and_print_queue(){
    queue<int> q;//int is a scalar type
    int n;
    cout << "enter n:";
    cin >> n;
    for(int i = 0;i < n;i++){
        int temp{};
        cout << "enter value " << i + 1 << ":";
        cin >> temp;
        q.push(temp);
    }
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}
int main(){
    //enter_and_print_queue();
    //          first        FIFO         last
    // first in  _____________________________     push last
    //    |_____|     |     |     |     |     |________|
    //     _____|  x  |  x  |  x  |  x  |  x  | memory blocks
    //    |     |____ |_____|_____|_____|_____|
    // first out
    queue<vector<int>> q;//non-scalar type
    cout << "enter number of vector array:";
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cout << "enter ammount of vector " << i + 1 << ":";
        int n;
        vector<int> tempo;
        cin >> n;
        for(int j = 0;j < n;j++){
            cout << "enter value " << j + 1 << ":";
            int temp{};
            cin >> temp;
            tempo.push_back(temp);
        }
        q.push(tempo);
    }
    cout << endl;
    while(!q.empty()){
        for(const auto& i : q.front()){
            cout << i << "\t";
        }
        cout << endl;
        q.pop();
    }
    return 0;
}