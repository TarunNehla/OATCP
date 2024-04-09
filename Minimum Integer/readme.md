Algorithm : 
* The main function reads a string s and an integer k from the input.
* It then calls the solve function with s and k as arguments.
* The solve function uses a stack to keep track of the characters in the string. 
* It iterates over the string, pushing characters onto the stack, but if the current character is less than the top of the stack and k is greater than 0, it pops characters from the stack until the top of the stack is not greater than the current character or k becomes 0.
* After iterating over the string, if k is still greater than 0, it pops k elements from the stack.
* It then constructs a string a from the remaining elements in the stack, reverses it, and removes leading zeros.
* The solve function returns the resulting string, or "0" if the string is empty. The main function then prints this result.