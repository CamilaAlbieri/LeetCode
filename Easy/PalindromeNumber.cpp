#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(long x) {
        if(x<0){
            return false; // números negativos não são palíndromos
        }

        long original = x; // guarda o valor original
        long reversed = 0; // variável para armazenar o número invertido

        while (x > 0){
            long digit = x % 10; // pega o último dígito
            reversed = reversed * 10 + digit; // constrói o número invertido
            x /= 10; // remove o último dígito do número original
        }
        
        return original == reversed; // compara o número original com o invertido
    }
};



int main() {

    long num;

    cin >> num;

    if (Solution().isPalindrome(num)) {
        cout << num << " é um palíndromo." << endl;
    } else {
        cout << num << " não é um palíndromo." << endl;
    }

    return 0;
}