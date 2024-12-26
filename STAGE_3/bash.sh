lex flow_statements.l
yacc flow_statements.y -d
gcc -g lex.yy.c y.tab.c -o parser.exe
./parser.exe
lex label.l
gcc -g lex.yy.c label.exe
./label.exe