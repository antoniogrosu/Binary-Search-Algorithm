
# Binary Search

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums.
If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.


## Example
**Input**:

`nums = [-1,0,3,5,9,12]`\
`target = 9`

**Output**: **4**

Explanation: `9 exists in nums and its index is 4`
## Features

- 1 <= `nums.length` <= 10^4

- -10^4 < **nums[i]** , **target** < 10^4
- All the integers in `nums` are **unique**
- `nums` is sorted in ascending order.




## My Solution

The given C++ code performs a binary search algorithm to find a target value in an array of integers named `nums` of size up to **10.001**.

The **`binarySearch`** function takes two arguments, an integer array `nums` and an integer `target`.

The function first checks the number of elements in the array `nums` that are greater than their previous element or are the first element in the array, as well as the number of elements that are less than the following element or are the last element in the array.

These counts are stored in `r` variable.

Then the function initializes two variables, `left` and `right`, for the binary search.

It repeatedly calculates the middle index `mid` using the average of the `left` and `right` indices and checks if the target value is present at that **index**.

**If it is**, the function then `return the index`.

If the target value is not found at the middle index, it adjusts either the left or the right variable based on whether the middle value is less than or greater than the target value, respectively.

If the target value is **not found** in the array, the function will `return -1.`

Overall, the algorithm performs a binary search in O(log n) time complexity to find the target value in a sorted array.

## Author

- [@antoniogrosu](https://www.github.com/antoniogrosu)

