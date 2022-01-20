#include <jni.h>
#include <stdio.h>
#include "InstanceMethodCall.h"

JNIEXPORT void JNICALL 
Java_InstanceMethodCall_nativeMethod(JNIEnv *env, jobject obj) {
	jclass cls = (*env)->GetObjectClass(env, obj);

	jmethodID mid = (*env)->GetMethodID(env, cls, "callback", "()V");
	if (NULL == mid) {
		return;
	}

	jstring str = "Hello World";
	printf("In C\n");
	(*env)->CallVoidMethod(env, obj, mid, str);
}
