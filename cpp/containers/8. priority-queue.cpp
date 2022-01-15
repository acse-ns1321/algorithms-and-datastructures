Use for

First-In First-Out operations where priority overrides arrival time
Ex: CPU scheduling (smallest job first, system/user priority)
Ex: Medical emergencies (gunshot wound vs. broken arm)
Notes

Often implemented as a std::vector
Example Code

std::priority_queue<int> p;

//---------------------------------
// General Operations
//---------------------------------

// Insert
p.push(value);

// Access
int top = p.top();  // 'Top' element

// Size
unsigned int size = p.size();

// Remove
p.pop();