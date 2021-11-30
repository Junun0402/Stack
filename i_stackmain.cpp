#include "i_stack.h" 
#include <iostream>
using namespace std;

int main() {
	i_Arraystack A;
	A.isEmpty();
	for(int i=0, i<10; i++) {
		A.push(i);
	}
	A.isFull();
	for(int i=0, i<10; i++) {
		cout << A.pop() << endl;
	}
	cout << A.pop();
}
