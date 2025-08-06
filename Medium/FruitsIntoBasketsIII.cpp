/*
Problema resumido:
- Você tem um vetor de frutas → frutas[i] = quantidade da fruta i
- Você tem um vetor de cestos → cestos[j] = capacidade do cesto j

Regras:
- Cada fruta vai para o primeiro cesto disponível com capacidade >= fruta
- Cada cesto só pode ser usado uma vez
- Se uma fruta não couber em nenhum cesto, ela fica de fora
- No final, você deve retornar quantas frutas ficaram de fora

Restrições:

- n == frutas.comprimento == cestas.comprimento
    Você pode ter até 100.000 frutas e 100.000 cestos.
        Isso quer dizer que sua solução precisa ser:
        No máximo O(n log n) → para funcionar dentro do limite de tempo (~1 segundo).
        Evitar loops aninhados O(n²), que seriam lentos demais.

- 1 <= n <= 105
- 1 <= frutas[i], cestas[i] <= 109

*/

#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& frutas, vector<int>& cestos) {
        
    }
};


int main() {

    


    return 0;
}