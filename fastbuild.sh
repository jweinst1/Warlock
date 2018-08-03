# For running in one command
mkdir -p build
cd build
cmake ..
make
./WarlockTests
cd ..
rm -rf build
