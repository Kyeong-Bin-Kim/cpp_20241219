#pragma once

class Test
{
public :
	int data = 0;

	void Run();
	void Run2();

	void Test_1219_inputOutPut();
	void Test_1219_DataType();
	void Test_1219_Arithmetic();

	void Test_1220_Assignment();
	void Test_1220_Comparison();
	void Test_1220_Logical();
	void Test_1220_Bitwise();
	void Test_1220_ControlStatement();
	void Test_1220_SlotMachine();
	void Test_1220_RPS();
	void Test_1220_Template();
	void Test_1220_Array();

};

void TestFunction(int, float); //함수의 선언 : 리턴값의 타입, 함수 이름, 파라메터들(0게 이상 가능) //void 리턴 값이 필요 없는 경우
int TestFunction2(int, float);
int Add(int num1, int num2);
float Add(float num1, float num2);

template<typename T>
inline T TemplateAdd(T num1, T num2)
{
	return num1 + num2;
}

template<typename T>
inline T Clamp(T value, T min, T max)
{
	T result = value;
	if (value < min)
	{
		result = min;
	}
	if (value > max)
	{
		result = max;
	}

	return result;
}
