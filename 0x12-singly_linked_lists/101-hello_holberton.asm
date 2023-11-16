section         .text
        extern  printf
        global  main

main:
        mov             edi,    hello
        mov             eax,    0
        call    printf

section             .data
        hello  db   'Hello, Holberton', 0xa, 0
