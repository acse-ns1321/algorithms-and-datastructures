// Use for
// Key-value pairs
// Constant lookups by key
// Searching if key/value exists
// Removing duplicates
// std::map
// Ordered map
// std::unordered_map
// Hash table


// Do not use for
// Sorting


// Notes
// Typically ordered maps (std::map) are slower than unordered maps (std::unordered_map)
// Maps are typically implemented as binary search trees

// Time Complexity
// std::map
// Operation	Time Complexity
// Insert	O(log(n))
// Access by Key	O(log(n))
// Remove by Key	O(log(n))
// Find/Remove Value	O(log(n))
// std::unordered_map

// Operation	Time Complexity
// Insert	O(1)
// Access by Key	O(1)
// Remove by Key	O(1)
// Find/Remove Value	--



std::map<std::string, std::string> m;

//---------------------------------
// General Operations
//---------------------------------

// Insert
m.insert(std::pair<std::string, std::string>("key", "value"));

// Access by key
std::string value = m.at("key");

// Size
unsigned int size = m.size();

// Iterate
for(std::map<std::string, std::string>::iterator it = m.begin(); it != m.end(); it++) {
    std::cout << *it << std::endl;
}

// Remove by key
m.erase("key");

// Clear
m.clear();

//---------------------------------
// Container-Specific Operations
//---------------------------------

// Find if an element exists by key
bool exists = (m.find("key") != m.end());

// Count the number of elements with a certain key
unsigned int count = m.count("key");