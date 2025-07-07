# 🎮 Quiz de História - Jogo em C

Este é um jogo de perguntas e respostas sobre História Geral, desenvolvido em linguagem C. Ele apresenta um menu animado com arte ASCII, perguntas de múltipla escolha e sistema de pontuação.

## 🧠 Funcionalidades

- Sistema de pontuação com feedback
- Perguntas com múltiplas alternativas
- Estilo visual com arte em ASCII e cores ANSI
- Sons e efeitos visuais (via `Beep` e `Sleep`)
- Menu de seleção com níveis de dificuldade (Fácil, Médio e Difícil)

## 🖥️ Como rodar

Requisitos:
- Sistema Windows (usa `windows.h`)
- Compilador GCC (CodeBlocks, por exemplo)

### Compile:
```bash
gcc main.c -o quiz -lwinmm
