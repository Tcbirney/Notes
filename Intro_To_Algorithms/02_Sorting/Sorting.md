# Sorting

## Heapsort

Runtime of nlogn

Heapsort sorts in place. This is also the first algorithm which uses a data structure. Called a heap. Heaps are useful for heapsorts but also make for a decent structure for priority queues.

Binary Heaps are array objects that can be viewed as nearly complete binary tree. Each index of the array represnts a leaf node of a binary tree. The tree is always completely filled except for the lowest layer, which is left justified filled.

Heap sorts are rooted with an index 1.

Parent(i) = i//2
Left(i) = 2i
Right(i) = 2i + 1

There are two kinds of heaps. Min heaps and max heaps.Both just satisfy a heap priority function, one who places a priority on small values, and one on larger values. For a max heap, for every node in the tree except for the root node, this must be satisfied. A[Parent(i)] >= A[i], meaning the largest element is stored at the root. And for a min heap its backwards. A[Parent(i)] <= A[i], meaning its smallest element is stored at the root. The heapsort algorithms typically utilize max heaps, whereas min heaps usually are used for implementing priority queues. Since heaps are commonly characterized as binary trees, we can determine its height as log(n) where n is the number of elements.

Main procedures

__MAX_HEAPIFY__
- used in maintaining the heap
- O(log(n))

Takes in an array representing a max heap, as well as an index, and assumes that its possible that the left and right nodes may be larger than A[i]. Therefore A[i] must trickle down into its proper place within the heap.

__BUILD_MAX_HEAP__
- creates a max heap from an unordered array
- O(n)

__HEAPSORT__
- Sorts an array in place
- O(nlog(n))


These are all used heap data structure to implement a prioriy queue. Run in O(log(n)).
- __MAX_HEAP_INSERT__
- __MAX_HEAP_EXTRACT__
- __MAX_HEAP_INCREASE_KEY__
- __MAX_HEAP_MAXIMUM__


