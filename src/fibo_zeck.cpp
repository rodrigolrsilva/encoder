<vector> int fibonacci_custom(int& tamanho){//para dimensionar p/ Fibonacci/Zeckendorf
	//para os fins de F/Z, o tamanho mínimo é 3 já que os dois primeiros elementos não são usados para codificação
	if (tamanho < 3) throw wrong_argument_exception; //não dá pra retornar string
	<vector> int fibo (tamanho);
	fibo[0] = 0; fibo[1] = 1;
	for (int i = 2; i < tamanho; i++)
	{
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
			
}
crescer_fibo(array){
	aumenta e move ponteiro do last, ver o que já tá na std
}

//inicializar um vetor global com uma sequência até dado número já feita pra evitar ter que ficar editando o vetor? não precisa ser global, só nessa classe

void fibo_coder(){
	//dá pra verificar qual último número menor que o símbolo sem percorrer o vetor? caso contrário precisaria criar uma cópia de um fibonacci aqui?
	last fibo number < symbol = tamanho 
	fibonacci_custom(tamanho)//precisa criar mesmo? isso seria uma cópia   teria como fazer via referência? talvez caberia um template?
	//quando achar esses números tem que ligar o bit deles
	//somar membros de fibo que resultem em symbol parece uma operação comum que deve ter uma forma mais elegante
	//std::lower_bound() ou std::upper_bound() ?
	//https://stackoverflow.com/questions/8647635/elegant-way-to-find-closest-value-in-a-vector-from-above
	//valeria a pena gerar um fibonacci inicial e depois só crescer esse mesmo vetor conforme demanda? para evitar cópias, aí passa por referência
	//pra decodificar tu sabe o número de bits daí sabe que é só pegar um vetor fibo com mesmo comprimento do array de bits (e.g. 9 bits fibo(9))

	while (input_value > array_fibo[last]){
		array_fibo = crescer_fibo(array_fibo);//adiciona um elemento ao vetor no padrão fibo 
	}
	for (int i = last; i >= 0; i--){
		if(array_fibo[i] <= input_value){
			((valor_simbolo + array_fibo[i]) > valor_simbolo) ? bit = 0b0 : bit = 0b1;
			//teto_vetor++;

		}
	}
}	
fibo_decoder(){
	
}