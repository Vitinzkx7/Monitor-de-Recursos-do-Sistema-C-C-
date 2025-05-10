# Monitor de Sistema em C

Este projeto é um utilitário de linha de comando que monitora informações básicas de uso da CPU no Linux, utilizando a leitura do arquivo `/proc/stat`.

## Tecnologias Utilizadas
- Linguagem C
- Leitura de arquivos do sistema Linux

## Como Usar
```bash
gcc main.c -o monitor
./monitor
```

## Funcionalidades
- Leitura em tempo real da linha de estatísticas da CPU.
- Base para expansão com monitoramento de memória, rede, etc.
