#define MAX_SIZE 10
using namespace std;

class stack {
	private:
		int top;
		int* stack;
		int capacity;
	public: 
		d_stack(int stackCapacity); 
		void changeSize(void); 
		bool isEmpty(void);
		bool isFull(void);
		void push(int e);
		int pop(void); 
};
