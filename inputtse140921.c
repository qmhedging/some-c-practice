    #include<stdio.h>  // ����stdio.hͷ�ļ�
    int max(int, int);  // ��������
    int main(){
        int a, b, n;  // �����������ͱ���
        printf("Input two integers: ");  // �Կո�Ϊ�ָ�
    // ��'|'Ϊ�ָ���������������������ֱ�ֵ��a, b
        scanf("%d|%d", &a, &b);
        // ��������ʽ���a��b�����ֵ��a, b, max(a,b)Ϊ�����б�
    n = max(a, b);
        printf("The max between %d and %d is %d.\n", a, b, n);
        return 0;
    }
    // ��������
    int max(int num1, int num2){  // num1, num2Ϊ��ʽ����(�β�)
        if(num1>num2){  // ���num1����num2
            return num1;  // ����num1������max����
        }else{  // ���num2����num1
            return num2;  // ����num2������max����
        }
    }
