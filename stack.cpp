#include "i_stack.h" 
#include <iostream>
using namespace std;

bool i_Arrarystack::isEmpty(void) {
	if(top==-1) {
		cout << "stack is emtpy" << endl;
		return true;
	}
	else return false;
}

bool i_Arraystack::isFull(void) {
	if(top==MAX_SIZE-1) {
		cout << "stack is Full" << endl;
		return true;
	}
	else return false;	
}

void i_Arraystack::push(int e) {
	if(isFull()) {
		cout << "overflow" << endl;
		exit(1);
		}
		data[++top]=e;
}

int i_Arraystack::pop(void) {
	if(isEmpty()) {
		cout << "underflow" << endl;
		exit(1);
		}
		return data[top--];
}

