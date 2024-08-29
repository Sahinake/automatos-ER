Programa que consiste em receber uma string do usuário, que usará apenas caracteres no alfabeto da equipe, e determinar se essa string faz parte ou não da linguagem da expressão regular da equipe.

Nossa expressão regular é (001∪00101)* (01∪0110)*, sobre o alfabeto o alfabeto Σ={0,1}.

O programa recebe uma string através da entrada padrão (teclado) e imprime a resposta na saída padrão (tela). A entrada consistirá apenas de caracteres contidos no alfabeto da equipe. 
A entrada tem tamanho de no mínimo zero caracteres (string vazia) e de no máximo 50 caracteres. Esse limite desconsidera os caracteres de controle ao final da string da linguagem C, como o ‘\0’ ou o ‘\n’.
A saída consiste apenas na string “sim\n” caso a string de entrada esteja na linguagem da expressão regular da equipe, ou “nao\n” caso contrário.
Após imprimir a saída, o programa finaliza a sua execução.
