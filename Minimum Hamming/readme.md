Algorithm : 
* The Program starts by reading integer n and It then reads n integers from the input and stores them in a vector v.
* The program then iterates over all pairs of integers in the vector v. For each pair, it calculates the Hamming distance between the two integers and adds it to a counter ans.
* hammingDistance function that takes two integers x and y as input. 
* The function calculates the XOR of x and y and stores it in xorValue. The XOR operation gives a binary number where bits are set (1) only at those places where x and y have different bits.
* The function then iterates over the bits of xorValue. For each bit, it checks if the bit is set (1) and if so, increments a counter distance. The counter distance thus gives the number of set bits in xorValue, which is the Hamming distance between x and y.
* Finally, the program prints the value of ans.
