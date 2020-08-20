#include<iostream>
#include<set>
using namespace std;
int main() {
	//commonly used set's method:
	//insert(insert the next value,increase the size by 1)
	//begin(iterator to the first element)
	//end(iterator to the last element)
	//swap(swap set1 with set2)
	//erase(erase an element or all of the element in range)
	//find(return an iterator to the element if found in set,if not then return an iterator the the last element .end())
	std::set<int> s;
	//#std::set<type> s(<optional:iterator first>,<optional:iterator last>);
	//#std::set<type> s(s2)//copy all from s2
	int n;
	cout << "enter n:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cout << "enter value " << i + 1 << ":";
		cin >> temp;
		s.insert(temp);
	}
	cout << "your set's size:" << s.size() << endl;
	cout << "range based for loop:" << endl;
	for (const auto& i : s) {//range based
		cout << i << endl;//print out the value in sorted oreder,if 2 value are the same then print that value once and remove the other
	}
	cout << "iterator looping:" << endl;
	set<int> ::iterator it = s.begin();
	while (it != s.end()) {
		cout << *it << endl;
		++it;
	}
	cout << "enter the value you want to find:";
	int val;
	cin >> val;
	if (s.find(val) != s.end()) {
		cout << *(s.find(val)) <<" was found in set!" << endl;
	}
	else {
		cout << "cannot find anny value!iterator returned the end of the set" << endl;
	}
	return 0;
}