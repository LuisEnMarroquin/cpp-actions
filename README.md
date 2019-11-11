# C and C++ code

Setup development tools to code C and C++

## Windows Setup

Use MinGW to install C and C++ compilers

1. Install [MinGW Installation Manager](http://www.mingw.org/wiki/Getting_Started)
2. Choose install location: `C:\MinGW`
3. Go to: Edit the system environment variables
4. Add to System => Path: `C:\MinGW\bin\`

Open MinGW and install the following packages in `Basic Setup`

1. mingw32-base-bin
2. mingw32-gcc-g++-bin
3. msys-base-bin

## Debian Setup

Just run the following

```shell
sudo apt-get install gcc g++ make -y 
```

## Docker Setup

1. Install [Docker](https://docs.docker.com/install/)
2. Change the file you want to run inside `Dockerfile` and run the following
```shell
docker build -t cpp .
docker run --rm -it cpp
```

## Compile
```shell
gcc hello.c # c
g++ hello.cpp # c++
```

## Run
```shell
./a.out # Linux
start a.exe # Windows
```
