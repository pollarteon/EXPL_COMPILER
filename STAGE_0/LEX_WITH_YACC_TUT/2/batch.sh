lex lex.l
yacc yacc.y -d
gcc lex.yy.c y.tab.c -o parser.exe