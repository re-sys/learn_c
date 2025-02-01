# Makefile 模板
# 这个 Makefile 会编译当前目录下的所有 .cpp 文件，并生成一个名为 test 的可执行文件

# 定义编译器
CXX = g++

# 定义编译选项
CXXFLAGS = -Wall -Wextra -g

# 定义可执行文件名
TARGET = test

# 查找当前目录下的所有 .cpp 文件
SRCS := $(wildcard *.cpp)

# 通过 .cpp 文件生成对应的 .o 文件
OBJS := $(SRCS:.cpp=.o)

# 默认规则，编译生成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 清理规则，删除生成的 .o 文件和可执行文件
clean:
	rm -f $(OBJS) $(TARGET)

# 通用规则，将 .cpp 文件编译为 .o 文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean

