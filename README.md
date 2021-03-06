# Flappy Bird RPX  
A RPX Flappy Bird port for WiiU  
Assest from floppy bird HTML5 and original android game  
  
## Usage  
Press A to begin the Game  
Press A to jump  
Press HOME to exit  
Avoid the pipes and the floor!  
  
## Building  
In order to build this application, you need [wut](https://github.com/devkitPro/wut/) and [libgui](https://github.com/wiiu-env/libgui) installed.  
  
  
## Building using the Dockerfile

It's possible to use a docker image for building. This way you don't need anything installed on your host system.

```
# Build docker image (only needed once)
docker build . -t flappybirdgx2-builder

# make 
docker run -it --rm -v ${PWD}:/project flappybirdgx2-builder make

# make clean
docker run -it --rm -v ${PWD}:/project flappybirdgx2-builder make clean
```

## Credits  
 - **dimok**: WiiU librabries, dynamic_libs, examples, Homebrew Launcher  
 - **Maschell**: GX2_Example, coding help, code update for the latest libgui and wut  
 - **orboditilt**: changes for the latest wut, switch to updated libgui  
 - **brienj**: RPX version  
 - **vgmoose**: Coding help  
 - **pwsincd**: Icon  
 - **QuarkTheAwesome, dylon99**: Various help and testing  
  
