
def MaxHeapify(A,n,i):
    l=2*i+1
    r=2*i+2
    largest=i
    if l<n and A[l]>A[i]:
        largest=l
    if r<n and A[r]>A[largest]:
        largest=r
    if largest!=i:
        A[i],A[largest]=A[largest],A[i]
        MaxHeapify(A,n,largest)




def heapSort(A):
    n = len(A)
    for i in range(n, -1, -1):
        MaxHeapify(A, n, i)
        # 一个个交换元素
    for i in range(n - 1, 0, -1):
        A[i], A[0] = A[0], A[i]  # 交换
        MaxHeapify(A, i, 0)



arr = [12, 11, 13, 5, 6, 7]
heapSort(arr)
n = len(arr)
print("排序后")
for i in range(n):
    print("%d" % arr[i]),
