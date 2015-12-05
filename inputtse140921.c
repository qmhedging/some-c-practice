    #include<stdio.h>  // 包含stdio.h头文件
    int max(int, int);  // 函数声明
    int main(){
        int a, b, n;  // 声明两个整型变量
        printf("Input two integers: ");  // 以空格为分隔
    // 以'|'为分隔符，将输入的两个整数分别赋值给a, b
        scanf("%d|%d", &a, &b);
        // 以整数形式输出a、b和最大值，a, b, max(a,b)为参数列表
    n = max(a, b);
        printf("The max between %d and %d is %d.\n", a, b, n);
        return 0;
    }
    // 函数定义
    int max(int num1, int num2){  // num1, num2为形式参数(形参)
        if(num1>num2){  // 如果num1大于num2
            return num1;  // 返回num1并结束max函数
        }else{  // 如果num2大于num1
            return num2;  // 返回num2并结束max函数
        }
    }
