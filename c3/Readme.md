# Summary *Chapter 3: Basic Types, Strings, and Arrays*
Chapter 3 is centered around 
1. Passing arguments from Java code to native code
2. Returning values from native code to Java code

## Notes
`JNIEXPORT` and `JNICALL` are macros that 
*"ensure that this function is exported from the native library and
C compilers generate code with the correct calling convention
for this function"* 

### From section *3.1.1 C Prototype for Implementing the Native Method*
How is a Java native method named in the native implementation?

*"The name of the C function is formed by concatenating the “ Java_ ” prefix, the
class name, and the method name"*

For example: The `print()` method of Java class `HelloWorld.java` would be named
`Java_HelloWorld_print()` in native code

Section 11.3 of the book covers more precise details of the naming convention

### From section *3.1.2 Native Method Arguments*
There are two standard parameters for a native method
1. `JNIEnv` interface pointer
	- *"the JNIEnv interface pointer, points to a location that contains a
 pointer to a function table. Each entry in the function table points to a
JNI function. Native methods always access data structures in the Java
virtual machine through one of the JNI functions"*

See the JNIEnv interface pointer png for a visualization

2. `jobject` object argument differs on whether the native method is static or is
and instance method

	a. Instance method: similar to the `this` pointer in C++. It's a reference to
the object instance that the method is being called on
	b. Static method: reference to the class the method is called on

### From section *3.1.3 Mapping of Types*
There are two types
1. Primitives (`int`, `float`, `char`, etc)
2. Reference (classes, instances, arrays)

JNI treats the two types differently

