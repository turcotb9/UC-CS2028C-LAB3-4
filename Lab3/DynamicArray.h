#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H


class DynamicArray {
private:
	int* arr;
	int size;
	int capacity;
public:

	DynamicArray();
	bool isEmpty();
	void add(int val);
	int getLength();
	int get(int index);
	void remove(int index);
	void resize();

};



#endif
