# 可执行文件的名称
TARGET = test

# 编译器
CXX = g++

# 编译选项
CXXFLAGS = -Wall -std=c++11 -g -O0

# 源文件和目标文件的扩展名
SRC_EXT = .cpp
OBJ_EXT = .o

# 获取当前目录下的所有源文件
SRCS = $(wildcard *$(SRC_EXT))

# 从源文件生成目标文件
OBJS = $(SRCS:$(SRC_EXT)=$(OBJ_EXT))

# 默认目标
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 编译源文件为目标文件
$(OBJS): %$(OBJ_EXT): %$(SRC_EXT)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理生成的目标文件和可执行文件
clean:
	rm -f $(OBJS) $(TARGET)

# 重新生成所有文件
rebuild: clean all

.PHONY: all clean rebuild
