#pragma once

// =====================
// 디자인 패턴(설계 유형)
// =====================

// ==================================
// 싱글톤 패턴
// 클래스로 생성되는 객체를 1개로 제한
// ==================================
//class CEngine
//{
//private:
//	static CEngine* pEngine; // 정적 맴버
//
//private:
//	wstring	m_Name; // 맴버
//
//public:
//	// 객체를 1개 만들어서 반화해주는 함수를 구현
//	// 정적 맴버함수 - this 를 사용하지 않는다
//	// 1. 객체가 없어도 호출 가능
//	// 2. 맴버에 접근 불가능
//	// 3. 맴버함수의 특징, 클래스의 private 에 접근 가능
//	//                    클래스의 정적 맴버변수에는 접근 가능
//	static CEngine* GetEngine() // 정적 맴버함수
//	{
//		if (nullptr == pEngine)
//		{
//			pEngine = new CEngine;
//		}
//		
//		return pEngine;
//	}
//
//	static void Destroy()
//	{
//		if (nullptr != pEngine)
//			delete pEngine;
//	}
//
//private:
//	CEngine();
//  CEngine(const CEngine& _other) = delete;
//
//public:
//	~CEngine();
//};



class CEngine
{
private:


public:
	static CEngine* GetEngine()
	{
		static CEngine engine;	
		return &engine;
	}

private:
	CEngine();
	CEngine(const CEngine& _other) = delete;
};


