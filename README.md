# ft_printf

Projet de l'école 42 Paris : réimplémentation de `printf` en C, produisant la bibliothèque `libftprintf.a`.

## Conversions gérées

`%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`

## Usage

```bash
make        # produit libftprintf.a
```

```c
#include "ft_printf.h"
ft_printf("Valeur : %d, hex : %x\n", 42, 42);
```
