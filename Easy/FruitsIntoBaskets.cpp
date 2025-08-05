#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size(); //número de frutas

        vector<bool> usado(n, false); // vetor para marcar frutas usadas

        int count = 0; // contador de frutas não colocadas

        for (int i=0; i < n; i++){
            bool podeUsar = false; // esta fruta ainda não foi colocada
    
            for (int j = 0; j < n; j++) {
                if(!usado[j] && baskets[j] >= fruits[i]){
                    // encontramos um cesto que:
                // - ainda não foi usado (!usado[j])
                // - tem espaço suficiente (cestos[j] >= frutos[i])

                    usado[j] = true; // marca o cesto como usado
                    podeUsar = true; // esta fruta pode ser colocada
                    break; // sai do loop, pois já encontramos um cesto para esta fruta

                }

            }

            if (!podeUsar) {
                count++; // se não encontrou cesto, incrementa o contador de frutas não colocadas
            }
        }

        return count; // retorna o número de frutas não colocadas

    }
};


int main() {
    while(true){
        int n;
        cout << "Quantas frutas? ";
        cin >> n;

        if (n <= 0) {
            cout << "Número de frutas deve ser positivo.\n";
            continue;
        }

        vector<int> fruits(n), baskets(n);

        cout << "Digite os tamanhos das frutas:\n";
        for (int i = 0; i < n; i++) {
            cin >> fruits[i];
        }
        cout << "Digite os tamanhos dos cestos:\n";
        for (int i = 0; i < n; i++) {
            cin >> baskets[i];
        }

        Solution sol; // cria objeto da classe
        int resultado = sol.numOfUnplacedFruits(fruits, baskets); // chama o método
        cout << "Número de frutas não colocadas: " << resultado << "\n";

        char continuar;
        cout << "Deseja continuar? (s/n): ";
        cin >> continuar;
        if (continuar != 's' && continuar != 'S') {
            break; // sai do loop se o usuário não quiser continuar
        }

    }



    return 0;
}