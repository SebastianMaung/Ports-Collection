CC = i586-mingw32msvc-gcc
CXX = i586-mingw32msvc-++
RM = rm -f
DEFAULT_CFLAGS = -Wall -O2 -ffast-math -I/usr/i586-mingw32msvc/include/SDL
CFLAGS = $(DEFAULT_CFLAGS)
CXXFLAGS = $(DEFAULT_CFLAGS)
LDFLAGS = -logg -lvorbis -lvorbisenc -lvorbisfile -lsmpeg -lmingw32 -lSDL_gfx -lSDL_mixer -lSDLmain -lSDL -mwindows -mno-cygwin

OBJS = ram.o util_snd.o function.o dconv.o scene.o title.o init.o act.o option.o ending.o logo.o stageselect.o demo.o

SOURCES = $(patsubst %.o, %.c, $(OBJS))

all: RotateGear

RotateGear: $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)
