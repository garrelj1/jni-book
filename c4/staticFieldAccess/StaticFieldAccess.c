#include <jni.h>
#include <stdio.h>
#include "StaticFieldAccess.h"

JNIEXPORT void JNICALL 
Java_StaticFieldAccess_accessField(JNIEnv *env, jobject obj) {
	jfieldID fid;
	jint staticInt;

	jclass cls = (*env)->GetObjectClass(env, obj);

	printf("In C:\n");

	fid = (*env)->GetStaticFieldID(env, cls, "staticInt", "I");
	if (NULL == fid) {
		return;
	}

	staticInt = (*env)->GetStaticIntField(env, cls, fid);
	printf(" StaticFieldAccess.staticInt = %d\n", staticInt);
	(*env)->SetStaticIntField(env, cls, fid, 200);
}
