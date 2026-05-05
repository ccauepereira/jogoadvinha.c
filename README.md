# jogoadvinha.c
Aqui vai um README completo e direto para o seu projeto — já pronto pra colar no GitHub:

---

# 🎯 Jogo de Adivinhação em C

Um simples jogo de adivinhação feito em linguagem C, onde o jogador tenta descobrir um número secreto gerado aleatoriamente.

## 📌 Descrição

O programa gera um número secreto entre **0 e 99**, e o jogador deve tentar adivinhar esse número dentro de uma quantidade definida de tentativas.

A cada tentativa:

* O jogador informa um número
* O programa indica se o chute foi **maior ou menor** que o número secreto
* Pontos são reduzidos com base na diferença entre o chute e o número secreto

## 🧠 Regras do jogo

* O jogador escolhe quantas tentativas deseja ter
* Não é permitido inserir números negativos
* O jogo começa com **1000 pontos**
* A cada erro, pontos são perdidos proporcionalmente ao erro
* O jogo termina quando:

  * O jogador acerta o número 🎉
  * Ou acaba o número de tentativas ❌

## 🧮 Fórmula de pontuação

```c
pontosperdidos = abs(chute - numerosecreto) / 2.0;
```

## ▶️ Como compilar e executar (usando GCC/GDB)

### 🔧 Pré-requisitos

Certifique-se de ter instalado:

* GCC (compilador C)
* GDB (debugger)

No Linux (Ubuntu/Debian):

```bash
sudo apt update
sudo apt install build-essential gdb
```

---

### ⚙️ Compilando o programa

No terminal, navegue até a pasta do arquivo `.c` e execute:

```bash
gcc jogo.c -o jogo
```

Isso irá gerar um executável chamado `jogo`.

---

### ▶️ Executando o programa

```bash
./jogo
```

---

### 🐞 Debugando com GDB

Para compilar com suporte a debug:

```bash
gcc -g jogo.c -o jogo
```

Inicie o GDB:

```bash
gdb ./jogo
```

Comandos básicos dentro do GDB:

```bash
run            # executa o programa
break main     # cria breakpoint na função main
next           # executa próxima linha
print variavel # inspeciona valor de variável
quit           # sai do GDB
```

---

## 📁 Estrutura do projeto

```
.
├── jogo.c
└── README.md
```

---

## 🚀 Possíveis melhorias

* Definir níveis de dificuldade
* Melhorar geração de número aleatório com `srand(time(NULL))`
* Interface mais amigável
* Salvar ranking de jogadores

---

## 👨‍💻 Autor

Professor Agbeson Façanha

---

Se quiser, posso melhorar seu código também (por exemplo, corrigir o problema do `rand()` sempre gerar o mesmo número 😉).
