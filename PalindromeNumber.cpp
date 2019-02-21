#Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

#Example 1:

#Input: 121
#Output: true
#Example 2:

#Input: -121
#Output: false
#Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
#Example 3:

#Input: 10
#Output: false
#Explanation: Reads 01 from right to left. Therefore it is not a palindrome.



class Solution {
public:
    bool isPalindrome(int x) {
        string word = to_string(x);
        int head = 0;
        int tail = word.length() - 1;
        for(int counter = 0; counter < word.length(); counter ++){
            if(word[head] != word[tail]){
                return false;
            }
            head++;
            tail--;
        }
        return true;
    }
};
