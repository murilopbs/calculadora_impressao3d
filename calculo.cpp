#include <ios>
#include <iostream>

int main() {
    // Variáveis do preço da energia elétrica -> Brasília
    const float valorImpressaoHora_reais = 0.081; // 120W da 8.1 centavos a hora
    
    // Variáveis do preço
    float precoFilamento_kg = 0;
    
    // Variáveis de consumo
    int tempoHoras;
    int tempoMinutos;
    float filamentoUtilizado_gramas;

    // pega as informações do usuário
    std::cout << "Qual o preço total do filamento em quilogramas: \n";
    std::cin >> precoFilamento_kg; 
    std::cout << "Qual a quantidade total de filamento utilizado em gramas: \n";
    std::cin >> filamentoUtilizado_gramas;
    std::cout << "Qual o tempo total das horas de impressão: \n";
    std::cin >> tempoHoras;
    std::cout << "Qual o tempo total das horas de impressão: \n";
    std::cin >> tempoMinutos;

    // realiza os cálculos
    float tempoTotalHoras = tempoHoras + (tempoMinutos / 60.0);
    float custoFilamento = (filamentoUtilizado_gramas * precoFilamento_kg) / 1000 ;
    float custoEnergia = valorImpressaoHora_reais * tempoTotalHoras;
    float precoTotal = custoFilamento + custoEnergia;

    std::cout.precision(2);
    std::cout << "Preço total da impressão: " << std::fixed << precoTotal<< "\n";

    return 0;
}
