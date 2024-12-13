lex exprtree.l
yacc exprtree.y -d
gcc -g lex.yy.c y.tab.c -o parser.exe