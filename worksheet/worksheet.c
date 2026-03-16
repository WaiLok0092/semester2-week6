/**
 * Week 6 Worksheet - Functions Practice
 *
 * This worksheet tests your understanding of:
 * - Pass by value (returning results)
 * - Pass by reference (modifying via pointers)
 * - Arrays as function arguments
 * - Output parameters
 *
 * Instructions:
 * 1. Implement each function according to its documentation
 * 2. Compile and run to test: gcc worksheet.c -o worksheet && ./worksheet
 * 3. Acutest will show which tests pass/fail
 *
 * Run options:
 *   ./worksheet              - Run all tests
 *   ./worksheet --list       - List all tests
 *   ./worksheet test_name    - Run specific test
 */

#include "acutest.h"

/* ============================================================
 * FUNCTION PROTOTYPES - Do not modify these
 * ============================================================ */

int add_values(int a, int b);
void swap_values(int *a, int *b);
int sum_array(int *arr, int n);
void reverse_array(int *arr, int n);
double average(int *arr, int n);
int find_max(int *arr, int n, int *index);

/* ============================================================
 * STUDENT IMPLEMENTATIONS - Complete these functions
 * ============================================================ */

/**
 * Function 1: add_values
 *
 * Returns the sum of two integers.
 * This demonstrates simple pass-by-value with a return.
 *
 * @param a First integer
 * @param b Second integer
 * @return The sum a + b
 *
 * Example: add_values(3, 4) returns 7
 */
int add_values(int a, int b) {
  // TODO: Implement this function
  return a + b; // Replace this
}

/**
 * Function 2: swap_values
 *
 * Swaps two integers using pointers (pass by reference).
 * After calling, *a should have the original value of *b,
 * and *b should have the original value of *a.
 *
 * @param a Pointer to first integer
 * @param b Pointer to second integer
 *
 * Example:
 *   int x = 5, y = 10;
 *   swap_values(&x, &y);
 *   // Now x == 10, y == 5
 */
void swap_values(int *a, int *b) {
  // TODO: Implement this function
  // Hint: You'll need a temporary variable
  int temp = *a;
  *a = *b;
  *b = temp;
}

/**
 * Function 3: sum_array
 *
 * Returns the sum of all elements in an array.
 * This demonstrates arrays as pointers in function arguments.
 *
 * @param arr Pointer to the first element of the array
 * @param n   Number of elements in the array
 * @return    Sum of all elements
 *
 * Example: sum_array([1,2,3,4,5], 5) returns 15
 */
int sum_array(int *arr, int n) {
  // TODO: Implement this function
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum; // Replace this
}

/**
 * Function 4: reverse_array
 *
 * Reverses an array in place.
 * The first element becomes the last, etc.
 *
 * @param arr Pointer to the first element of the array
 * @param n   Number of elements in the array
 *
 * Example:
 *   int arr[] = {1, 2, 3, 4, 5};
 *   reverse_array(arr, 5);
 *   // Now arr[] == {5, 4, 3, 2, 1}
 *
 * Hint: Swap elements from both ends, moving toward the middle
 */
void reverse_array(int *arr, int n) {
  // TODO: Implement this function
  for (int i = 0; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
}

/**
 * Function 5: average
 *
 * Returns the average of array elements as a double.
 * This demonstrates returning a different type than the input.
 *
 * @param arr Pointer to the first element of the array
 * @param n   Number of elements in the array
 * @return    Average as a double
 *
 * Example: average([1,2,3,4,5], 5) returns 3.0
 * Example: average([1,2], 2) returns 1.5
 */
double average(int *arr, int n) {
  // TODO: Implement this function
  // Hint: Be careful with integer division!
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return (double)sum / n; // Replace this
}

/**
 * Function 6: find_max
 *
 * Finds the maximum value in an array AND its index.
 * The maximum value is returned, and the index is stored
 * in the output parameter.
 *
 * @param arr   Pointer to the first element of the array
 * @param n     Number of elements in the array
 * @param index Pointer to store the index of the maximum (output parameter)
 * @return      The maximum value
 *
 * Example:
 *   int arr[] = {3, 7, 2, 9, 4};
 *   int idx;
 *   int max = find_max(arr, 5, &idx);
 *   // max == 9, idx == 3
 */
int find_max(int *arr, int n, int *index) {
  int max = arr[0];
  *index = 0;

  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
      *index = i;
    }
  }

  return max;
}