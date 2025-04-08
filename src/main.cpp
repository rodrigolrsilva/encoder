#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <math>
#include <mutex>
#include <thread> //std::thread
//
// objetivo: input é um símbolo A e o programa mostra qual é o correspondente em binário, e no decoder dou bits e quero símbolo
// ou seja se usei codificador primeiro e depois joguei output dele no decoder vai dar a mesma coisa
// 
// criar custom data type que seja binário para não precisar fazer 0bxxxxx? ou bitset  https://stackoverflow.com/questions/46354463/binary-data-type-c
//https://stackoverflow.com/questions/28918861/is-there-a-pre-defined-built-in-function-to-convert-a-number-to-its-binary-forma
//
//hexa teria alguma utilidade aqui? talvez p/ performance?
//fazer classes pra cada tipo de codificação? equilibrar legibilidade e performance (mais classes conectadas por headers talvez tenham melhor performance? pré-compilado, constexpr)
// se fosse classes poderia ter coder e decoder dentro de cada em vez de um milhão de funções aqui
//algum design pattern útil aqui?
//usar stop bit = 1 como padrão





//uma função code e outra decode para cada ou uma abstrata que daí é implementada pelo code e decode? golomb_code, golomb_decode, alguma lógica seria repetida em ambas? e a performance de herdar?
//usuário insere um ou mais símbolos OU codewords(binários)
//faz sentido usar threads nisso?

//não esquecer de instanciar classes

int main()
{
	
	enum validos = {1, 2, 3, 4, 0};
	cout << "Escolha um dos métodos de codificação:\n1 - Golomb\n2 - Elias-Gamma\n3 - Fibonacci/Zeckendorf\n4 - Huffman\n0 - Sair";
	int escolha << cin;
	//validação de entrada
	while (escolha != validos.member) {cout<<"Valor inválido, tente novamente: "; escolha << cin};

	cout << "Quer codificar (C) ou decodificar (D)?\n";
	char tipo_operacao << cin;
	while (tipo_operacao != ('C' || 'D')) {cout<<"Valor inválido, tente novamente: "; tipo_operacao << cin};

	std::variant<int, std::string> informacao;//melhor usar template?
	cout << "Insira os dados: ";
	informacao << cin;
	while (*informacao < 0) {cout<<"Valor inválido, tente novamente: "; informacao << cin};//considera string int ou tenho que converter?

	case (escolha == 1){
		tipo_operacao == 'C' ? (for(auto i : input_array){input_array[i].golomb_code()}) 
		: (cout<< "Qual é o divisor K? " int divisor_input << cin; golomb_decode(divisor_input);)
	}
	case (escolha == 2){
		tipo_operacao == 'C' ? elias_code() : elias_decode();
	}
	case (escolha == 3){
		tipo_operacao == 'C' ? fibo_code() : fibo_decode();
	}
	case (escolha == 4){
		tipo_operacao == 'C' ? huff_code() : huff_decode();
	}
	default {cout << "Algo deu errado, tente novamente."}
	//input símbolos usuário
	
}
