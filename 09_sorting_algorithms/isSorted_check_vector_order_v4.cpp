/*Escreva a função isSorted() que recebe um vetor de inteiros como parâmetro e retorna
verdadeiro se todos os elementos estiverem ordenados crescente ou decrescentemente, ou falso
caso contrário.
Faça a função main() que permite testar a sua*/

bool isSorted(const std::vector<int>& vec) {
    if (vec.empty() || vec.size() == 1) {
        // Um vetor vazio ou com um único elemento é considerado ordenado
        return true;
    }

    bool ascending = true;
    bool descending = true;

    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] < vec[i - 1]) {
            ascending = false;
        }
        if (vec[i] > vec[i - 1]) {
            descending = false;
        }
    }

    return ascending || descending;
}

int main() {
    // Testes com vetores diversos
    std::vector<std::vector<int>> testCases = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {1, 3, 2, 4, 5},
        {10},
        {},
        {1, 1, 1, 1, 1},
        {2, 3, 3, 3, 4, 5},
        {5, 5, 5, 4, 3, 2}
    };

    for (const auto& testCase : testCases) {
        if (isSorted(testCase)) {
            std::cout << "O vetor está ordenado." << std::endl;
        } else {
            std::cout << "O vetor não está ordenado." << std::endl;
        }
    }

    return 0;
}