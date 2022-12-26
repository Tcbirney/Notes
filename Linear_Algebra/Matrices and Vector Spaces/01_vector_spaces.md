# Vector Spaces


## Linear Vector Spaces

A set of vectors is said to form a linear vector space if the set of the vectors is closed under communicative and associative addition. Meaning

$$a+b = b+a$$
$$(a+b) + c = a + (b+c)$$

And if the set is closed under multiplication by a scalar distributively and associatively. Meaning
$$\lambda (a+b) + \lambda(a) +\lambda(b)$$
$$(\lambda + \mu)(a) + \lambda a + \mu a$$
$$\lambda (\mu a) = (\lambda \mu)$$

Where $\lambda$ and $\mu$ are scalars.

There exists a zero vector __0__ such that  a+__0__ = a for all $a$.

There exists a additive inverse $-a$ for each $a$ such that $a +(-a) = 0$

If our scalars are restriced to only the Real plane, then we will obtain a real vector space. If we allow the scalars to be complex then our vectors will make a complex vector space.

## Spans
The span of a vector set is the set of all vectors which can be written as a linear combination of any combination of vectors from the original set. For example
$$\R_2 \textrm{ is the span of the vector set } (

\begin{bmatrix}
0\\
1\\
\end{bmatrix}

, 
\begin{bmatrix}
1\\
0\\
\end{bmatrix}
)
$$ 


## Linearly Independent Vector Spaces

A set of vector spaces $a_1 v_1, \dots, a_n v_n$ is said to be linearly independent if the equation $a_1 v_1 + \dots + a_n v_n$ only has the trivial solution where $a_1$ to $a_n$ are 0

A set of vectors which is not linearly independent is called linearly depenedent and has the property that at least one vector in the set can be expressed as a linear combination of any of the other vectors.


## Dimensionality of a Vector Space

The dimensionality of a vector space is the number of linearly independent vectors in the vector space. If there are n linearly independent vectors in the vector space then the dimensionality of the vector space is n

## Basis of Vector Space

If V is an N dimensional vector space then any set of N linearly independent vectors $ e_1, \dots, e_n $ in V forms a basis for V. For any vector x in V then is can be expressed as a linear conmination of basis vectors shown below.
$$ x = \sum_{i=1}^N x_i e_i $$


# Inner Product

The inner product of two vectors a and b denoted by $<A|B>$ is a scalar function of a and b. It generalizes the notion of a dot product to more abstract spaces.

Inner products satisfies the following properties.
$$
<a|b> = <b|a>\\
<a|(\lambda b + \mu c)> = <a|\lambda b> + <a|\mu c> = \lambda <a|b> + \mu <a|c>\\
$$

Two vectors in a general vector space are said to be orthogonal if $<a|b> = 0$

The norm of a vector a is given by $||a|| = <a|a>^{\frac{1}{2}}$

A basis of unit vectors $e_1, \dots, e_n$ of an n dimensional vector is orthonormal if $<e_i, e_j> = \delta_{ij}$ and $\delta_{ij} = 0$ if $i==j$ and 1 otherwise.

## Useful Inequalities for Inner Products

__Chauchy Schawrz's Inequality__

$$|<a|b>| \le ||a|| ||b||$$

__Triangle Inequality__

$$||a+b|| \le ||a|| + ||b||$$

__Parallelogram Equality__

$$||a+b||^2 ||a-b||^2 = 2(||a||^2 + ||b||^2)$$

__Bessel's Inequality__

Cosider an orthonormal basis if unit vectors $e_1, \dots, e_n$ in an N-dimensional vector space, then for any vector a
$$||a||^2 \ge \sum_{i} |<e_i|a>|^2$$






