#include <jni.h>
#include <string>
#include "../thread/thread.h"
#include "../log/android_log.h"

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_javahe_cplusexercise_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    const char *hello1 = "1111";
    LOGE("hellodafdasfdsaf",hello1);

    ThreadWrapper* threadWrapper = new ThreadWrapper();
    return env->NewStringUTF(hello.c_str());
}
