add_library(mminput OBJECT
    collide.cpp
    collide.h
    effect.cpp
    effect.h
    friction.cpp
    friction.h
    input.cpp
    input.h
    io.cpp
    io.h
    iodev.cpp
    iodev.h
    joyman.cpp
    joyman.h
    joystick.cpp
    joystick.h
    localize.cpp
    localize.h
    road.cpp
    road.h
    spring.cpp
    spring.h
)

target_link_libraries(mminput hooking)
