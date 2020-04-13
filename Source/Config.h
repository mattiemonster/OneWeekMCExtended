#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

struct Config {
    int windowX = 1280;
    int windowY = 720;
    bool isFullscreen = false;
    int renderDistance = 16;
    int fov = 90;
    bool showInfo = false;
};

#endif // CONFIG_H_INCLUDED
