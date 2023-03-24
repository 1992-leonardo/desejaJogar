#include <iostream>

int main()
{
    std::cout << "Deseja participar do nosso jogo? " << std::endl;
    std::cout << "Se sim digite (S) e se nao digite (N) " << std::endl;
    char resposta;
    std::cin >> resposta;

    while(true)
    {
        if(resposta == 'S' || resposta == 's')
    {
        std::cout << "Legal, vamos dar inicio ao nosso jogo! " << std::endl;
        std::cout << "*____________________________________* " << std::endl;
        std::cout << "" << std::endl;
        break;  
    } 
    else if(resposta == 'N' || resposta == 'n')
    {
        std::cout << "Ah que pena, nos vemos em outra outra hora entao! " << std::endl;
        std::cout << "Saindoooooooooooooooooooooooooooooooooooooooooooo " << std::endl;
        std::cout << "" << std::endl;
        exit(0);
        break;
    }
    }
    std::cout <<"***************************** " << std::endl;
    std::cout <<"Seja bem vindo ao nosso jogo! " << std::endl;
    std::cout <<"***************************** " << std::endl;
    
}