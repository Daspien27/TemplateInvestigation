#pragma once

namespace std
{
	template<class _Ty>
		class allocator;

	template<class _Ty,
		class _Alloc = allocator<_Ty>>
		class vector;
}

struct A_1 {};
struct A_2 {};
struct A_3 {};
struct A_4 {};
struct A_5 {};
struct A_6 {};
struct A_7 {};
struct A_8 {};
struct A_9 {};
struct A_10 {};

struct Instantiate
{
	std::vector<A_1>* mem_1;
	std::vector<A_2>* mem_2;
	std::vector<A_3>* mem_3;
	std::vector<A_4>* mem_4;
	std::vector<A_5>* mem_5;
	std::vector<A_6>* mem_6;
	std::vector<A_7>* mem_7;
	std::vector<A_8>* mem_8;
	std::vector<A_9>* mem_9;
	std::vector<A_10>* mem_10;
};