#!/bin/zsh
if [ -n $2 ]
then
	make && ./replace test.txt $1 $2 && cat test.txt && echo "----" && cat test.txt.replace
else
	echo "usage ./test.sh S1 S2."
fi