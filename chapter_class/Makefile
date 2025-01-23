# source *.cpp 
# 编译器
CXX = g++

# 编译选项
CXXFLAGS = -Wall -std=c++11

# 目标文件
TARGET = use_point

# 源文件
SRCS = point.cpp use_point.cpp

# 对象文件
OBJS = $(SRCS:.cpp=.o)

# 默认目标
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 编译源文件生成对象文件
%.o: %.cpp point.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理生成的文件
clean:
	rm -f $(OBJS) $(TARGET)
