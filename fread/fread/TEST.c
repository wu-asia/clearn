//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//#include <locale.h> // 用于设置本地化环境
//
//#define BUFFER_SIZE 4096 // 增大缓冲区提升大文件读取性能
//
//int main(int argc, char* argv[]) {
//    // 1. 设置本地化环境（确保正确处理UTF-8编码）
//    setlocale(LC_ALL, "en_US.UTF-8");
//
//    // 2. 参数校验
//    if (argc != 2) {
//        fprintf(stderr, "Usage: %s <english_text_file.txt>\n", argv[0]);
//        return EXIT_FAILURE;
//    }
//
//    // 3. 尝试打开文件（使用二进制模式避免Windows换行符转换）
//    FILE* file = fopen(argv[1], "rb");
//    if (file == NULL) {
//        fprintf(stderr, "Error opening file '%s': %s\n", argv[1], strerror(errno));
//        return EXIT_FAILURE;
//    }
//
//    // 4. 动态缓冲区（适应不同行长）
//    char* buffer = malloc(BUFFER_SIZE);
//    if (!buffer) {
//        perror("Memory allocation failed");
//        fclose(file);
//        return EXIT_FAILURE;
//    }
//
//    // 5. 逐行读取并处理
//    size_t line_count = 0;
//    while (fgets(buffer, BUFFER_SIZE, file) != NULL) {
//        line_count++;
//
//        // 英文文本处理：去除行尾换行符
//        size_t len = strlen(buffer);
//        if (len > 0 && (buffer[len - 1] == '\n' || buffer[len - 1] == '\r')) {
//            buffer[len - 1] = '\0';
//        }
//
//        // 示例：统计单词数（简单实现）
//        int word_count = 0;
//        char* token = strtok(buffer, " \t"); // 按空格/制表符分词
//        while (token != NULL) {
//            word_count++;
//            token = strtok(NULL, " \t");
//        }
//
//        printf("Line %zu: %d words | %s\n", line_count, word_count, buffer);
//    }
//
//    // 6. 错误检测（非EOF错误）
//    if (ferror(file)) {
//        perror("Error reading file");
//    }
//
//    // 7. 资源释放
//    free(buffer);
//    fclose(file);
//
//    return EXIT_SUCCESS;
//}