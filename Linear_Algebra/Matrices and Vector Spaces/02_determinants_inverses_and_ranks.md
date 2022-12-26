# Matrices: Determinant, Rank, Inverse


## Linear Operators

A linear operator $\Alpha$ associates with every vector $x$, another vector $y$ such that

$$y = \Alpha x$$

and

$$\Alpha(\lambda a + \mu b) = \lambda \Alpha a + \mu \Alpha b + \$$

Given two vectors a and b. The lineat operator is independent of any basis, and can be thought of as a transformation from one geometrical entity to another.

If a basis is introduced, then the action of the linear operator on each basis vector is to produce a linear combination as follows

$$Ae_j = \sum_{i=1}^N A_{ij}e_i$$

Where $A_{ij}$ is the ith component of the vector $Ae_j$ in the basis. Collectively $A_{ij}$ are the components of the linear operator in the $e_1, \dots, e_n$ basis. And for said basis we can express the relationship $y = \Alpha x$ in component form as

$$
y = \sum_{i = 1}^Ny_i e_i = \Alpha \sum_{j = 1}^Nx_j e_j =  \sum_{j=1}^Nx_j \sum_{i=1}^N A_{ij}e_i
$$

## Matrices

Matrices are actually a representation of a linear operator where the operator transofrms an n dimensional vector space to vectors in an m dimensional vector space. So the operator $\Alpha$ can be represended as 

$$
A = 
\begin{bmatrix}
A_{11} & A_{12} & \dots & A_{1N}\\
A_{21} & A_{22} & \dots & A_{2N}\\
\vdots & \vdots & \ddots & \vdots &\\
A_{M1} & A_{M2} & \dots & A_{MN}\\
\end{bmatrix}
$$

This can be though of as when we have a linear operator that maps vector x, which belongs to an n dimensional vector space, to vector y which belongs to an m dimensional vector sapce.

Then we can write

$$\Alpha e_j = \sum_{i = i}^N A_{ij} f_i $$

### Complex Conjugate

The complex conjugate of matrix $A$ denoted by $A*$, is obtained by taking the complex conjugate of each of the elements of rach of the elements of A

### Hermitian Conjugate

The hermitian conjugate or adjoint of a matrix is the transpose of the complex conjugate or the complex conjugate of the transpose

### Trace of a Matrix

The trace of a sqaure $N \times N$ atrix denoted Tr(a) is defined as the sum of the diagonal elements of the matrix.

Trace is a linear operation. for example

$$Tr(A \pm B) = Tr(A) \pm Tr(B)$$

And trace is also independent of order of multiplication, meaning 

$$Tr(AB) = Tr(BA)$$


### Determinants

Like trace, detemrinants are only defined for square matrices.

__Minor__: The minor of the element $A_{ij}$ of an $N \times N$ matrix $A$ is the determinant of the $(N-1) \times (N-1)$ matrix obtained by removing the ith row and jth column from $A$

__Cofactor__: The cofactor $C_{ij}$ is found by multiplying the minor $M_{ij}$ by $(-1)^{i+j}$, so $C_{ij} = (-1)^{i+j}M_{ij}$

And the determinant is defined as the sum of the products of the elements of any row or column and its corresponding cofactor.

#### Properties

1. A matrix and its transpose have the same determinant
-
2. $|(A*)^T| = |A*| = |A|*$

3. If two rows or columns of a are interchanged, then its determinants remain the same in magnitude but flip in sign.

4. If every element of the $N \times N$ matris is multiplied by a constant $\lambda$ then $|\lambda A| = \lambda ^N|A|$

5. If A and B are square matrices of the same order then $|AB|= |A||B| = |B||A|$


## Matrix Inverse

A matrix whose determinant is 0 is called a singular matrix. Otherwise it is called a nonsingular matrix. 

Given that A is a non singular matrix, we can define a matrix $A^{-1}$ called the inverse of A which satisfies the property that 

$$A A^{-1} = A^{-1} A = I$$
Where $I$ is the identity matrix


The inverse of a matrix is found with the formula

$$
(A^{-1}) = \frac{1}{|A|}A
$$

__Properties__

- $(A^{-1})^{-1} = A$
- $(A^T)^-1 = (A^{-1})^T$
- $((A^T)*)^{-1} = ((A^{-1})^T)* $
- $(AB)^{-1} = B^{-1}A^{-1}$
- $(AB \dots G)^{-1} = G^{-1} \dots B^{-1}A^{-1}$


__Rank Of A Matrix__

The rank of a matrix is the number of linearly indepemdemt row vectors of a matrix A.

The rank of a matrix cn be done by converting the matrix to reduced row echelon form, or by using submatrices. Moreover, for a general MxN matrix A, the rank is equal to the size of the largest square submatrix A whose determinant is non zero. Using that fact we can say that a a matrix is non singular iff Rank(A) = N.


