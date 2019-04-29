#pragma once

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <thread>
#include <chrono>
#include <stdlib.h>

namespace dtl
{

// �ȴ�ָ��ʱ��gap_ms > 0����ֱ���û����� gap_ms=0
static void wait(size_t gap_ms = 1000)
{
	if (gap_ms == 0) {
		system("pause");
	} else {
		std::this_thread::sleep_for(std::chrono::milliseconds(gap_ms));
	}
}

}