class StaticFieldAccess {
	private static int staticInt;

	private native void accessField();
	public static void main(String args[]) {
		StaticFieldAccess c = new StaticFieldAccess();
		StaticFieldAccess.staticInt = 100;
		c.accessField();
		System.out.println("In Java:");
		System.out.println(" StaticFieldAccess.staticInt = " + staticInt);
	}

	static {
		System.loadLibrary("StaticFieldAccess");
	}
}
