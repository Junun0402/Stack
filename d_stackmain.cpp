#include "d_stack.h" 
#include <iostream> 
using namespace std; 
int main () {
	d_stack A(2);
	A.push(5);
	cout << A.pop() << endl;

	A.push(1);
	A.push(2);
	A.push(3);
	for(int i=0; i<4; i++) {
		cout << A. pop () << endl;
	}
}
return 0;
