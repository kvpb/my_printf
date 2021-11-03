#
# A simple makefile for managing build of project composed of C source files.
#


# It is likely that default C compiler is already gcc, but explicitly
# set, just to be sure
CC = gcc

# The CFLAGS variable sets compile flags for gcc:
#  -Wall     give verbose compiler warnings
#  -Wextra   
#  -Werror   
CFLAGS = -Wall -Wextra -Werror

# The LDFLAGS variable sets flags for linker
#  -lm   says to link in libm (the math library)
LDFLAGS = -lm

# In this section, you list the files that are part of the project.
# If you add/change names of source files, here is where you
# edit the Makefile.
SOURCES =	lib/libc/\
			lib/libc/atoi.c\
			lib/libc/ctod.c\
			lib/libc/isalnum.c\
			lib/libc/isalpha.c\
			lib/libc/isascii.c\
			lib/libc/iscntrl.c\
			lib/libc/isdigit.c\
			lib/libc/isgraph.c\
			lib/libc/ishexnumber.c\
			lib/libc/islower.c\
			lib/libc/isnumber.c\
			lib/libc/isprint.c\
			lib/libc/ispunct.c\
			lib/libc/isspace.c\
			lib/libc/isupper.c\
			lib/libc/isxdigit.c\
			lib/libc/itoa.c\
			lib/libc/putc.c\
			lib/libc/strlen.c\
			src/\
			src/my_printf.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = my_printf


# The first target defined in the makefile is the one
# used when make is invoked with no argument. Given the definitions
# above, this Makefile file will build the one named TARGET and
# assume that it depends on all the named OBJECTS files.

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

# Phony means not a "real" target, it doesn't build anything
# The phony target "clean" is used to remove all compiled object files.

.PHONY: clean

clean:
	@rm -f $(TARGET) $(OBJECTS) core

