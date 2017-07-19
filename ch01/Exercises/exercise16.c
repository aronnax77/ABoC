/* In the previous exercise we used the algorithm suggested to us by Donald
   Knuth to write a program that computes running averages.  In this 
   exercise we want to use that program to see what happens when sum gets 
   too large to be represented in the machine. (See Section 3.6, "Floating 
   Point Types," on page 119, for details about the value a double can 
   hold.)  Create a file, say data, and put the following numbers into it:

	1e308	1	1e308	1	1e308

   Run the program, redirecting the input so that the numbers in your file 
   data get read in.  Do you see the advantage of the better algorithm?




   Interestingly by the third iteration of the for loop the Naive Avg gave
   inf as the output whereas the algorithm presented by Donald Knuth was
   able to continue to add data and give a final solution of 6e307. */
