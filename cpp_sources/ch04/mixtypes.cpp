/*
// mixtypes.cpp -- some type combinations
#include <iostream>

struct antarctica_years_end {
	int year;
};

int main() {
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	antarctica_years_end* pa = &s02;
	pa->year = 1999;
	//trio��һ�����飬trio[0]��һ���ṹ����trio[0].year�Ǹýṹ��һ����Ա
	antarctica_years_end trio[3];
	trio[0].year = 2003;
	//��������һ��ָ�룬��˿���ʹ�ü�ӳ¹ڷ��ţ�
	std::cout << trio->year << std::endl;
	//����һ��ָ�����飬arp[1]�ȼ���&s02����ָ��s02��ָ��
	const antarctica_years_end* arp[3] = {&s01, &s02, &s03};
	std::cout << arp[1]->year << std::endl;
	//arp��ָ��������������������һ��Ԫ�صĵ�ַ
	const antarctica_years_end** ppa = arp;
	auto ppd = arp;
	//ppa=arp˵��ppaָ���˵�һԪ�أ���һ��Ԫ����s01�Ľṹָ��&s01
	//���ppa��ָ��ṹָ���ָ�룬��ô*ppa�ȼ��ڵ�һ��Ԫ��&s01
	std::cout << (*ppa)->year << std::endl;
	std::cout << (*(ppd+1))->year << std::endl;

	return 0;
}
*/