
#  Sequential Search
def linear_search(list, target):
    """
    Returns the index position of the target if found, else returns None
    """
    for i in range(0, len(list)): # len function is a constant time operation
        if list[i] == target:
            return i
    return None

def verify(index):
    if index is not None:
        print("Target found at index:", index)
    else:
        print("Target not found in list")

# Verifications
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# 1 - Out of bounds error
result = linear_search(numbers, 12)
verify(result)

# 2 - Out of bounds error
result = linear_search(numbers, 6)
verify(result)


