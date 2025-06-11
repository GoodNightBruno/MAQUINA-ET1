# Máquina de Pilha - Etapa 1

## Alunos

- Aleanse dos Santos Lima Rego  
- Barbara Fernanda Santos Carvalho  
- Bruno Leonardo Silva Carvalho Amorim  
- Bryan Windson Queiroz de Souza  
- Camila Santos Ferreira  
- Gabriella Cristina Ferreira de Abreu  
- Raimundo Nonato Silva Santos  

## Descrição

Este projeto implementa um interpretador simples baseado em pilha, com suporte a comandos básicos como:

- `push <valor>`
- `add`
- `sub`
- `mul`
- `div`
- `print`
- `exit`

## Compilação

```bash
gcc -o maquina main.c interpret.c stack.c
```

## Execução

```bash
./maquina
```

## Exemplo de uso

```
> push 10
> push 20
> add
> print
30
> exit
```