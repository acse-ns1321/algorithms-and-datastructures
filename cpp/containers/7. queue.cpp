// Use for
// First-In First-Out operations
// Ex: Simple online ordering system (first come first served)
// Ex: Semaphore queue handling
// Ex: CPU scheduling (FCFS)

// Notes
// Often implemented as a std::deque


std::queue<int> q;

//---------------------------------
// General Operations
//---------------------------------

// Insert
q.push(value);

// Access head, tail
int head = q.front();       // head
int tail = q.back();        // tail

// Size
unsigned int size = q.size();

// Remove
q.pop();