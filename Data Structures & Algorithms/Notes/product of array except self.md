## Product of Array Except Self

## Pattern

Array → Prefix Product + Suffix Product

## Problem

Return an array where each element is the product of all elements except itself, without using division.

## Recognition Clue

Answer[i] = Left Product × Right Product
Nested loops → O(n²)
Prefix + Suffix → O(n)

## Algorithm

Create an answer array initialized with 1.
Traverse left to right and store the product of elements to the left of each index.
Initialize suffix = 1.
Traverse right to left and multiply each answer by the suffix product.
Update the suffix product using the current element.
Return the answer array.

## Pseudocode

Initialize ans with 1

prefix = 1
For i = 0 to n-1:
ans[i] = prefix
prefix = prefix \* nums[i]

suffix = 1
For i = n-1 to 0:
ans[i] = ans[i] _ suffix
suffix = suffix _ nums[i]

Return ans

## Complexity

Time: O(n)
Extra Space: O(1), excluding the output array.

## Mistake / Learning

❌ Brute force with nested loops → O(n²).
✅ Prefix + suffix products → O(n).
Division is not allowed.
First pass stores the left product.
Second pass multiplies by the right product.
Update suffix after multiplying it with ans[i].

## 1-Minute Interview Explanation 🎤

“The problem asks us to find the product of all elements except the current element, without using division.

The brute-force approach uses nested loops and takes O(n²) time.

To optimize it, I use prefix and suffix products. In the first pass, I store the product of all elements to the left of each index. In the second pass, I traverse from right to left and multiply each answer by the product of elements to its right.

This gives us O(n) time complexity and O(1) extra space, excluding the output array.”

## Revision Trick (30 sec)

Left Product
↓
Right Product
↓
Multiply
↓
Final Answer
