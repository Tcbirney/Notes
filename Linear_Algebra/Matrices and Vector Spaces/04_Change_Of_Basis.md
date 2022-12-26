# Change Of Basis

Consider a basis $e_1, \dots, e_n$ of an N-dimensional vector space and let $x$ be an arbitrary vector which lies in this vector space. Then we can write

$$x = \sum_{i = 1}^N x_ie_i$$

Here $x_1, \dots, x_n$ are the elements of x. Changing the basis will result in a change of these elements. Consider a new basis $e'_1, \dots, e'_n$ which is related to the former basis by the equation

$$e'_j = \sum_{i=1}^N S_{ij}e_i$$

Where $S_{ij}$ is the ith component of the new $e'_j$ vector with respect to the former basis. The vector x can now be written as

$$x=\sum_{i = 1}^N x_i e_i =\sum_{j = 1}^N x'_j e'_j =\sum_{j = 1}^N x'_j \sum_{i = 1}^N S_{ij} e_i$$

And dividing by $\sum_{i = 1}^N e_i$ gives
$$x_i = \sum_{j = 1}S_{ij}x'_j$$

This can be written in matrix form as 
$x = Sx'$ where $x = (x_1, \dots, x_n)^T$ and $x' = (x'_1, \dots, x'_n)^T$. Here S is a transformation matrix associated with the change of basis. Furthermore, since the vectors $e_j$ are linearly independent and the matrix S is non singular. Which allows us to say

$$x' = S^{-1}x$$