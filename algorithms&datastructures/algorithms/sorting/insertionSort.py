# Insertion Sort
# Partitions the array into sorted and unsorted sub-arrays. 
# It selects the first element in the unsorted sub-array and shuffles the sorted elements 
# left until the correct insertion index is found.
# The insertion index is found looking right to left from the sorted array.
# This approach is an efficient solution for partially sorted arrays and small datasets. 
# In practice, it is a more efficient sorting algorithm than other O(n²) algorithms 
# (e.g. Selection Sort and Bubble Sort). Think of Insertion Sort as how people naturally sort a hand of cards.
# Average Time Complexity: O(n²)


def insertion_sort(arr):
    # Insertion Sort

    for i in range(1, len(arr)):

        x = arr[i] 

        j = i-1
        # move backwards through sorted array
        while j >= 0 and x < arr[j] : 
                arr[j + 1] = arr[j] 
                j -= 1

        # insert x when j is correct index
        arr[j + 1] = x
        
    return arr