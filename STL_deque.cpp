#include<iostream>
#include<deque>
using namespace std;
int main() {
	//deque basically like vector,but has other method that can do the reverse thing
	//like push_front and pop_front,it's faster than vector because it does not copy
	//all the values when inserting or erasing
	//    push_front__        __push_back
	//              _|_______|_
	//memory block:| x | x | x |
	//             |___|___|___|
	//    pop_front__|       |___pop_back
	std::deque<int> d;
	//std::deque<type> d(<optional:iterator first>,<optional:iterator last>);
	//std::deque<type> d(other deque)//copying constructor
	//P/S:all STL non-scalar type can use the subscript operator[] to change or read
	//from that index,case that index has been allocated
	int n;
	cout << "enter n:";
	cin >> n;
	cout << "push back:\n";
	for (int i = 0; i < n; i++) {
		int temp{};
		cout << "enter the " << i + 1 << " value:";
		cin >> temp;
		d.push_back(temp);
	}
	cout << "push front:\n";
	cout << "enter n:";
	cin >> n;
	for (int i = 0; i < n; i++) {//index-based looping
		int temp{};
		cout << "enter the " << i + 1 << " value:";
		cin >> temp;
		d.push_front(temp);
	}
	for (const auto& i : d) {//iterator looping
		printf_s("%d\t", i);
	}
	return 0;
}