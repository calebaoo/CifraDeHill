# CifraDeHill

# 🧑‍🎓 Integrantes
Calebe Pierozzi

# 📝 Descrição

O objetivo deste algoritmo é demonstrar a aplicação da cifra de Hill em criptografia utilizando um programa na linguagem C. O código foi projetado para:
•	Receber uma mensagem do usuário.
•	Criptografar a mensagem usando a cifra de Hill, com uma matriz de chave predefinida.
•	Exibir a mensagem cifrada.


Funções Utilizadas

- CharParaNum(char c): Converte um caractere (letra maiúscula) para seu valor numérico correspondente, com A=0, B=1, ..., Z=25.
-	NumParaChar(int num): Converte um número (0-25) para o caractere correspondente (A-Z).
-	MultiplicarMatriz(int A[MAX][MAX], int B[MAX], int C[MAX]): Multiplica a matriz de chave A por um vetor de números B, gerando um novo vetor C. O resultado é calculado módulo 26, para garantir que o valor resultante corresponda a uma letra.
-	Alfabetico(char c): Verifica se um caractere é uma letra (maiúscula ou minúscula).
-	Espaco(char c): Verifica se um caractere é um espaço em branco.
-	ConverterMaiusculo(char c): Converte um caractere minúsculo para maiúsculo, mantendo as letras maiúsculas inalteradas.

Funcionamento do Programa
   
- Entrada de Dados: O usuário insere uma mensagem de texto. O programa verifica se a entrada contém apenas caracteres válidos (letras e espaços).
- Conversão para Maiúsculas: O programa converte automaticamente todas as letras minúsculas para maiúsculas antes de prosseguir com a criptografia. (a biblioteca string.h é limitada, é necessário que haja essa conversão).
- Remoção de Espaços e Padding: O programa descarta os espaços e adiciona um padding de 'X' se o comprimento da mensagem não for múltiplo de 2. Isso é necessário para garantir que a cifra de Hill opere em blocos de tamanho 2, que é a dimensão da matriz de chave utilizada.
- 	Cifra de Hill: A cifra de Hill é aplicada em blocos de 2 caracteres, onde cada bloco de caracteres é convertido para um vetor numérico. Esse vetor é multiplicado pela matriz de chave 2×2 e, em seguida, convertido de volta para caracteres. O resultado final é a mensagem criptografada.
- Saída: A mensagem criptografada é exibida na tela.
   
Para ilustrar a execução do programa, considere a seguinte entrada:
Entrada: "mensagem"
•	O programa converte as letras para maiúsculas: "MENSAGEM"
•	Como o tamanho da mensagem (8 caracteres) é múltiplo de 2, não é necessário adicionar padding.
•	O programa então divide a mensagem em blocos de 2 caracteres: "ME", "NS", "AG", "EM".
•	Cada bloco é convertido em números e multiplicado pela matriz de chave, resultando na mensagem criptografada.
Saída: A saída será a sequência de caracteres criptografados gerada pela cifra de Hill.

