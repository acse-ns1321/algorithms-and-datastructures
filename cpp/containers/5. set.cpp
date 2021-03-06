// Use for
// Removing duplicates
// Ordered dynamic storage

// Do not use for
// Simple storage
// Direct access by index

// Notes
// Sets are often implemented with binary search trees
// Time Complexity

// Operation	Time Complexity
// Insert	O(log(n))
// Remove	O(log(n))
// Find	O(log(n))

std::set<int> s;

//---------------------------------
// General Operations
//---------------------------------

// Insert
s.insert(20);

// Size
unsigned int size = s.size();

// Iterate
for(std::set<int>::iterator it = s.begin(); it != s.end(); it++) {
    std::cout << *it << std::endl;
}

// Remove
s.erase(20);

// Clear
s.clear();

//---------------------------------
// Container-Specific Operations
//---------------------------------

// Find if an element exists
bool exists = (s.find(20) != s.end());

// Count the number of elements with a certain value
unsigned int count = s.count(20);