#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string thousands[] = {"", "M", "MM", "MMM"};
        string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

        // Divide the number into thousands, hundreds, tens, and ones
        int thousand = num / 1000;
        int hundred = (num % 1000) / 100;
        int ten = (num % 100) / 10;
        int one = num % 10;

        // Construct the Roman numeral string
        string roman = thousands[thousand] + hundreds[hundred] + tens[ten] + ones[one];
        return roman;
    }
};

int main() {
    Solution s;
    cout << s.intToRoman(3) << endl;     // Output: III
    cout << s.intToRoman(4) << endl;     // Output: IV
    cout << s.intToRoman(9) << endl;     // Output: IX
    cout << s.intToRoman(58) << endl;    // Output: LVIII
    cout << s.intToRoman(1994) << endl;  // Output: MCMXCIV
    return 0;
}
