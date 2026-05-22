## 声明：总结是利用ai总结的

## 1. 格式化输出（占 8 个字符宽度，右对齐）

### 知识点

- 头文件 `<iomanip>` 提供输出格式控制函数
- `setw(n)`：**只对下一个输出有效**，设置场宽为 n，默认右对齐、空格补齐
- 也可以用 `printf("%8d", x)` 实现相同效果

### 示例代码

```
#include <iostream>
#include <iomanip>  // 必须包含
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    // 每个数占8字符宽度，右对齐，中间一个空格
    cout << setw(8) << a << " " 
         << setw(8) << b << " " 
         << setw(8) << c << endl;
         
    // 等价写法
    // printf("%8d %8d %8d", a, b, c);
    return 0;
}
```

------

## 2. B2006 地球人口承载力估计

### 题目描述

地球上现有资源 + 新生资源，可供 x 亿人生活 a 年，或 y 亿人生活 b 年。

求**最多能养活多少亿人**（可持续发展，资源不枯竭）。

### 解题公式

设：每年新生资源为 `q`

\(q = \frac{a \times x - b \times y}{a - b}\)

**答案就是 q**（刚好消耗每年新生资源）

------

## 3. B2053 求一元二次方程

### 代码（使用判别式 delta，保留 5 位小数）

```
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    
    // 判别式
    double delta = b * b - 4 * a * c;
    
    // 无实数解
    if (delta < -1e-6) {   
        cout << "No answer!" << endl;
        return 0;
    }
    
    // 计算两个根
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);
    
    // 按格式输出
    if (fabs(x1 - x2) < 1e-6) {  // 两相等根
        printf("x1=x2=%.5lf\n", x1);
    } else {  // 从小到大输出
        if (x1 > x2) swap(x1, x2);
        printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
    }
    
    return 0;
}
```

------

## 4. vector 正确初始赋值（重点易错点）

###  错误写法

容器为空，直接用 `v[i]` 会越界崩溃

```
vector<int> v;
for (int i = 0; i < 10; i++) {
    cin >> v[i];  // 错误！容器为空，没有空间
}
```

###  正确写法 1（动态添加）

```
vector<int> v;
for (int i = 0; i < 10; i++) {
    int x;
    cin >> x;
    v.push_back(x);  // 尾插，自动扩容
}
```

### 正确写法 2（预先指定大小）

```
vector<int> v(10);  // 初始开辟10个空间
for (int i = 0; i < 10; i++) {
    cin >> v[i];  // 正确
}
```

------

## 5. 输出第一次出现某数的位置

### 思路

- 用变量记录下标，初始值设为 `-1`
- 第一次匹配到就赋值，**不再修改**
- 最后判断是否全部出现

### 代码

```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> v(k);
    
    for (int i = 0; i < k; i++) {
        cin >> v[i];
    }
    
    int one = -1, five = -1, ten = -1;
    
    for (int i = 0; i < k; i++) {
        if (v[i] == 1 && one == -1) one = i;
        if (v[i] == 5 && five == -1) five = i;
        if (v[i] == 10 && ten == -1) ten = i;
    }
    
    // 输出结果
    if (one == -1 || five == -1 || ten == -1) {
        cout << "False" << endl;
    } else {
        cout << one << " " << five << " " << ten << endl;
    }
    
    return 0;
}
```

------

## 6. 向上取整函数 ceil ()

- 头文件：`#include <cmath>`

- 用法：`ceil(小数)` → 返回大于等于该数的最小整数

- 示例：

  ```
cout << ceil(3.1);  // 输出 4
  cout << ceil(5.0);  // 输出 5
```

------

## 7. 计算 a/b 的第 n 位小数

### 思路

模拟除法过程：

1. 取余数
2. 余数 ×10
3. 重复 n 次，最后得到的数的**个位**就是答案

### 代码

```
#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    
    int c, d;
    for (int i = 0; i < n; i++) {
        c = a % b;    // 取余数
        d = c * 10;   // 余数补0
        a = d;        // 继续除
    }
    
    cout << d / b << endl;  // 第n位小数
    return 0;
}
```

------

### 总结

1. 格式化输出用 `<iomanip>` + `setw()`，**每次输出都要重新设置**
2. 人口承载力直接套公式：`q = (a*x - b*y) / (a - b)`
3. 一元二次方程用 `delta` 判断，注意**浮点数精度**
4. vector 为空时不能用 `[]`，用 `push_back` 或预先开空间
5. 找第一次出现位置：变量初始 `-1`，只赋值一次
6. 向上取整：`ceil()`，头文件 `<cmath>`
7. 第 n 位小数：**模拟除法**，余数 ×10 循环 n 次