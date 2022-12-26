# Eigen Values and Eigen Vectors

## Basics

Suppose that a linear operator transforms a vector x in a vector space to another vector $\Alpha x$ in the same vector space.Consider the special case where the linear operator transforms the vector into a multiple of itself.

Meaning
$$\Alpha x = \lambda x$$

Any nonzero vectr x that satisfies this equation is an eigenvector of the linear operator and $\lambda$ is the corresponsding eigen value. The linear operator has n independent eigenvectors, but their corresponding eigen value doesn't have to be independent.

Here $A$ is an $N \times N$ matrix

If x is an eigen vector of A, then any scalar multiple of x will also be an eigenvector of A as well. Therefore we use normalized eigen vectors which satisfy 

$$(x*)^T x = I$$

Eigen vectors and eigen values play an important role in characterizing a matrix.

The onverse of the matrix, $A^{-1}$, has the same eigenvectors $x^i$ as $A$ but the eigen values have the form of $\frac{1}{\lambda ^i}$


## Determination of EigenValues and EigenVectors

Consider an $N \times N$ matrix A with corresponding eigenvalue $\lambda$ and eigenvector $x$. FOllowing the assumption made prior we say
$$
Ax = \lambda x\\
Ax - \lambda x = 0\\
Ax - \lambda I x = 0\\
x(A - \lambda I) = 0\\
$$

We know that the above equation only has a non trivial solution when the determinant $|A-\lambda I| = 0$. This is a charcateristic equation of A. The equation is a polynomial of degree N in $\lambda$. The N roots of this equation give the eigen values $\lambda_i, i = 1, \dots, N$ of A. Corresponding to each eigenvalue $\lambda_i$ there will be a column vector x_i which will be the eigenvector of A. This can be determined from the equation
$$Ax_i = \lambda x_i$$


Example:

Determine the eigenvalues and the eigenvectors of the following matrix.

$$
A = 
\begin{bmatrix}
1 & 1 & 3\\
1 & 1 & -3\\
3 & -3 & -3\\
\end{bmatrix}
$$

Usign the characteristic equation $x(A - \lambda I) = 0$ looking for a $\lambda$ such that $|(A - \lambda I)| = 0$. We get 

$$
\begin{vmatrix}
1-\lambda & 1 & 3\\
1 & 1-\lambda & -3\\
3 & -3 & -3-\lambda\\
\end{vmatrix}
$$

Which evaluates to 
$$(1-\lambda)[(1-\lambda)(-3-\lambda)-9]-[-3-\lambda+9]+3[-6+3\lambda]\\
(\lambda - 2)(\lambda -3)(\lambda + 6)=0$$

Which gives $\lambda_1 = 2, \lambda_2 = 3, \lambda_3 = -6$ as the eigenvalues of A. This means that we have 3 eigen vectors of A. We determine $x_1$ with the equation below, wherewe set 
$$x_1 = 
\begin{bmatrix} 
x_1\\x_2\\x_3
\end{bmatrix}$$

$$
A x_1 = \lambda_1 x_1\\
$$
$$
\begin{bmatrix}
1 & 1 & 3\\
1 & 1 & -3\\
3 & -3 & -3
\end{bmatrix}
\begin{bmatrix} 
x_1\\x_2\\x_3
\end{bmatrix}=
\begin{bmatrix} 
2x_1\\2x_2\\2x_3
\end{bmatrix}
$$

$$
\begin{bmatrix}
x_1 & x_2 & 3x_3\\
x_1 & x_2 & -3x_3\\
3x_1 & -3x_2 & -3x_3
\end{bmatrix}=
\begin{bmatrix} 
2x_1\\2x_2\\2x_3
\end{bmatrix}
$$

Solving gives $x_1, x_2 = k$ where K is any nonzero number, and $x_3=0$. This means that we have 
$$x_1 = 
\begin{bmatrix}
k\\k\\0
\end{bmatrix}
$$
which is normalized to 
$$x_1 =
\frac{1}{\sqrt{2}} 
\begin{bmatrix}
1\\1\\0
\end{bmatrix}
$$

A similar process is to be done to solve for the other two eigen vectors, being 
$$x_2 =
\frac{1}{\sqrt{3}} 
\begin{bmatrix}
1\\1\\0
\end{bmatrix}

, x_3 =
\frac{1}{\sqrt{3}} 
\begin{bmatrix}
1\\-1\\1
\end{bmatrix}

, x_2 =
\frac{1}{\sqrt{6}} 
\begin{bmatrix}
1\\-1\\-2
\end{bmatrix}
$$

