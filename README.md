# 🔄 Estruturas de Repetição em Linguagem C (`while` e Valor Sentinela)

> **Portfólio de Aula Prática** desenvolvido para a disciplina de **Algoritmos e Programação Estruturada** do Curso Superior de Tecnologia em **Análise e Desenvolvimento de Sistemas** — **Universidade Anhanguera**.

---

## 📋 Sobre o Projeto

Este projeto consiste em uma aplicação desenvolvida na linguagem **C**
e validada no ambiente **OnlineGDB**,
com o objetivo de aplicar os fundamentos de controle de fluxo iterativo.
O programa realiza a leitura contínua de números inteiros informados pelo usuário,
acumulando-os dinamicamente em memória e encerrando o
ciclo de execução assim que o valor sentinela (`0`) é inserido.

O código-fonte completo encontra-se no arquivo `.c` deste repositório, estruturado de forma limpa e seguindo as boas práticas da programação imperativa.

---

## 🎯 Requisitos Atendidos

* **Estrutura de Repetição Pré-Teste (`while`):** Execução condicionada à avaliação lógica prévia (`numero != 0`), garantindo que o bloco de instruções só seja processado enquanto houver entradas válidas.
* **Variável Acumuladora:** Utilização de variável dedicada (`soma`) inicializada explicitamente em zero para consolidar os valores recebidos a cada iteração.
* **Condição de Parada (Valor Sentinela):** Implementação do número `0` como gatilho de interrupção do laço, encerrando a captura de dados sem alterar o somatório final.
* **Entrada e Saída Interativa:** Comunicação clara via terminal utilizando `printf()` e `scanf()` para leitura contínua e exibição do resultado consolidado.
* **Validação Multi-Cenário:** Testes executados com entradas positivas, negativas, encerramento imediato e conjuntos mistos.

---

## ⚙️ Elementos e Operadores Aplicados

| Elemento / Operador | Contexto no Código | Finalidade Técnica |
| :--- | :--- | :--- |
| `while (numero != 0)` | Controle de fluxo principal | Avaliar a condição de permanência no laço antes de executar cada iteração. |
| `!=` | `numero != 0` | Operador relacional que verifica se o valor digitado é diferente do sentinela (`0`). |
| `+=` | `soma += numero` | Operador de atribuição composta que adiciona o novo valor ao total já acumulado. |
| `int` | `int numero; int soma = 0;` | Tipagem estática para alocação de valores inteiros em memória. |
| `scanf("%d", &numero)` | Captura de dados | Leitura formatada da entrada padrão (`stdin`) diretamente para o endereço de memória da variável. |
| `printf()` | Interface de console | Exibição de instruções de entrada ao usuário e apresentação do resultado final. |

---

## 🧠 Arquitetura e Decisões Técnicas

O algoritmo foi projetado sob o paradigma estruturado, dividindo o ciclo de vida da execução em **Inicialização**, **Leitura Antecipada**, **Iteração Condicional** e **Saída Consolidada**. Durante o desenvolvimento, foram aplicadas decisões técnicas essenciais:

1. **Inicialização Explícita da Variável Acumuladora:** Em linguagem C, variáveis locais não inicializadas armazenam valores residuais ("lixo de memória"). A declaração `int soma = 0;` garante integridade matemática desde a primeira operação.
2. **Padrão de Leitura Antecipada (*Priming Read*):** A primeira leitura ocorre antes da entrada no bloco `while`, assegurando que a expressão lógica `numero != 0` avalie um dado real logo no primeiro ciclo. As leituras subsequentes ocorrem ao final de cada iteração.
3. **Isolamento do Valor Sentinela:** Como a condição de parada é testada no topo do laço, quando o usuário digita `0`, o fluxo é imediatamente desviado para fora da estrutura de repetição, impedindo que o sentinela participe de qualquer processamento interno.

---

## 📊 Matriz de Validação e Cenários de Teste

Para assegurar a confiabilidade da lógica implementada, o algoritmo foi submetido a quatro cenários distintos no compilador **OnlineGDB**, cobrindo casos de borda e comportamentos padrão:

| Cenário de Teste | Sequência de Entradas | Resultado Esperado | Resultado Obtido | Comportamento Validado |
| :--- | :--- | :---: | :---: | :--- |
| **1. Números Positivos** | `10, 5, 8, 0` | `23` | `23` | Acumulação padrão de múltiplos inteiros positivos. |
| **2. Números Negativos** | `-5, 10, -2, 0` | `3` | `3` | Tratamento algébrico correto envolvendo sinais negativos e positivos. |
| **3. Encerramento Imediato** | `0` | `0` | `0` | Validação do pré-teste do `while` (nenhuma iteração executada). |
| **4. Valores Mistos** | `7, 3, -4, 0` | `6` | `6` | Consistência do acumulador em alternância de sinais. |

---

## 📈 Aprendizados e Evoluções Futuras

### Principais Aprendizados
* Compreensão prática da diferença entre laços pré-teste (`while`) e pós-teste (`do-while`), aplicando o padrão ideal para situações onde o bloco pode não precisar ser executado nenhuma vez.
* Domínio do padrão de **variável acumuladora** e **valor sentinela**, fundamentais para processamento de fluxos contínuos de dados de tamanho indefinido.

### Próximos Passos (Melhorias)
* **Sanitização de Entrada:** Implementar verificação do retorno da função `scanf()` para evitar loops infinitos caso o usuário insira caracteres alfabéticos ou símbolos inválidos.
* **Estatísticas Adicionais:** Expandir o algoritmo para calcular também a quantidade de números digitados (variável contadora) e a média aritmética dos valores válidos.

---

## 🛠️ Tecnologias e Ferramentas

* **Linguagem:** C (Padrão C99)
* **Compilador / IDE Web:** OnlineGDB
* **Editor Local:** IntelliJ IDEA / VS Code
* **Versionamento:** Git & GitHub Desktop  

---

## 📚 Referências Bibliográficas

* **BACKES, André.** *Linguagem C: completa e descomplicada*. 2. ed. Rio de Janeiro: LTC, 2023.
* **DAMAS, Luís.** *Linguagem C*. 10. ed. Rio de Janeiro: LTC, 2023.
* **ONLINEGDB.** *OnlineGDB: online compiler and debugger for C/C++*. Disponível em: [https://www.onlinegdb.com/](https://www.onlinegdb.com/).

---

## 🎓 Informações Acadêmicas e Autor

* **Autor:** Juan Carlos Lima Oliveira
* **Instituição:** Universidade Anhanguera - BACABAL/MA
* **Curso:** Tecnologia em Análise e Desenvolvimento de Sistemas
* **Disciplina:** Algoritmos e Programação Estruturada
* **Professor:** Vinicius Mendes