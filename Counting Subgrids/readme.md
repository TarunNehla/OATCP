Algorithm : 
* The program starts by reading an integer n from the input, which represents the size of the grid. It creates a 2D vector v of size n by n/N (rounded up), where N is a predefined constant.
* The program reads n by n integers from the input, representing the colors of the cells in the grid. It stores these colors in the 2D vector v, with each integer being stored in a block of N bits.
* It then calls the function solve with v, n, and N as arguments. This function calculates the total number of subgrids in the grid that are entirely black.
* The function solve works by iterating over each pair of rows in the grid. For each pair of rows, it counts the number of columns where both rows have a black cell. It then adds the number of subgrids that can be formed from these columns to the total count of black subgrids.
* Finally, the program outputs the total number of black subgrids and ends.