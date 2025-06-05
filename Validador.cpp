#include <iostream>
#include <string>

bool identificaBandeira(const std::string& numeroCartao) {
    if (numeroCartao.length() >= 13 && numeroCartao.length() <= 16) {
        if (numeroCartao[0] == '4') {
            std::cout << "Bandeira: Visa" << std::endl;
            return true;
        } else if (numeroCartao.substr(0, 2) >= "51" && numeroCartao.substr(0, 2) <= "55") {
            std::cout << "Bandeira: Mastercard" << std::endl;
            return true;
        } else if (numeroCartao.substr(0, 2) == "34" || numeroCartao.substr(0, 2) == "37") {
            std::cout << "Bandeira: American Express" << std::endl;
            return true;
        }
    }
    std::cout << "Bandeira desconhecida ou número inválido" << std::endl;
    return false;
}

int main() {
    std::string numeroCartao;
    std::cout << "Digite o número do cartão: ";
    std::cin >> numeroCartao;

    identificaBandeira(numeroCartao);
    return 0;
}
