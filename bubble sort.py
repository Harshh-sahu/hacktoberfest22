def bubbleSort(arr):
    n = len(arr)
  
    swapped = False
  
    for i in range(n-1):
       
        for j in range(0, n-i-1):
 
           
            if arr[j] > arr[j + 1]:
                swapped = True
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
         
        if not swapped:
            # if we haven't needed to make a single swap, we
            # can just exit the main loop.
            return
 
 

arr = [64, 30, 65, 61, 20, 10,48]
 
bubbleSort(arr)
 
print("Sorted array is:")
for i in range(len(arr)):
    print("% d" % arr[i], end=" ")
