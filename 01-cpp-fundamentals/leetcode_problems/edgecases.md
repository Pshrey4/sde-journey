// ================= EDGE CASE CHECKLIST (DETAILED) =================
//
// Use this after solving any problem to verify correctness.
//
// ---------------------------------------------------------------
// 1. EMPTY INPUT
// ---------------------------------------------------------------
// - Array: []
// - String: ""
// - No elements present
// - Does code handle no iteration properly?
//
// ---------------------------------------------------------------
// 2. SINGLE ELEMENT / MINIMUM INPUT
// ---------------------------------------------------------------
// - Array: [x]
// - String: "a"
// - Number: single digit
// - Does logic still work for smallest valid input?
//
// ---------------------------------------------------------------
// 3. ZERO CASE
// ---------------------------------------------------------------
// - Input = 0
// - Does it behave differently?
// - Example:
//   - Palindrome → 0 is valid
//   - Loops may not execute
//
// ---------------------------------------------------------------
// 4. NEGATIVE VALUES
// ---------------------------------------------------------------
// - Input < 0 (e.g., -1, -100)
// - Are negatives allowed?
// - Should return false / ignore / handle separately?
//
// ---------------------------------------------------------------
// 5. MAXIMUM / LARGE INPUT
// ---------------------------------------------------------------
// - Very large n or values
// - Performance issues?
// - Time complexity okay?
// - Risk of overflow?
//
// ---------------------------------------------------------------
// 6. BOUNDARY INDEXING ⚠️ (MOST COMMON BUG)
// ---------------------------------------------------------------
// - First index: i = 0 handled?
// - Last index: i = n-1 handled?
// - Loop condition correct?
//   - i < n vs i <= n
// - Any out-of-bounds access?
//
// ---------------------------------------------------------------
// 7. DUPLICATE VALUES
// ---------------------------------------------------------------
// - Input: [1,1,1]
// - Does logic assume unique elements?
// - Does it break with duplicates?
//
// ---------------------------------------------------------------
// 8. ALL ELEMENTS SAME
// ---------------------------------------------------------------
// - Input: [x,x,x,x]
// - Edge case for comparison logic
//
// ---------------------------------------------------------------
// 9. SORTED INPUT
// ---------------------------------------------------------------
// - Input already sorted
// - Does algorithm assume unsorted?
//
// ---------------------------------------------------------------
// 10. REVERSE SORTED INPUT
// ---------------------------------------------------------------
// - Input sorted in descending order
// - Example: [5,4,3,2,1]
// - Does logic still hold?
//
// ---------------------------------------------------------------
// 11. PATTERN-SPECIFIC CASES
// ---------------------------------------------------------------
// - Depends on problem type:
//   - Numbers ending with 0 → 10, 100
//   - Palindromes → 121, 1001
//   - Strings with spaces → "   "
//   - Repeated patterns
//
// ---------------------------------------------------------------
// 12. DATA TYPE LIMITS / OVERFLOW
// ---------------------------------------------------------------
// - INT_MAX, INT_MIN
// - Large multiplication or reversal
// - Will value exceed int range?
//
// ---------------------------------------------------------------
// 13. INVALID / UNEXPECTED INPUT (ADVANCED)
// ---------------------------------------------------------------
// - Null input (later in DSA / system design)
// - Unexpected format
// - Usually ignored in basic problems
//
// ---------------------------------------------------------------
// QUICK CHECK (MENTAL SHORTCUT)
// ---------------------------------------------------------------
// Size? Empty? One element? Zero? Negative?
// Boundary? Duplicates? Pattern? Overflow?
//
// ===============================================================
