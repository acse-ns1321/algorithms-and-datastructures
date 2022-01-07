def recursive_binary(list, target):
    """
    Returns True if element if present in the list, else returns False
    Using recursive function logic
    """
    # Calculate midpoint
    if len(list) == 0: # Stopping condition/ Base Case 1
        return False
    else:
        midpoint = (len(list))//2  # Stopping condition/ Base Case 2

    # Checking conditions
    if list[midpoint] == target: # Target is equal to midpoint
        return True
    else:
        if list[midpoint] < target: # Input higher subarry (with changed start) to recursive function
            return recursive_binary(list[midpoint+1:], target)
        else:
            return recursive_binary(list[:midpoint], target) # Input lower subarray (with changed end) to recursive function

# Verification Block
def verify(result):
    print(" Target found: ", result)

sorted_numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
result = recursive_binary(sorted_numbers, 12)
verify(result)

result = recursive_binary(sorted_numbers, 6)
verify(result)