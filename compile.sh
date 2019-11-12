for file in *.c
  do
    echo $file
    name=${file%.*}
    gcc -o ${name}-c.$1 $file && mv ${name}-c.$1 artifacts/${name}-c.$1
  done

for file in *.cpp
  do
    echo $file
    name=${file%.*}
    g++ -o ${name}-cpp.$1 $file && mv ${name}-cpp.$1 artifacts/${name}-cpp.$1
  done
