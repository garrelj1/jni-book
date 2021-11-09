#include <jni.h>
#include <stdio.h>
#include "Prompt.h"

JNIEXPORT jstring JNICALL
Java_Prompt_getLine(JNIEnv *env, jobject obj, jstring prompt) {
	// This would likely crash the JVM because it is an
	// incorrect use of jstring as a char* pointer 
	
	// printf("%s", prompt);
	
	char buf[128];
	const jbyte *str;
	str = (*env)->GetStringUTFChars(env, prompt, NULL);

	if (str == NULL) {
		return NULL; // Out of memory
	}

	printf("%s", str);
	(*env)->ReleaseStringUTFChars(env, prompt, str);

	// Assume the user will input less than 128 characters (127 max)
	scanf("%s", buf);

	return (*env)->NewStringUTF(env, buf);

}
