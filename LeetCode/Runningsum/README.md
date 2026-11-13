# Running Sum of 1d Array

## Problem Statement

Given an array `nums`. We define a running sum of an array as:

```
runningSum[i] = sum(nums[0] ... nums[i])
```

Return the running sum of `nums`.

### Examples

**Example 1**

```
Input:  nums = [1,2,3,4]
Output: [1,3,6,10]
```
Explanation: `[1, 1+2, 1+2+3, 1+2+3+4]`

**Example 2**

```
Input:  nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
```
Explanation: `[1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1]`

**Example 3**

```
Input:  nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
```

### Constraints

- `1 <= nums.length <= 1000`
- `-10^6 <= nums[i] <= 10^6`

---

## Intuition (Simple Baat)

Running sum ka matlab hai: **har index tak ka total**.

Ek important observation:

```
runningSum[i] = runningSum[i-1] + nums[i]
```

Yani agar mujhe pichla answer pata hai, to naya answer sirf **pichla answer + current number** hai. Dobara shuru se jodne ki zaroorat nahi.

Example: `nums = [1,2,3,4]`

| Index | nums[i] | Pichla running sum | Naya running sum |
|-------|---------|--------------------|------------------|
| 0     | 1       | -                  | 1                |
| 1     | 2       | 1                  | 1 + 2 = 3        |
| 2     | 3       | 3                  | 3 + 3 = 6        |
| 3     | 4       | 6                  | 6 + 4 = 10       |

---

## Approach 1: Brute Force

**Idea:** Har index `i` ke liye, 0 se `i` tak loop chalao aur sab add karo.

```cpp
vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += nums[j];
        }
        ans[i] = sum;
    }
    return ans;
}
```

- **Time Complexity:** O(n²) (loop ke andar loop)
- **Space Complexity:** O(n) (naya array `ans`)

Problem: Har baar purana kaam dobara ho raha hai. Isko improve kar sakte hain.

---

## Approach 2: Better (Prefix Sum, New Array)

**Idea:** Pichla answer use karo. Ek hi loop.

```cpp
vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    ans[0] = nums[0];
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] + nums[i];
    }
    return ans;
}
```

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

---

## Approach 3: Optimal (In-place)

**Idea:** Naya array banane ki zaroorat nahi. Same `nums` array ko hi update kar do.

```cpp
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};
```

- **Time Complexity:** O(n)
- **Space Complexity:** O(1) (extra space nahi use hui)

---

## Code Line-by-Line Explanation

```cpp
for (int i = 1; i < nums.size(); i++) {
```
Hum index `1` se start karte hain, kyun ke index `0` ka running sum already khud `nums[0]` hi hota hai.

```cpp
    nums[i] += nums[i - 1];
```
Current number mein pichla running sum add kar do. Ab `nums[i]` mein index `i` tak ka total aa gaya.

```cpp
return nums;
```
Ab poora array running sum ban chuka hai, to wahi return kar do.

---

## Dry Run

`nums = [3,1,2,10,1]`

| i | Kaam | nums after |
|---|------|------------|
| start | - | [3, 1, 2, 10, 1] |
| 1 | 1 + 3 = 4 | [3, 4, 2, 10, 1] |
| 2 | 2 + 4 = 6 | [3, 4, 6, 10, 1] |
| 3 | 10 + 6 = 16 | [3, 4, 6, 16, 1] |
| 4 | 1 + 16 = 17 | [3, 4, 6, 16, 17] |

**Output:** `[3,4,6,16,17]`

---

## Complexity Summary

| Approach | Time | Space |
|----------|------|-------|
| Brute Force | O(n²) | O(n) |
| Prefix Sum (new array) | O(n) | O(n) |
| In-place (Optimal) | O(n) | O(1) |

## Key Takeaways

- Pattern: `current answer = pichla answer + current element`
- Isko **Prefix Sum** kehte hain. Ye DSA mein bohot kaam aata hai (subarray sum, range queries, etc.)
- Jab pichla result use ho sakta ho, to dobara se calculate mat karo.
- Constraints chhote hain (`n <= 1000`) to int kaafi hai: max sum = 1000 × 10^6 = 10^9, jo `int` ki limit (~2.1 × 10^9) ke andar hai.
