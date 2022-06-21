# Foundations

## 2.1 Insertion Sort

Solves the sorting problem. Inpus a sequence of n numbers, and outputs a permutation, or reordering, of the input sequence such that no element is less than its previous element

Numbers are also known as keys. Keys can be associated with other data, known as satelite data. Keys and satelite data form a record.


Insertion sort is efficient for a small number of elements. Similar to how we may hand sort a deck of cards. Start with an empty set and as we introduce cards to the solution set, places them in the proper slot as they come in.

## 2.2 Analysing Algorithms

Done to protect the amount of time and resources an algorithm could take up.Such as bandwidth , energy, time, memory space. Data types and sizes paired with conventional computer architectures are important to consider in this step. As are compiler and language nuances.

When analyzing algorithms our primary test indicator is the size of the input set. A larger input set results in larger runtimes and more space used.


## 2.3 Designing Algorithms

### Methods

Divide and Conquer. Divide prblem into similar but smaller probelms and solve them individually. Merge sort is an example of divide and conquer.


## 3 Characterising Running Times

Mainly foucses on worst case, asymptotic analysis of algorithms, rather than best, or even average case.

## 4 Divide And Conquer

For divide and conquer, solve a given problem (instance) recursively. If the problem is small enough - the base case - then we solve it cirectly without recursing. Other wise the recursive case - which performs the basic steps required in order to get to the base case

A recurrence is a an equation that describes a function in terms of its valye on other, typically smaller, arguments. Recurrences are used to solve workst case running times.

A recurrence T(n) is algorithmic is for every sufficiently large threshhold constant n0>0, these properties hold.

1. For all n < n0, we have T(n) = $\Theta(1)$
2. For all n > n0, the program exits in the defined base case


