if [[ ! -e linux ]]
  then mkdir -p linux
    fi

for file in *.c
  do
    echo $file
    name=${file%.*}
    gcc -o ${name}.out $file
    mv ${name}.out linux/${name}.out
  done

for file in *.cpp
  do
    echo $file
    name=${file%.*}
    g++ -o ${name}.out $file
    mv ${name}.out linux/${name}.out
  done
