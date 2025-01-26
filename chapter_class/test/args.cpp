#include <iostream>

int main(int argc, char* argv[]) {
    // 显示命令行参数的数量
    std::cout << "命令行参数的数量: " << argc - 1 << std::endl;

    // 显示每个参数
    for (int i = 1; i < argc; ++i) {
        std::cout << "参数 " << i << ": " << argv[i] << std::endl;
    }

    return 0;
}
