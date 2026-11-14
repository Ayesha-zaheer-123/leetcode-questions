
# Concatenation of Array

## Problem Statement

Given an integer array `nums` of length `n`, create an array `ans` of length `2n` where:

- `ans[i] == nums[i]`
- `ans[i + n] == nums[i]`

for `0 <= i < n`.

In simple words, we have to concatenate the given array with itself and return the resulting array.

## Example 1

**Input:**
```cpp
nums = [1, 2, 1]
```

**Output:**
```cpp
[1, 2, 1, 1, 2, 1]
```

## Constraints

- `n == nums.length`
- `1 <= n <= 1000`
- `1 <= nums[i] <= 1000`

---
