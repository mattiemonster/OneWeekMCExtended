# One Week MC Extended

Hopson challenged himself to create a Minecraft clone in a week, and I've decided to try make a somewhat extended version of it.

Video: https://www.youtube.com/watch?v=Xq3isov6mZ8

## Other People's Projects

This was made in a week, as a challenge for a video. There do exist other, more mature and developed Minecraft clones written in C++.

MineTest here: https://github.com/minetest/minetest

## Building

You will need GLM and SFML 2.4.1+ libraries w/headers, and this also requires a compiler that supports C++14 (or newer) with threads.

### macOS

Install macports from https://www.macports.org 

`sudo port install sfml glm`

### Ubuntu

`sudo apt-get install libsfml-dev libglm-dev`

## Compile Source and Runnimg

### Linux

#### Debug

```sh
sh scripts/build.sh
sh scripts/run.sh
```

#### Release

```sh
sh scripts/build.sh release
sh scripts/run.sh release
```
