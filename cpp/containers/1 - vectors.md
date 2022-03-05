<!-- 
Use for

Simple storage
Adding but not deleting
Serialization
Quick lookups by index
Easy conversion to C-style arrays
Efficient traversal (contiguous CPU caching)
Do not use for

Insertion/deletion in the middle of the list
Dynamically changing storage
Non-integer indexing
Time Complexity

Operation	Time Complexity
Insert Head	O(n)
Insert Index	O(n)
Insert Tail	O(1)
Remove Head	O(n)
Remove Index	O(n)
Remove Tail	O(1)
Find Index	O(1)
Find Object	O(n)
#include <deque> -->

std::vector<int> v;

//---------------------------------
// General Operations
//---------------------------------

// Size
unsigned int size = v.size();

// Insert head, index, tail
v.insert(v.begin(), value);             // head
v.insert(v.begin() + index, value);     // index
v.push_back(value);                     // tail

// Access head, index, tail
int head = v.front();       // head
head = v[0];                // or using array style indexing

int value = v.at(index);    // index
value = v[index];           // or using array style indexing

int tail = v.back();        // tail
tail = v[v.size() - 1];     // or using array style indexing

// Iterate
for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    std::cout << *it << std::endl;
}

// Remove head, index, tail
v.erase(v.begin());             // head
v.erase(v.begin() + index);     // index
v.pop_back();                   // tail

// Clear
v.clear();
//------------------------------------------------------------


// Using vector of vectors

vector<vector<data_type>> vec;

vector<vector<int>> vec{ { 1, 2, 3 }, 
                         { 4, 5, 6 }, 
                         { 7, 8, 9, 4 } }; 

// C++ program to demonstrate insertion
// into a vector of vectors

// Initializing the vector of vectors
vector<vector<int> > vec;

// Elements to insert in column
int num = 10;

// Inserting elements into vector
for (int i = 0; i < ROW; i++) {
    // Vector to store column elements
    vector<int> v1;

    for (int j = 0; j < COL; j++) {
        v1.push_back(num);
        num += 5;
    }

    // Pushing back above 1D vector
    // to create the 2D vector
    vec.push_back(v1);
}

// Displaying the 2D vector
for (int i = 0; i < vec.size(); i++) {
    for (int j = 0; j < vec[i].size(); j++)
        cout << vec[i][j] << " ";
    cout << endl;
}
return 0;
}
