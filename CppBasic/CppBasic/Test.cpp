#include <iostream>
#include "Test.h"

#define PI 3.141592 //매크로 : 컴파일 할 때 PI를 대체

using namespace std;

void Test::Run()
{
}

void Test::Run2()
{
}

void Test::Test_1219_inputOutPut()
{
    int number = 10;
    float fNumber = 10.0f;
    string name = "Kim Kyeong Bin";

    //std::cin >> number; // c++ 표준 입력 방식
    //scanf_s("%d", &number); // c언어의 방식
    //std::cout << "Hello World!\n"; // c++의 표준 콘솔 출력방식
    cout << "Hello World!" << number << "\n";
    printf("Hello World!\n"); // c언어의 표준 출력 방식
    printf("Hello World! %f\n", fNumber); // c언어의 표준 출력 방식(%d 정수, %f 실수, %s 문자열)

    cout << "My name is " << name << "\n";
    printf("My name is %s.\n", name.c_str());
}

void Test::Test_1219_DataType()
{
    // 1bit = 0 아니면 1만 저장
    // 1Byte = 8bit
    // 1KByte = 1024 Byte

    int i = 0; //인티저 변수 i를 선언함 //integer = 부호 있는 정수, 소수점 없는 숫자 //32bit 크기
    cout << "Integer Size : " << sizeof(i) << "Byte" << endl;

    unsigned int j = 3000000000; //오버플로우 발생 // 부호없는 정수
    i = 20;

    float f = 0.0f; //플로트 변수 f를 선언함. float = 실수, 수수점 있는 숫자 //32bit 크기 // 태생적을 오차가 있는 데이터타입이기 때문에 비교를 하면 안된다
    cout << "float Size : " << sizeof(f) << "Byte" << endl;
    // 12.5 = 125 * 10^-1

    char c; // 캐릭터 변수 c를 선언함. 정수형, 8bit
    c = 'a'; // 97
    c = 'a' + 1; //'b'
    cout << "char Size : " << sizeof(c) << "Byte" << endl;

    bool b; //불리언, 8bit
    b = true;
    b = false;
    cout << "bool Size : " << sizeof(b) << "Byte" << endl;

    //스트링, 가변 사이즈
    std::string str = "String";

    double d = 1.0; // 실수, 64bit, float에 비해 정밀도가 더 뛰어남

    //컴파일 타임에 컴파일러가 추측해서 데이터타입을 결정
    auto a = 20;

    //상수 : 변할 수 없는 숫자, 컴파일 타임에 결정
    const int con = 0;

    float pi = PI;
}

void Test::Test_1219_Arithmetic()
{
    // 산술연산자
    int a = 10;
    int b = 20;
    int c = a + b;
    auto d = c + 10.5f; // 암시적 캐스팅 : int와 float을 연산한 결과는 암시적으로 float으로 변화한다.

    int aa = (int)(10 + 10.5f); // 명시적 캐스팅 : int로 강제 캐스팅

    c = a - b;
    c = a * b;
    c = a / b;

    // 10.0f * 0.1f = 1.0f // 나누기보다는 곱하기가 빠르다
    // 10.0f / 10.0f = 1.0f

    a = 7;
    b = 3;
    c = a % b; // 나머지를 구하는 연산
    cout << c << endl;
    c = 0;
    c = a - (a / b) * b;
    cout << c << endl;

    int end = 0;
}
