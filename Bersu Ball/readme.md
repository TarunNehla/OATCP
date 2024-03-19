Algorithm : 
1. Reading input : 
    * two integer n and m.
    * two vector v and u to store n and m input values repectively.
2. Sort both vectors v and u.
3. Initialized three variables i, j, and ct to 0.
4. Start a while loop that continues as long as i is less than n and j is less than m.
    * If the absolute difference between v[i] and u[j] is less than or equal to 1, increment ct, i, and j.
    * If v[i] is less than u[j], increment i.
    * Otherwise, increment j.
5. After the loop, print the value of ct.
6. Exit the program.