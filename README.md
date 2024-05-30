# libWRP-key

C++ cross platform key-code library
 with corss platform virtual keyboard write(send) key library.

## Support

- (Supported)
    - GNU/Linux
    - Mac/OSX
    - Microsoft/Windows

## Library

The library is in the "./include" directory.

### Install

#### for GNU/Linux or OSX

to system: install to /usr/local
    
    cmake -S ./all -B ./build -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS='-march=native -pipe' -DlibWRPkeycmakednupdated_ENABLE_LTO=ON -DlibWRPkeycmakednupdated_ENABLE_POLY=ON
    cmake --build ./build --parallel $(nproc) --verbose
    sudo cmake --install ./build/ --prefix=/

to the other:

    sudo cmake --install ./build/ --prefix=~/

#### Windows

You should be set appropriately for your environment.

## Example

[example1/sourcekey.cxx](example1/key.cxx)

see folder example1/

[example2/writer.cxx](example2/writer.cxx)

see folder example2/

GNU/Linux: * need root *

    sudo ./build/libWRPkeycmakednupdatedexample2/writer

OSX or Windows:

    ./build/libWRPkeycmakednupdatedexample2/writer

### Note for Windows

You might need copy or symlink two .dll files from your development environment lib directory, but that's not sure:

1. libgcc_s_sjlj-1.dll
2. libstdc++-6.dll

## Requirement

* a c++ compiler ( for windows install or gcc or clang or visual studio with c++ parts . For mac maybe install xcode with c++ parts, idk. For linux install or gcc or clang or w/e)
* cmake 

## Licence

* [libWRP-key is licensed under The Happy Bunny License and MIT License](LICENCE.md)

## Author

(C)2014 Usagi Ito<usagi@WonderRabbitProject.net> / [Wonder Rabbit Project](http://www.WonderRabbitProject.net/).
