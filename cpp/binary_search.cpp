// C++ program to implement recursive Binary Search
#include <iostream>
using namespace std;

// A recursive binary search function. It returns
// location of search_term in given array search_list[start_index..end_index] is present,
// otherwise -1
int binarySearch(int search_list[], int start_index, int end_index, int search_term)
{
	if (end_index >= start_index) {
		int middle_index = start_index + (end_index - start_index) / 2;

		// If the element is present at the middle itself
		if (search_list[middle_index] == search_term)
			return middle_index;

		// If element is smaller than middle_index, then
		// it can only be present in left subarray
		if (search_list[middle_index] > search_term)
			return binarySearch(search_list, start_index, middle_index - 1, search_term);

		// Else the element can only be present
		// in right subarray
		return binarySearch(search_list, middle_index + 1, end_index, search_term);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

int main(void)
{
	int search_list[] = { 2, 3, 4, 10, 40 };
	int search_term = 10;
	int list_length = sizeof(search_list) / sizeof(search_list[0]);
	int result = binarySearch(search_list, 0, list_length - 1, search_term);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
