#pragma once

// enum : 열거형
// 관련 상수들을 하나의 그룹으로 묶어 이름을 정의한 것
//스코프 : 전역 범위

//#define PLAIN 1
//const int plain = 1;

enum LandType
{
	None = -1,
	Plain = 0,
	Mountain,
	River,
	Start,
	Goal,
	NumOfLandType
};

//enum TestType
//{
//	None
//};

//enum class
//이름이 겹치는 것을 방지할 수 있다.
//타입에 안전하게 그룹화한다.
enum class ELandType
{
	None = -1,
	Plain = 0,
	Mountain,
	River,
	Start,
	Goal,
	NumOfLandType
};