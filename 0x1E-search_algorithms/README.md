In computer science, an algorithm is a set of steps that a computer follows in order to solve a problem or perform a task. Algorithms are usually written in a specific programming language and can be used for a variety of purposes, such as data processing, generating reports, and performing calculations.

The "O" in O notation is used to describe the performance or complexity of an algorithm. It provides a way to measure the efficiency of an algorithm by considering the amount of resources (such as time or memory) that the algorithm uses as the input size grows.

There are several types of O notation, including:

    O(1), which means that the algorithm's running time is constant and does not depend on the input size.

    O(log n), which means that the running time increases logarithmically as the input size increases.

    O(n), which means that the running time is directly proportional to the input size.

    O(n log n), which means that the running time increases as the input size increases, but at a slower rate than O(n).

    O(n^2), which means that the running time is proportional to the square of the input size.

    O(n^3), which means that the running time is proportional to the cube of the input size.

    O(2^n), which means that the running time increases exponentially as the input size increases.

O notation is often used to compare the efficiency of different algorithms that are used to solve the same problem. For example, if one algorithm has a running time of O(n) and another has a running time of O(n^2), the first algorithm is generally more efficient because it scales better as the input size increases.


Tasks
0. Linear search
mandatory

Write a function that searches for a value in an array of integers using the Linear search algorithm

    Prototype : int linear_search(int *array, size_t size, int value);
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    Your function must return the first index where value is located
    If value is not present in array or if array is NULL, your function must return -1
    Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

1. Binary search
mandatory

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

    Prototype : int binary_search(int *array, size_t size, int value);
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    Your function must return the index where value is located
    You can assume that array will be sorted in ascending order
    You can assume that value won’t appear more than once in array
    If value is not present in array or if array is NULL, your function must return -1
    You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)



2. Big O #0

What is the time complexity (worst case) of a linear search in an array of size n?


3. Big O #1

What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?



4. Big O #2


What is the time complexity (worst case) of a binary search in an array of size n?


5. Big O #3


What is the space complexity (worst case) of a binary search in an array of size n?


6. Big O #4

What is the space complexity of this function / algorithm?

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}




