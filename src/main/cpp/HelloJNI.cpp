#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_HelloJNI_sayHello(JNIEnv *env, jobject) {
    return env->NewStringUTF("Hello from C++!");
}