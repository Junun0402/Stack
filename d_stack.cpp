#include "d_stack.h" 
#include <iostream> 
using namespace std; 

d_stack::d_stack(int stackCapacity) {
	capacity = stackCapacity; 
	stack = new int[capacity]; 
	top = -1; 
} 

void d_stack::changeSize(void) {
	capacity *= 2;
	int* temp = new int [capacity]; 
	for(int i=0; i<capacity/2; i++) {
		temp[i] = stack[i];
	}
	delete [] stack;
	stack = temp; 
}
