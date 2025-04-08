//nunca pode ocorrer que divisor>dividendo ou vai dar divisão por 0, adicionar verificação pra isso, talvez criar uma exceção (comparar performance disso com a de uma condicional)
//nisso lembrar que é SÍMBOLO/K, então se for {0, 1, 2, 3} é 3/4 e por isso zera o prefixo, não é 4/4
//verificar quais outros valores são probidos nessa e outras codificações
bitset golomb_coder (int simbolo_input){//para CADA letra já tem que ter sido convertido para ASCII decimal antes de chamar essa função
	int dividendo, divisor_K, quociente, resto, sufixo, tamanho_prefixo, stop_bit, numero_simbolos;
	numero_simbolos = input_array.length();
	stop_bit = 0b1;//variável global?
	divisor_K = numero_simbolos / 2;
	//precisa receber o numero de simbolos,fazer aqui ou em main?
	simbolo_input/divisor_K = tamanho_prefixo;//trunca o inteiro pra pegar quociente como prefixo, binary literals pra tamanho * numero_bits
	simbolo_input%divisor_K = resto;//resto pra codificar símbolo utilizado
	std::log2(divisor_K) = tamanho_sufixo;
	sufixo = resto_em_binario_com_tamanho_sufixo;
	int codeword = tamanho_prefixo * bits_zero + stop_bit + sufixo;//0b00010000;
	//preciso usar um array pra "reservar" um número X de bits cujo valor só definirei mais tarde? e.g. reserva tamanho do sufixo antes de setar valores p/ cada símbolo

	return codeword;
}
//bitshift pra setar(coding)/analisar(decoding) bits um por 1? e.g. faz primeiro,shift pro próximo, isso dentro de um loop com comprimento da palavra. Ou só vai caminhando com ponteiro
//conta zeros antes do primeiro 1 como prefixo, primeiro 1 é stopbit, o que vier depois é sufixo
//pra decode faz tamanho_sufixo * divisor_K + sufixo_em_decimal = símbolo
//decoder recebe K pra decodificar como acima numa thread separada? poderia mandar a quantidade de símbolos sendo codificada e K é obtido localmente. Essa info poderia ser recebida por uma função com dois construtores, um que recebe K direto outro que recebe número de símbolos

golomb_decoder(int divisor_K){

}