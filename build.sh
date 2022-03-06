mkdir build
mkdir bin
cd build
cmake ..
make
cp xinglang ../bin/xinglang
cd ..
rm -rf ./build