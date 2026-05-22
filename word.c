#include <stdio.h>

char input[1000];      // 输入源代码缓冲区
char token[100];       // 存放当前识别出的单词符号
char ch;               // 当前读入的字符
int p_input = 0;       // input 数组的扫描指针
int p_token = 0;       // token 数组的写入指针

char keywords[9][10] = {
    "int", "if", "else", "while", "for", 
    "float", "char", "return", "void"
};

/* 判断是否为字母 */
int is_letter(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return 1;
    return 0;
}

/* 判断是否为数字 */
int is_digit(char c) {
    if (c >= '0' && c <= '9') return 1;
    return 0;
}

/* 字符串相等比较函数*/
int str_equal(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) return 0;
        i++;
    }
    return 1;
}

/* 从缓冲区读取一个字符 */
void m_getch() {
    ch = input[p_input];
    p_input = p_input + 1;
}

/* 过滤空白字符 */
void getbc() {
    while (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r') {
        m_getch();
    }
}

/* 拼接字符到当前单词缓冲区 */
void concat() {
    token[p_token] = ch;
    p_token = p_token + 1;
    token[p_token] = '\0'; 
}

/* 处理超前搜索 */
void retract() {
    p_input = p_input - 1;
}

/* 查关键字表并返回编码*/
int reserve() {
    int i;
    for (i = 0; i < 9; i++) {
        if (str_equal(token, keywords[i])) {
            return i + 1; 
        }
    }
    return 10; // 10 为标识符编码 
}

void scanner() {
    p_token = 0;
    token[0] = '\0';
    m_getch();
    getbc();

    /* 1. 识别标识符或关键字*/
    if (is_letter(ch)) {
        while (is_letter(ch) || is_digit(ch) || ch == '_') {
            concat();
            m_getch();
        }
        retract(); // 识别结束多读了一位，需回退
        int code = reserve();
        printf("(%d, %s)\n", code, token);
    } 
    /* 2. 识别无符号整数*/
    else if (is_digit(ch)) {
        while (is_digit(ch)) {
            concat();
            m_getch();
        }
        retract();
        printf("(11, %s)\n", token);
    } 
    /* 3. 识别运算符、界符与错误处理*/
    else {
        switch (ch) {
            case '+': printf("(15, +)\n"); break;
            case '-': printf("(16, -)\n"); break;
            case '*': printf("(17, *)\n"); break;
            case '/': printf("(18, /)\n"); break;
            case '=': 
                m_getch();
                if (ch == '=') printf("(24, ==)\n"); 
                else { retract(); printf("(12, =)\n"); } 
                break;
            case ';': printf("(23, ;)\n"); break;
            case '(': printf("(19, ()\n"); break;
            case ')': printf("(20, ))\n"); break;
            case '{': printf("(21, {)\n"); break;
            case '}': printf("(22, })\n"); break;
            case '#': printf("(0, #)\n"); break; 
            case '\0': break;
            /* 错误处理*/
            default: 
                printf("(-1, ERROR: Illegal character '%c')\n", ch); 
                break;
        }
    }
}
int main() {
    int i = 0;
    char temp;
    printf("学生：秦振 2312100805\n");
    printf("请输入源代码 (以 # 结束):\n");

    /* 数据读入缓冲区 */
    while ((temp = getchar()) != '#') {
        input[i] = temp;
        i = i + 1;
    }
    input[i] = '#';
    input[i+1] = '\0';

    printf("\n--------结果--------\n");
    while (input[p_input] != '\0') {
        if (input[p_input] == '#') {
            printf("(0, #)\n");
            break;
        }
        scanner();
    }

    return 0;
}