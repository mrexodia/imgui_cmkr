# imgui_cmkr

Simple template to use [Dear ImGui](https://github.com/ocornut/imgui) with GLFW.

## Dependencies

On Windows and macos this should build without installing any system dependencies.

On Linux you need to install the X11/Wayland development packages. Ubuntu:

```sh
sudo apt install xorg-dev libwayland-dev
```

To only build for X11, use the following configuration options:

```sh
cmake -B build -DGLFW_BUILD_WAYLAND=OFF -DGLFW_BUILD_X11=ON
```

## Building

```sh
git submodule update --init
cmake -B build
```
