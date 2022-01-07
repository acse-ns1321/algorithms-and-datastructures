
def binary_search(list, target):
    """
    Returns index of searched item.
    Input list to be searched and target element of the list. 
    """
    first = 0
    last = len(list) - 1

    # Loop that runs as long as first index is less than or equal to last
    while first <= last:
        midpoint = (first + last)//2 # floor division

        # Checking conditions and setting conditions
        if list[midpoint] == target: # If target is at the midpoint - return midpoint
            return midpoint
        elif list[midpoint] <target: # if target is less than midpoint - set higher subarray by resetting first element
            first = midpoint + 1 
        else:
            last = midpoint -1  # if target is greater than midpoint - set lower subarray by changing first element

    return None

def verify(index):
    if index is not None:
        print("Target found at index:", index)
    else:
        print("Target not found in list")

# Verifications
sorted_numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# 1 - Out of bounds error
result = binary_search(sorted_numbers, 12)
verify(result)

# 2 - Out of bounds error
result = binary_search(sorted_numbers, 6)
verify(result)
