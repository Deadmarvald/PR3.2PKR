#include "pch.h"
#include "CppUnitTest.h"
#include "../PR3.2PKR/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT32PKR
{
	TEST_CLASS(UT32PKR)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			int N = 3;
			Student* s = new Student[N];

			s[0].prog = 5;
			s[1].prog = 5;
			s[2].prog = 5;
			s[0].kurs = 1;
			s[1].kurs = 1;
			s[2].kurs = 1;
			s[0].secondname = "1";
			s[0].secondname = "1";
			s[0].secondname = "1";

			t = BinSearch(s, N, 5, 1, "1");

			Assert::AreEqual(t, -1.);
		}
	};
}