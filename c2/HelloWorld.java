class HelloWorld {

	private native void print(); // Note the native modifier and semicolon

	public static void main(String[] args) {
		new HelloWorld().print();
	}

	// We must load the native library before calling the 
	// print method (.so shared library for linux or .dll for windows)
	static {
		System.loadLibrary("HelloWorld");
	}
}
