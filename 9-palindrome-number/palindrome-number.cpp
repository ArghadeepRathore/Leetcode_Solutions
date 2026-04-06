class Solution {
public:
   bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) return false;

    long long reversed = 0;
    int original = x;

    // Reverse the number
    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    // Compare reversed with original
    return reversed == original;
}
};