# Selection Sort
# A simple iteration over an array finding 
# the index of the minimum/maximum value of the non-visited elements. 
# The returned index is swapped with current index.
# Average Time Complexity: O(n²)

def selection_sort(arr):
  # Selection Sort
  # arr --> unsorted array
  
  for i in range(len(arr)):
    min_i = i
    # find min index of unvisited elements
    for j in range(i + 1, len(arr)):
      if arr[j] < arr[min_i]:
        min_i = j
    
    # swap values
    arr[i], arr[min_i] = arr[min_i], arr[i]
    
  return arr

  
# # Python program for implementation of Selection
# # Sort
# import sys
# A = [64, 25, 12, 22, 11]

# # Traverse through all array elements
# for i in range(len(A)):
	
# 	# Find the minimum element in remaining
# 	# unsorted array
# 	min_idx = i
# 	for j in range(i+1, len(A)):
# 		if A[min_idx] > A[j]:
# 			min_idx = j
			
# 	# Swap the found minimum element with
# 	# the first element		
# 	A[i], A[min_idx] = A[min_idx], A[i]

# # Driver code to test above
# print ("Sorted array")
# for i in range(len(A)):
# 	print("%d" %A[i],end=" ")
