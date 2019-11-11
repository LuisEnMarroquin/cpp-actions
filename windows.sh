for file in *.c
  do
    echo $file
    name=${file%.*}
    gcc -o ${name}.exe $file
  done

for file in *.cpp
  do
    echo $file
    name=${file%.*}
    g++ -o ${name}.exe $file
  done
