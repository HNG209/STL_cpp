#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void enter_and_print_stack(){//try this in main
    stack<int> s;//basic data type
    int stack_size{};
    cout << "enter stack size:";
    cin >> stack_size;
    for(int i = 0;i < stack_size;i++){
        cout << "enter value " << i + 1 << ":";
        int val{};
        cin >> val;
        s.push(val);//push val on the top of the stack
    }
    while(!s.empty()){//print out the stack in reverse order(LIFO)
        cout << s.top() << endl;
        s.pop();
    }
}
int main(){
    //stack methods:
    //push(push an element of a data type on the top of the stack,see illustrated pic below to imagine)
    //pop(pop an element of a data type on the top of the stack)
    //empty(return true if the stack is empty or vice versa)
    //top(return the top element of a data type)
    enter_and_print_stack();
    stack<vector<int>> s;//non-scalar data type
    int n{};
    cout << "enter numbers of vector:";
    cin >> n;
    for(int i = 0;i < n;i++){
        cout << "enter vector size " << i + 1 << ":";
        int size{};
        cin >> size;
        vector<int> temp;
        for(int j = 0;j < size;j++){
            cout << "enter value " << j + 1 << ":";
            int val{};
            cin >> val;
            temp.push_back(val);      //   TOP__
        }                             //       |
        s.push(temp);                 //    ___v_____
    }                                 //   |   x4    | ----->Last Out
    while(!s.empty()){                //   |_________|
        for(const auto& i : s.top()){ //   |   x3    |
            cout << i << '\t';        //   |_________|   STACK FRAME
        }                             //   |   x2    |  
        cout << endl;                 //   |_________|
        s.pop();                      //   |   x1    |
    }                                 //   |_________| <----First In
    return 0;
}