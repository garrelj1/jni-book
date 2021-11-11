#include <jni.h>
#include <stdio.h>
#include "InstanceFieldAccess.h"


JNIEXPORT void JNICALL Java_InstanceFieldAccess_accessField (JNIEnv *env, jobject obj) {
	jfieldID fid;
	jstring jstr;
	const char *str;

	jclass cls = (*env)->GetObjectClass(env, obj);

	printf("In C:\n");

	fid = (*env)->GetFieldID(env, cls, "s", "Ljava/lang/String;");
	if (NULL == fid) {
		return;
	}

	jstr = (*env)->GetObjectField(env, obj, fid);
	str = (*env)->GetStringUTFChars(env, jstr, NULL);
	if (NULL == str) {
		return;
	}

	printf(" c.s = \"%s\"\n", str);
	(*env)->ReleaseStringUTFChars(env, jstr, str);

	jstr = (*env)->NewStringUTF(env, "123");
	if (NULL == jstr) {
		return;
	}
	(*env)->SetObjectField(env, obj, fid, jstr);
}
