#include <stdio.h>

#include <EGL/egl.h>
#include <GLES/gl.h>

#include <android/sensor.h>
#include <android/log.h>
#include <android_native_app_glue.h>

void android_main(struct android_app* state) {
	printf("hello from android_main");
}

int main() {
	printf("hello from main");

	return 0;
}
