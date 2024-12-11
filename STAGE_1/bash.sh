lex exprtree.l
yacc exprtree.y -d
gcc lex.yy.c y.tab.c -o parser.exe