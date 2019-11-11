for file in *.c
  do
    echo $file
    name=${file%.*}
    gcc -o ${name}-c.out $file && mv ${name}-c.out artifacts/${name}-c.out
  done

for file in *.cpp
  do
    echo $file
    name=${file%.*}
    g++ -o ${name}-cpp.out $file && mv ${name}-cpp.out artifacts/${name}-cpp.out
  done
