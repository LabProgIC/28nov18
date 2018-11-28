# 28nov18

Aula de laboratório de programação, instituto de computação, universidade
federal do mato grosso
- criar conta no github
- fork clone branch
- compilar prototypes em arquivos separados
- git add, commit, push, pool request

## 1. Compra com desconto
Segundo as tabelas a baixo, faça um programa que receba pelo terminal o
código do produto, a quantidade e retorne o preço final com desconto

| Código | Preço |
| --- | --- |
| 1 a 10 | 10|
| 11 a 20 | 15 |
| 21 a 30 | 20 |
| 31 a 40 | 30 |


| Preço total da nota | % de desconto |
| --- | --- |
| < 250,00 | 5% |
| 250 - 500 | 10% |
| 500 < | 15% |

## 2. menu de férias, 13º e sair
Apresentar um menu com 3 opções:
1. recebe o valor do salário e retorna o valor das suas férias
2. recebe o valor do salário, o número de meses trabalhado e retorne o valor do 13º
3. sair

As férias são 1,5 vezes o salário. O 13º é o valor do salário vezes a fração de meses trabalhados no ano

## Compile com mais avisos
```c
gcc -Wall -Wextra -g3 index.c -o out.exe
```
