# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -lraylib -Og -Werror -Wpedantic -std=c++2b
CFLAGS_DEBUG = -g -lraylib -Og -Werror -Wpedantic -std=c++2b

#Install Locations:
LINUX_SYS_INCLUDE_DIR = /usr/local/include/UndeadEngine
LINUX_SYS_TARGET = /usr/local/lib/libundeadengine.a

# Where Source Files are located
SRC_DIR = src
INC_DIR = src/include

# Where Object files are stored
OBJECT_DIR = objects

# The build target
TARGET_DIR = target
TARGET_INCLUDE_DIR = $(TARGET_DIR)/include
TARGET_LIB_DIR = $(TARGET_DIR)/lib
TARGET_LIB = $(TARGET_DIR)/lib/libundeadengine.a

source-files := $(shell find $(SRC_DIR)/ -name *.cpp)
object-files := $(patsubst $(SRC_DIR)/%.cpp, objects/%.o, $(source-files))

$(object-files): $(OBJECT_DIR)/%.o : $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@) && \
	$(CC) $(CFLAGS) -c $(patsubst $(OBJECT_DIR)/%.o, $(SRC_DIR)/%.cpp, $@) -o $@ 	

.PHONY: build-linux
build-linux: $(object-files)
	mkdir -p $(TARGET_LIB_DIR)
	cp -r $(INC_DIR) $(TARGET_DIR)
	ar rvs $(TARGET_LIB) $^

install-linux:
	sudo cp -r $(TARGET_INCLUDE_DIR) $(LINUX_SYS_INCLUDE_DIR)
	sudo cp $(TARGET_LIB) $(LINUX_SYS_TARGET)

uninstall-linux:
	sudo rm -r $(LINUX_SYS_INCLUDE_DIR)
	sudo rm $(LINUX_SYS_TARGET)

.PHONY: show-vars
show-vars:
	$(info LINUX_SYS_INCLUDE_DIR = $(LINUX_SYS_INCLUDE_DIR))
	$(info LINUX_SYS_TARGET = $(LINUX_SYS_TARGET))
	$(info SRC_DIR = $(SRC_DIR))
	$(info INC_DIR = $(INC_DIR))
	$(info OBJECT_DIR = $(OBJECT_DIR))
	$(info TARGET_DIR = $(TARGET_DIR))
	$(info TARGET_INCLUDE_DIR = $(TARGET_INCLUDE_DIR))
	$(info TARGET_LIB_DIR = $(TARGET_LIB_DIR))
	$(info TARGET_LIB = $(TARGET_LIB))
	$(info source_files = $(source-files))
	$(info object_files = $(object-files))

.PHONY: clean
clean:
	$(RM) $(TARGET_LIB)
	$(RM) $(shell find $(OBJECT_DIR) -type f -iregex ".*\.o")
	$(RM) $(shell find $(TARGET_INCLUDE_DIR) -type f -iregex ".*\.hpp")