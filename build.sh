# I refuse to use cmake
clang -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL -I/Users/damianndoja/dev/raylib/src lib/libraylib.a src/main.c -o build/main
cp build/main macos/Shambles.app/Contents/MacOS
