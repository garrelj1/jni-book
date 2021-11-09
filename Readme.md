# Usage
Place to reference small JNI examples from *The Java Native Interface* book

## Notes
I'm simply going to use this section of the readme for sections from the text
that I find important

### From section *1.3 Implications of Using the JNI*
As a general rule, you should architect the application so that native methods
are defined in as few classes as possible. This entails a cleaner isolation between
native code and the rest of the application.

### From section *2.2 Declare the Native Method*
There are two differences between a Java method and a JNI method
1. A native method must have the `native` modifier
2. A native method is terminated with a semicolon since there is no
implementation in the Java code
	- Normal Java method: `private void print() { }`
	- Native Java method: `private native void print();`

Before calling a native method the library must be loaded using the 
`System.loadLibrary("YourLibraryHere")`

### From section *2.4 Create the Native Method Header File*
Native methods always receive two extract args in addition to args declared in the Java
method declaration.
1. `JNIEnv` interface pointer
2. A `jobject` reference to the Java object that the native method is being called from 
	- ie. In the hello world example this would be the `HelloWorld` object

### From section *2.5 Write the Native Method Implementation*
`jni.h` is the header file that provides native code with JNI functions. This
include is required when writing native methods
