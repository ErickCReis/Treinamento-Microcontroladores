## Eletrônica Digital Básica

#### A. Sistema Binário

```Sistema Decimal: base 10```

```Sistema Binário: base 2```

O sistema binário ou de base 2 é um sistema de numeração posicional em que todas as quantidades se representam com base em dois números:

```S = {0, 1}```

Em computação, chama-se um dígito binário (0 ou 1) de bit. O bit pode ser utlizado para representar um estado:

```0 -> Falso / Desligado / Baixo```
```1 -> Verdadeiro / Ligado / Alto```

**Byte:** agrupamento de 8 bits
**Nibble :** agrupamento de 4 bits

#### B. BCD

Sigla para codificação binária decimal. Nesse sistema cada nibble representa um número (decimal).

#### C. Sistema Hexadecimal

Sistema com base 16:

```S = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F}```

Pode ser representado por conjunto de 4 bits.

**Resumo**

| Decimal | Binário | Hexadecimal |
|:-------:|:-------:|:-----------:|
|    00   |   0000  |      0      |
|    01   |   0001  |      1      |
|    02   |   0010  |      2      |
|    03   |   0011  |      3      |
|    04   |   0100  |      4      |
|    05   |   0101  |      5      |
|    06   |   0110  |      6      |
|    07   |   0111  |      7      |
|    08   |   1000  |      8      |
|    09   |   1001  |      9      |
|    10   |   1010  |      A      |
|    11   |   1011  |      B      |
|    12   |   1100  |      C      |
|    13   |   1101  |      D      |
|    14   |   1110  |      E      |
|    15   |   1111  |      F      |


#### D. Lógica Combinacional / Operações Lógicas

Operações utizando sistema binário: ```Álgebra Booleana``` ou ```Álgebra de Boole```.


#### AND [```&```, ```&&```]
Resultado ```1``` se:
**Todas** entradas forem ```1```

| Entrada 1 | Entrada 2 | Resultado |
|:---------:|:---------:|:---------:|
|     0     |     0     |     0     |
|     0     |     1     |     0     |
|     1     |     0     |     0     |
|     1     |     1     |     1     |

**Exemplos**

```
0010 & 0111 = 0010
0110 & 0101 = 
1111 & 0000 = 
```

#### OR [```|```, ```||```]
Resultado ```1``` se:
**Pelo menos uma** entrada for ```1```

| Entrada 1 | Entrada 2 | Resultado |
|:---------:|:---------:|:---------:|
|     0     |     0     |     0     |
|     0     |     1     |     1     |
|     1     |     0     |     1     |
|     1     |     1     |     1     |


**Exemplos**

```
0010 & 0111 = 0111
0110 & 0101 = 
1111 & 0000 = 
```

#### NOT [```~```, ```!```]
Resultado ```1``` se:
Entrada for ```0```
*Inverte a entrada*

| Entrada | Resultado |
|:-------:|:---------:|
|    0    |     1     |
|    1    |     0     |

#### XOR [```^```]
Resultado ```1``` se:
Entradas forem **diferentes**

| Entrada 1 | Entrada 2 | Resultado |
|:---------:|:---------:|:---------:|
|     0     |     0     |     0     |
|     0     |     1     |     1     |
|     1     |     0     |     1     |
|     1     |     1     |     0     |


**Exemplos**

```
~0010 = 1101
~0110 = 
~1111 = 
```

#### NAND
Resultado ```1``` se:
**Pelo menos uma** entrada for ```0```
*OR + NOT*

| Entrada 1 | Entrada 2 | Resultado |
|:---------:|:---------:|:---------:|
|     0     |     0     |     1     |
|     0     |     1     |     1     |
|     1     |     0     |     1     |
|     1     |     1     |     0     |

#### NOR
Resultado ```1``` se:
**Todas** entradas forem ```0```
*AND + NOT*

| Entrada 1 | Entrada 2 | Resultado |
|:---------:|:---------:|:---------:|
|     0     |     0     |     1     |
|     0     |     1     |     0     |
|     1     |     0     |     0     |
|     1     |     1     |     0     |


#### XNOR
Resultado ```1``` se:
Entradas forem **iguais**

| Entrada 1 | Entrada 2 | Resultado |
|:---------:|:---------:|:---------:|
|     0     |     0     |     1     |
|     0     |     1     |     0     |
|     1     |     0     |     0     |
|     1     |     1     |     1     |

#### Shift / Deslocamento [```<<```, ```>>```]

Desloca um bit ou conjunto de bits para esquerda ou direita.

**Exemplos**

```
0001 << 3 = 1000
0100 >> 1 = 0010
```
