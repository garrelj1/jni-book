#include <jni.h>
#include <stdio.h>
#include "ObjectArray.h"

// Notice the second argument is jclass instead of jobject as opposed to past examples.
// This is because the native method is static, therefor the class is passed instead
// of the object instance, which would be of type jobject
JNIEXPORT jobjectArray JNICALL
Java_ObjectArrayTest_initInt2DArray(JNIEnv *env, jclass obj, int size) {
	jobjectArray result;
	int i;

	jclass intArrCls = (*env)->FindClass(env, "[I");
	if (intArrCls == NULL) {
		return NULL; // exception thrown
	}

	result = (*env)->NewObjectArray(env, size, intArrCls, NULL);
	if (result == NULL) {
		return NULL; // out of memory error
	}
	
	for (i = 0; i < size; i++) {
		jint tmp[256]; // this is naive. In the real world we must make sure this is big enough
		int j;

		jintArray iarr = (*env)->NewIntArray(env, size);
		if (iarr = NULL) {
			return NULL; // out of memory exception
		}

		for (j = 0; j < size; j++) {
			tmp[j] = i + j;
		}
		(*env)->SetIntArrayregion(env, iarr, 0, size, tmp);
		(*env)->SetObjectArrayElement(env, result, i , iarr);
		(*env)->DeleteLocalRef(env, iarr);
	}

	return result;
}
