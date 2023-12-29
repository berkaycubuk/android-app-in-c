# Android App in C
Recently I encountered a video of running opengl in PSP (Playstation Portable) then saw another video of running opengl in Android. Then I decided to try it myself.

Current situation: Managed to run executable inside emulator shell. But not successful on running the executable as an app. I don't want to get into gradle, just want to use what I have right now. Will be researching more on what I can do.

## How to compile it
You need Android Studio installed on your machine and other android platform tools as well. And better to try this experimental stuff on an emulator so, also download an android emulator.

To build it head over to `jni` folder and run `ndk-build` command. If everything goes fine you should have executables under libs folder.

## How to run it
Start up your emulator then get root access with `adb root`. This is important to execute our executable and upload the executable. Push your executable to the emulator with `adb push --path-to-your-executable-- /data/tmp/hello-world`. Then `adb shell chmod 777 /data/tmp/hello-world`. Now you have your executable ready, let's execute it with `adb shell /data/tmp/hello-world` command. You should see something like "hello from main" on your terminal. That's it :^)
