# Sum-and-compare-vectors
An unknown number of pairs of two or three double-precision fractional numbers are entered from the keyboard (until EOF). These pairs represent the components of vectors corresponding to the unit vectors 𝑖, j, and possibly k in a three-dimensional Cartesian coordinate space. Calculate the vector obtained by summing all the input vectors and then display all the vectors whose magnitude is greater or equal to the sum vector, in the order they were entered, in the format vxi + vyj + vzk.

Input data
An unknown number of pairs of two or three double-precision fractional numbers, the numbers within a pair separated by a semicolon; pairs separated by one or more spaces.

Output data
The vectors from the input with a magnitude greater or equal to the magnitude of the sum vector will be displayed on separate lines, in the format (\<vx\>i+\<vy\>j+\<vz\>k), with values displayed to three decimal places. Note, if vy or vz is negative, the plus sign between components will be replaced by a minus sign.

Example
Input
3;1  -2;-1;1

Output
3.000i+1.000j
-2.000i-1.000j+1.000k
