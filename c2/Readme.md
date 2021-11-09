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
Two components needed to run the program
1. `HelloWorld.class` file running in the `JVM` and calls the native method
2. `libHelloWorld.so` (or `HelloWorld.ddl` if on Windows) implements the
 native method and prints to the screen
