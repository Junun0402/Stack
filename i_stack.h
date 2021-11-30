#include <iostream>
using namespace std;
#pragma once
#define MAX_SIZE 10

class i_Arraystack {
	private:
		int top;
		int data[MAX_SIZE];
	public:
		i_Arraystack() {
			top =-1;
		}
		bool isEmpty(void);
		bool isfull(void);
		void push(int e);
		int pop(void);
};

#include "i_stack.h"
