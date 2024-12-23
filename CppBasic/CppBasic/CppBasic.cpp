// CppBasic.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

/* 수업 내용
* C는 절차적 언어 C++은 객체지향 언어
* (.h) 헤더 파일을 선언부, (.cpp) 소스 파일을 정의부라고 부른다.
* std는 표준 함수
* 
* 단축키
* F12(문서로 이동)
* F5(디버그 모드로 시작)
* F9(Breaking Point)
* F10(Breaking Point 다음줄 실행)
* F7(프로그램 빌드)
* Shift + Del(한줄씩 지우기)
* Ctrl + D(한줄 복사)
* Ctrl + K + O(헤더와 소스를 전환)
* Ctrl + ,(코드 검색 기능)
* Ctrl + .(빠른 작업 및 리팩토링)
* Ctrl + Tab(열려있는 창 이동)
* Alt + 위,아래(줄바꿈)
*/
#include <iostream> //<>꺽쇄는 기본적으로 내장된 것
#include "Test.h"
#include "CppBasic.h"
#include "MyStruct.h"
#include "MyClass.h"
#include "Animal.h"
#include "CppTest.h"

using namespace std; //std 네임스페이스를 기본적으로 사용한다고 표시

int main() // main 함수(엔트리포인트-시작지점)
{
    Test day;
    //day.Test_1219_inputOutPut();
    //day.Test_1219_DataType();
    //day.Test_1219_Arithmetic();

    //day.Test_1220_Assignment();
    //day.Test_1220_Comparison();
    //day.Test_1220_Logical();
    //day.Test_1220_Bitwise();
    //day.Test_1220_ControlStatement();
    //day.Test_1220_SlotMachine();
    //day.Test_1220_RPS();
 
    //day.Test_1223_Pointer();
    //day.Test_1223_Reference();
    //day.Test_1223_String();
	//day.Test_1223_StringPractice();

	//// 클래스 : 객체의 데이터와 동작을 표현한 것
	//MyClass a;
	//a.height = 180;

	//Animal* animal = new Animal();
	//animal->Cry();

	///*Dog* dog = new Dog();
	//dog->Cry();*/
	//Animal* dog = new Dog();
	//dog->Cry();		// Cry가 일반 함수라면 현재 자신의 타입을 기준으로 함수가 실행됨
	//// Cry가 가상 함수라면 자신의 인스턴스 기준으로 함수가 실행됨

	//delete dog;
	//dog = nullptr;

	//delete animal;
	//animal = nullptr;

    std::vector<std::vector<std::string>> maze;
    generateMaze(maze);

    int currentRow = 0, currentCol = 0;

    std::cout << "Welcome! You are at: Start\n";

    while (true) {
        printMaze(maze);
        int input = getValidInput();
        movePlayer(currentRow, currentCol, input);

        std::cout << "You are now at: (" << currentRow << ", " << currentCol << ") - " << maze[currentRow][currentCol] << "\n";

        if (maze[currentRow][currentCol] == "Goal Point") {
            std::cout << "Congratulations! You've reached the Goal Point!\n";
            break;
        }
    }

    return 0;

}