# I refuse to use cmake
clang++ -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL -std=c++20 -I/Users/damianndoja/dev/raylib/src lib/libraylib.a src/main.cpp -o build/main
cp build/main macos/Shambles.app/Contents/MacOS
