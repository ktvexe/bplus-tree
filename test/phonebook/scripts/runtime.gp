reset
set ylabel 'time(sec)'
set style fill solid
set key left top
set title 'perfomance comparison'
set term png enhanced font 'Verdana,10'
set output 'runtime.png'

plot [:][:30]'output.txt' using 2:xtic(1) with histogram title 'original', \
'' using 3:xtic(1) with histogram title 'optimized'  , \
'' using 4:xtic(1) with histogram title 'hashfunction'  , \
'' using 5:xtic(1) with histogram title 'trie'  , \
'' using 6:xtic(1) with histogram title 'rbtree'  , \
'' using 7:xtic(1) with histogram title 'bptree'  , \
'' using 8:xtic(1) with histogram title 'bptreebulk'  , \
'' using ($0-0.1):($2+1):2 with labels title ' ', \
'' using ($0-0.1):($3+2):3 with labels title ' ', \
'' using ($0-0.1):($4+3):4 with labels title ' ', \
'' using ($0-0.1):($5+4):5 with labels title ' ', \
'' using ($0-0.1):($6+5):6 with labels title ' ', \
'' using ($0+0.3):($7+6):7 with labels title ' ', \
'' using ($0+0.5):($8+7):8 with labels title ' '
