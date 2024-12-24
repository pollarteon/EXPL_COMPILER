lex flow_statements.l
yacc flow_statements.y -d
gcc -g lex.yy.c y.tab.c -o parser.exe
./parser.exe
./label.exe