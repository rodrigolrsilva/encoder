void elias_gamma_coder(int simbolo) {
	int valor_expoente_prefixo, valor_adicionado_prefixo, zeros_do_prefixo, numero_bits_sufixo;
	valor_expoente_prefixo = zeros_do_prefixo = numero_bits_sufixo;
	valor_adicionado_prefixo = simbolo - 2^(valor_expoente_prefixo);//cuidado p/ não misturar com OR lógico
	binary(valor_adicionado_prefixo) = sufixo_resto;
	//std::string binary = std::bitset<8>(n).to_string();

	int valor_truncado = std::log2(simbolo);
	resto = simbolo - 2**(valor_truncado);//caso símbolo seja potência de 2 resto = 0
	valor_truncado = zeros_do_prefixo;
	valor_prefixo = resto.toBinary();
	//http://www.cplusplus.com/reference/cstdlib/itoa/
	//outra função pra crescer expoente do 2 até ultrapassar o valor do símbolo? fazer verificação a cada acréscimo do exponencial é horrível, de repente algo como módulo?
	//if(2^(valor_expoente_prefixo)>simbolo){valor_expoente_prefixo = n-1;}else{valor_expoente_prefixo++;}
}

int elias_gamma_decoder(){
	for (int i = 0; i < input_array.length; i++)
		if (input_array[i] == 0) break;
		zeros_do_prefixo++;

	2**(zeros_do_prefixo);
	//usar ponteiro pra caminhar pelos bits e andar um bit ao chegar no stop bit, aí o resto do código (sufixo) é convertido em decimal, que então somado a 2^zeros_do_prefixo = simbolo
}