#include <iostream>
#include <cstring>

using namespace std;


class MyString
{
public:
    MyString()
    {
        // ȣ�� ���� Ȯ��
        cout << "MyString()" << endl;

        size_ = 1;
        str_ = new char[size_];
    }

    MyString(const char* init_str) // init_str�� ��ȿ�� �޸𸮶�� ����
    {
        cout << "MyString(const char *init_str)" << endl;

        // 1. ���� �� ���� Ȯ��
        size_ = 0;
        while (init_str[size_] != '\0')
        {
            size_++; // ++ ������ �ȳ�
        }

        // 2. ���� ���� 0�� �ƴϸ� �޸� �Ҵ�
        if (size_ > 0)
        {
            str_ = new char[size_];
        }

        // 3. ����
        for (int i = 0; i < size_; i++)
        {
            str_[i] = init_str[i];
        }
        // memcpy() ��� ����
    }

    ~MyString()
    {
        // ȣ�� ���� Ȯ��
        cout << "Destructor" << endl;

        size_ = 0;
        if (str_)
            delete[] str_;
    }

    void Resize(int new_size)
    {
        char* new_str = new char[new_size];

        // memcpy() ��� ����
        for (int i = 0; i < (new_size < size_ ? new_size : size_); i++)
        {
            new_str[i] = str_[i];
        }

        delete[] str_;
        str_ = new_str;
        size_ = new_size;

    }

    void Print()
    {
        for (int i = 0; i < size_; i++)
        {
            cout << str_[i];
        }
        cout << endl;
    }

    void Append(MyString* app_str) // ���� Ÿ���� �Ű������� ��� ����
    {
        int old_size = size_;

        // �ٸ� ��� �Լ� ȣ�� ����
        Resize(size_ + app_str->size_);

        // �߿��� ����
        for (int i = old_size; i < size_; i++)
        {
            str_[i] = app_str->str_[i - old_size];
        }
    }

private:
    int size_ = 0;        // m_size
    char* str_ = nullptr; // m_str (���⼭�� ���� ��Ÿ��)
};

int main()
{
    MyString str1("ABCDE"); // ������ �̿�
    MyString str2("123");

    str1.Print();

    str1.Append(&str2); // �ּ� �־���

    str1.Print();

    return 0;
}