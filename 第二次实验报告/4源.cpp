#include <iostream>  
using namespace std;

int main() {
    double num1, num2;  
    char op;           
    cout << "请输入要运算的式子（格式：操作数 运算符 操作数，例如 3 + 5 或 7 % 2）：" << endl;
    cin >> num1 >> op >> num2;
    switch (op) {
    case '+':  
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-': 
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*': 
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':  
        if (num2 == 0) {
            cout << "错误：除数不能为0！" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%': {  
        bool isNum1Int = (num1 == static_cast<int>(num1));
        bool isNum2Int = (num2 == static_cast<int>(num2));
        if (!isNum1Int || !isNum2Int) {
            cout << "错误：取余运算要求操作数必须为整数！" << endl;
        }
        else {
            int int1 = static_cast<int>(num1);  
            int int2 = static_cast<int>(num2);
            if (int2 == 0) { 
                cout << "错误：除数不能为0！" << endl;
            }
            else {
                cout << int1 << " % " << int2 << " = " << (int1 % int2) << endl;
            }
        }
        break;
    }
    default:  
        cout << "错误：非法运算符！请使用 +、-、*、/、% 中的一个。" << endl;
    }

    return 0;
}
