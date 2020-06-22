#!/bin/bash
echo "Данная программа будет осуществлять рекурсивный обход указанного файла и перекодировку всех текстовых файлов в нем"
echo "Введите название каталога"
read dir

cd $dir
start() {
	local fullname="$1"
	local filename=`basename "$1"`
	local fileext="${filename##*.}"
	local ext2lower=`echo "$ext" | tr A-Z a-z`
	echo $fullname
}

scan() {
	local x;
	for e in "$1"/*; do
		x=${e##*/}
		if [ -d "$e" -a ! -L "$e" ]
		then
			scan "$e"
		else
			start "$e"
		fi
	done
}

[ $# -eq 0 ] && dir=`pwd` || dir=$@

scan "$dir"
f=`find . -name \*.txt`
for file in $f
	do
	iconv -c -f UTF-8 -t KOI-8 $file -o tmpfile && mv tmpfile $file
done

