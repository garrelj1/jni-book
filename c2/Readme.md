# Summary

Steps to completing the hello world exercise in chapter 2

1. Create `HelloWorld.java`
2. Use `javac` to compile `HelloWorld.java`
	- This creates a `HelloWorld.class`
3. Use `javah -jni HelloWorld` to create a header for the native 
method declared in the file above
	- This creates a `HelloWorld.h` file
4. Write the C implementation of `HelloWorld.h` in `HelloWorld.c`
5. Compile C code
	- This creates a `HelloWorld.dll`
6. Run the program with `java`

The steps above are outlined in the png provided here

## Notes
> To run the hello world program, we need to add `libHelloWorld.so` to the `JVM`
> library path. We can do this by running `$ source ./setup.sh`. Note, specifically
> run`./setup.sh` to make sure that you are running the `setup.sh` in this folder.
> `setup.sh` is a common name for a shell file and may be in your `PATH` variable already

Two components needed to run the program
1. `HelloWorld.class` file running in the `JVM` which calls the native method
2. `libHelloWorld.so` (or `HelloWorld.ddl` if on Windows) implements the
 native method and prints to the screen

Run Hello world with `$ java HelloWorld`
