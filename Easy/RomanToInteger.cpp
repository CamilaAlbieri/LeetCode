/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

- I can be placed before V (5) and X (10) to make 4 and 9. 
- X can be placed before L (50) and C (100) to make 40 and 90. 
- C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.


Constraints:

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].


1. Criar um mapa que associa cada caractere ao seu valor
2. Percorrer a string da esquerda para a direita
3. Comparar cada valor com o próximo:
       Se for o último caractere ou o valor atual é maior ou igual ao próximo → soma
       Caso contrário (o valor atual for menor que o próximo) → subtrai
*/
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int n = s.size(), total = 0; 
        for (int i = 0; i < n; i++){
            int valorAtual = romanMap[s[i]]; // pega o valor do caractere atual

            if (i == n-1 ){
                total = total + valorAtual; // se for o último caractere, soma
            }else if( (valorAtual < romanMap[s[i+1]])){
                total = total - valorAtual; // subtrai o valor atual
                
            }else{
                total = total + valorAtual; 
            }
        }

    return total;
};

int main() {

    string s;
    cout << "Digite o numero romano: ";
    cin >> s;

    cout << "Valor decimal: " << romanToInt(s) << endl;
    return 0;


    return 0;
}