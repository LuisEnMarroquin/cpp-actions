for file in *.cpp
  do
    echo $file
    name=${file%.*}
    g++ -o ${name}-cpp.$1 $file && mv ${name}-cpp.$1 artifacts/${name}-cpp.$1
  done
