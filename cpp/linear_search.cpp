// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
using namespace std;

// Functions return index of the value if found, and -1 if not
int linear_search(int list[], int len, int search_term) 
// parameters are list of ints to be searched,
// max length of the list &
// the term to be searched
{
	for (int index = 0; index < len; index++)
		if (list[index] == search_term)
			return index;
	return -1;
}

// Driver code - main function and function call
int main(void)
{
	int list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int search_term = 5;
	int len = sizeof(list) / sizeof(list[0]); //divide the size of the array by the size of each element (in bytes)

	// Function call
	int result = linear_search(list, len, search_term);
	if (result == -1)
		cout << "Element is not present in array";
	else 
        cout << "Element is present at index " << result;
	return 0;
}
