//ASCII 128 bits
int converter_ASCII(std::string palavra_input){ //string para int p/ coders
	
}

std::string converter_palavra_output_decoder(int palavra_input){ // int para string p/ decoders

}



input_coder(){//chamado dentro do code de cada classe
    int dados_decimal;//decimal, precisa ter capacidade de input de binário? sim, no decoder
	if (auto temp = std::get_if<std::string>(&informacao);){
    	std::string& text = *temp;
		dados_decimal = converter_ASCII(text);}
	else {dados_decimal = std::get<int>(&informacao); }	
}

