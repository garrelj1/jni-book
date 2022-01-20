class InstanceMethodCall {
	private native void nativeMethod();

	private void callback(String str) {
		System.out.println(str);
	}

	public static void main(String args[]) {
		InstanceMethodCall c = new InstanceMethodCall();
		c.nativeMethod();
	}

	static {
		System.loadLibrary("InstanceMethodCall");
	}
}
