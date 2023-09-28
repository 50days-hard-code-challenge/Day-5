def selectionSort(arr: List[int]) -> None: 
    # Write your code here
    n=len(arr)
    for i in range(n):
        small=i
        for j in range(i+1,n):
            if (arr[j]<arr[small]):
                small=j
        arr[i],arr[small]=arr[small],arr[i]
