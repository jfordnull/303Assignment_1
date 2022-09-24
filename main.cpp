#include "Header.h"

int main() {

	/*
	j = index of last element + 1
	size = capacity of array
	val = user value
	i = user index
	*/

	int j = 0, size = 100, val, i;

	//Reading data to array
	ifstream data;
	data.open("SampleInput.txt");
	int* arr = readFile(data, size, j);
	output(arr, j);
	
	//Testing search
	cout << "Enter value to search for:" << endl;
	cin >> val;
	cout << "Found at index: " << search(arr, size, val) << endl;
	
	//Testing modify
	cout << "Enter index to modify:" << endl;
	cin >> i;
	modify(arr, i, cout); 
	output(arr, j);
	
	//Testing append
	cout << "Enter value to append:" << endl;
	cin >> val;
	arr = append(arr, size, val, j);
	cout << "Value appended to index " << j - 1 << endl;
	output(arr, j);
	
	//Testing remove
	cout << "Enter index to remove:" << endl;
	cin >> i;
	cout << remove(arr, i, j) << " was removed" << endl;
	output(arr, j);

	return 0;
}