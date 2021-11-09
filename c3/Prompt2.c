#include <jni.h>
#include <stdio.h>
#include "Prompt.h"

JNIEXPORT jstring JNICALL
Java_Prompt_getLine(JNIEnv *env, jobject obj, jstring prompt) {
	
	// No check for strings larger than 127
	char outbuf[128], inbuf[128];
	int len = (*env)->GetStringLength(env, prompt);

	(*env)->GetStringUTFRegion(env, prompt, 0, len, outbuf);

	printf("%s", outbuf);
	scanf("%s", inbuf);

	return (*env)->NewStringUTF(env, inbuf);
}
