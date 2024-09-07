# unity-assignment-multiplayer-team

## Assignment 2.A - Linked Lists (Automation)

To solve this assignment I had to create the linked list first. So I made two classes: Node and List. Each node has an integer value and a pointer to the next Node in the list. List contains the head to which all the other nodes are connected. 
Inside the List class there's the function I had to implement for this assignment. It's called Insert and it accepts a single integer as parameter. 
This is the function I was asked to implement for this assignment.
- The runtime of this insertion is O(N) where N is the length of the list.
- The function has the following structure:
- create a new node with the passed value
- if the list is empty the head of the list becomes the new node
- if the list is not empty then we move along the list with two pointers until we find a value
  that's less than the new value or we have visited all the nodes of the list

You can find the implementation of both classes in the List_Lib folder. 
To test the function I used a suite of tests using the Google_tests framework. They are small tests, I tried to keep them as readable as possible, as Robert Martin suggested in Clean Code: "What makes a clean test? Three things. Readability, readability, and readability. Read- ability is perhaps even more important in unit tests than it is in production code.".
To test the function I've tried to include many different scenarios, such as:
- adding a value to an empty list
- adding many values in ascending order
- adding many values in descending order
- adding negative values
- adding duplicates
- adding 100.000 random numbers, in this case I also print the seed that was used to generate 
  those numbers, so I can reproduce the error if the test fails
