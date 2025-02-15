lex expl.l
yacc expl.y -d
gcc -g lex.yy.c y.tab.c -o parser.exe
./parser.exe
lex label.l
gcc -g lex.yy.c -o label.exe
./label.exe