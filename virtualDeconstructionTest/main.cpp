#include <iostream>
class CBook {
public:
    CBook()
    {
        a = 10;
        b = 100;
    }
    virtual ~CBook()
    {
        std::cout << "CBook deconstruction" << std::endl;
    }
private:
    int a;
    int b;
};

class CBookChild : public CBook {
public:
    ~CBookChild()
    {
        std::cout << "CBookChild deconstruction" << std::endl;
    }
};

int main()
{
    // CBook a; // ��������������ֻ�������������ã�1����a���ַ�new�����Ķ����������ڽ���ʱ����
    CBook* p = new CBookChild();                  // 2������new�����Ķ��󣬲�delete�����á�
    delete p;

    // ����һ����ͨ������˵�������������Ӧ��ֻ����һ�Σ���Ϊ���ָ��ʵ������ָ��һ���������ģ�
    // ������Ϊ���������������л����
    // ��������Ҳ�������ˣ������������ಿ�֣���Ϊ��ʵ˵ʵ�ڵģ��������������ʱ����Ҳ�Ӹ����
    // ���캯����ʼ��ô!

    // CBook* q = new CBookChild(3); // ����˵�������뿽�����캯���йأ������ڻ������ס�
    return 0;
}