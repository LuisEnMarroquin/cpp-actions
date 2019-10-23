## Windows Setup

* Install [MinGW Installation Manager](http://www.mingw.org/wiki/Getting_Started)
* Choose install location: `C:\MinGW`

* Go to: Edit the system environment variables
* Add to System => Path: `C:\MinGW\bin\`

* Open MinGW and install the following packages in `Basic Setup`
1. mingw32-base-bin
2. mingw32-gcc-g++-bin
3. msys-base-bin

# Docker Setup

* You need to Install [Docker CE](https://docs.docker.com/install/)
* Change the file you want to run inside `Dockerfile` and run the following
```shell
docker build -t cpp .
docker run --rm -it cpp
```

## Compile
```shell
gcc $fileName # c
g++ $fileName # c++
```

## Run
```shell
start a.exe
```

## C

```shell
gcc hello.c # compile
./a.out # run
```

## C++

```shell
g++ hello.cpp # compile
./a.out # run
```
