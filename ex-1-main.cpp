#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* �^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ�
* �f����Ԃ��B
*
* TODO: ���� nth_prime �֐�����������B�K�v�ł���Α��Ɋ֐���
* �t�@�C�����쐬����B
*/
/* -------------------------------------------------------------- */
int nth_prime(unsigned int a, unsigned int b, unsigned int n) {
	int current = a;
	int count = 0;
	do {
		if ((current))++count;
		if (count == n)return current;
		current += b;
	} while (current <= CPP2_PRIME_UPPER_LIMIT);
return -1;
}
int nth_prime(unsigned int a, unsigned int d, unsigned int n);
int main() {
	std::cout << "����" << 92809 << "�o�͒l" << nth_prime(367, 186, 151) << std::endl;
	std::cout << "����" << 6709 << "�o�͒l" << nth_prime(179, 10, 203) << std::endl;
	std::cout << "����" << 12037 << "�o�͒l" << nth_prime(271, 37, 39) << std::endl;
	std::cout << "����" << 103 << "�o�͒l" << nth_prime(103, 230, 1) << std::endl;
	std::cout << "����" << 93523 << "�o�͒l" << nth_prime(27, 104, 185) << std::endl;
	std::cout << "����" << 14503 << "�o�͒l" << nth_prime(253, 50, 85) << std::endl;
	std::cout << "����" << 2 << "�o�͒l" << nth_prime(1, 1, 1) << std::endl;
	std::cout << "����" << 899429 << "�o�͒l" << nth_prime(9075, 337, 210) << std::endl;
	std::cout << "����" << 5107 << "�o�͒l" << nth_prime(307, 24, 79) << std::endl;
	std::cout << "����" << 412717 << "�o�͒l" << nth_prime(331, 221, 177) << std::endl;
	std::cout << "����" << 22699 << "�o�͒l" << nth_prime(259, 170, 40) << std::endl;
	std::cout << "����" << 25673 << "�o�͒l" << nth_prime(269, 58, 102) << std::endl;
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	return 0;
}