# Implement-CPP-Arrays-and-Strings
Aim:
To study and implement C++ arrays and strings

Software used:
Mingw compiler, visual studio code, online C++ compiler

Program-1 Printing elements of array
Explanatiom of code: This program takes the number of elements as input, dynamically creates an array of that size, and stores user-provided values in it. Using a loop, it reads each element from the user and saves it in the array. After collecting all inputs, it displays the stored elements using another loop. The use of sizeof(a)/sizeof(int) ensures the array length is correctly calculated. The program demonstrates basic array input-output handling in C++.

Algorithm:

Start
Declare an integer variable b to store the number of elements
Prompt the user to enter the number of elements
Read the value of b
Declare an integer array a of size b
Compute the number of elements in array a using sizeof(a)/sizeof(int) and store it in o
Repeat steps 8–9 for i from 0 to o - 1
Prompt the user to input element number i+1
Read the value into array element a[i]
Display the message "elements are: "
Repeat step 12 for i from 0 to o - 1
Output the element a[i] followed by a space
End
Program-2 Searching an element in array
Explanatiom of code: This program searches for a specific number in a fixed array of 10 integers. The user is prompted to enter a number to search. The program compares the input with each element of the array using a for loop. If the number is found, it prints the position and exits early using break. A flag variable y is used to track whether the number was found. If not found, a corresponding message is displayed. It demonstrates simple linear search.

Algorithm:

Start
Declare & initialize array
Input search element
Set found = false
Loop to compare array elements
If match → show position & break
If not found → show message
End
Program-3 Calculating sum and avg of the elements in Array
Explanatiom of code: This program calculates the sum and average of user-input integers. It first asks the user for the number of elements, then stores them in an array. Using a loop, it collects all input values and calculates the sum by adding each element. Then it computes the average by dividing the total sum by the number of elements. The results are printed as output. It demonstrates dynamic array usage and basic arithmetic operations using loops and I/O statements.

Algorithm:

Start
Accept the number of elements from the user
Declare an array of that size
Use a loop to input each element into the array
Initialize a sum variable to 0
Use a loop to add each array element to the sum
Display the sum
Calculate and display the average by dividing the sum by the number of elements
End
Program-4 To find the max and min term of Array
Explanatiom of code: his program finds the maximum and minimum values from a set of integers entered by the user. It first asks for the number of elements and stores them in a dynamically created array. The initial max (s) and min (n) are set to the first element. The program then iterates through the array, updating s if a higher value is found and n if a lower one is found. Finally, it prints the maximum and minimum values. It demonstrates conditional comparison with loops.

Algorithm:

Start
Accept the number of elements from the user
Create an array with that size
Take input values and store in the array
Initialize max and min with the first element
Loop through the array to find max and min
Display the maximum and minimum values
End
Program-5 String printing
Explanation of the code:

This C++ code demonstrates four ways to declare and display strings. It defines three character arrays (a, b, c) using C-style string formats with explicit or implicit null terminators, and one C++ string object d. The program prints a heading followed by each string. All outputs display correctly because each format properly terminates with '\0'. This showcases the flexibility in string declaration, comparing manual character arrays and modern string usage. Useful for grasping string handling in C++.

Algorithm:

Start
Initialize character arrays and string:
Display heading
Print each string variable
End
Program-6 String concatination
Explanation of the code:

This C++ program takes two user-input strings and combines them. It begins by declaring three string variables: a, b, and c. After prompting the user, it stores two inputs in a and b. It then concatenates a and b with a space between and assigns the result to c. Finally, it displays the concatenated string. This code is a simple illustration of using the + operator for string manipulation and showcases basic input/output operations in C++.

Algorithm:

Start
Declare String Variables
Prompt for Input
Concatenate Strings
Display Result
End
Program-7 String reverse
Explanation of the code:

This C++ program reverses a user-input string. It declares a string variable a, reads input, and stores its length in v. Then it displays a message and loops from i = 0 to v, printing a(v - i). However, this logic accesses one character beyond valid range, as a[v] is out of bounds. To properly reverse the string, the loop should print a(v - i - 1). It illustrates input handling and string manipulation.

Algorithm:

Start
Declare a string variable a
Prompt the user
Take input
Read the string into variable a
Get the length of the string
Reverse and display characters using loop
End
Program-8 Pallindrome of the string
Explanation of the code:

This C++ program checks whether an entered string is a palindrome. It starts by reading a string into variable a, then calculates its length and stores it in v. Using a for loop, it compares characters from the front and back: a[i] with a[v - i - 1]. If any mismatch is found, it sets flag d = 5 and exits the loop. After the loop, it checks if d is still zero. If yes, it means the string reads the same forward and backward, so it prints “string is palindrome.” Otherwise, it prints “string is not palindrome.”

Algorithm:

Start
Declare a string variable a
Prompt user for input
Read string input into a
Initialize flag variable
Set integer d = 0 to track palindrome status
Get string length
Store length of string a in variable v
Loop through the first half of the string
Compare a[i] with a[v - i - 1]
If they are not equal:
Set d = 5 (non-zero indicates not a palindrome)
Break out of the loop
Check result using if else
End
Conclusion
Implementing arrays and strings in C++ is fundamental for handling collections of data and text efficiently. Arrays offer fixed-size, index-based storage, ideal for numeric and structured data operations, while strings provide dynamic and intuitive manipulation for textual data. Understanding their differences—such as memory allocation, syntax, and built-in functionalities—empowers programmers to choose the right tool for a given task. With C++'s support for both C-style arrays and modern string classes, developers gain flexibility, control, and performance. Mastering these concepts builds a strong foundation for solving real-world problems and developing more complex programs with confidence and precision.
