#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l
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
//�֐��̌^ bool
//���� int
//���e �f��������s���f���ł����true�f���łȂ����false�Ԃ�
bool is_prime(int num) {
	if (num < 2) return false;
	//����num��2��菬�����ꍇ0��Ԃ�    
	if (num == 2) return true;
	//����num��2�������ꍇ1��Ԃ�
	for (int i = 2; i <= num / 2; i++) {
		if (num%i == 0) return false;
		//�����Anum���ق��̐��ii�j�Ŋ���؂ꂽ��f���ł͂Ȃ��̂�0��Ԃ�    
	}
	return true;
	//�f���ł���Ƃ��̂�true��Ԃ�
}
int nth_prime(unsigned int a, unsigned int b, unsigned int n) {
	int current = a;
	int count = 0;
	do {
		if (is_prime(current))++count;
		if (count == n)return current;
		current += b;
	} while (current <= CPP2_PRIME_UPPER_LIMIT);
	return -1;
}
bool check(int answer, int unanswered) {
	if (answer == unanswered) return true;
	//�����Ɠ��͒l���r���Đ����Ȃ�true��Ԃ�
	return false;
	//�������Ԉ���Ă���Ύ����I��false��Ԃ�
}
int main() {
	int test = 0;
	std::cout << "����" << 92809 << "�o�͒l" << nth_prime(367,186,151) << std::endl;
	test += check(92809, nth_prime(367,186,151));
	std::cout << "����" << 6709 << "�o�͒l" << nth_prime(179,10,203) << std::endl;
	test += check(6709,nth_prime(179,10,203));
	std::cout << "����" << 12037 << "�o�͒l" << nth_prime(271,37,39) << std::endl;
	test += check(12037,nth_prime(271,37,39));
	std::cout << "����" << 103 << "�o�͒l" << nth_prime(103,230,1) << std::endl;
	test += check(103,nth_prime(103,230,1));
	std::cout << "����" << 93523 << "�o�͒l" << nth_prime(27,104,185) << std::endl;
	test += check(93523,nth_prime(27,104,185));
	std::cout << "����" << 14503 << "�o�͒l" << nth_prime(253,50,85) << std::endl;
	test += check(14503,nth_prime(253,50,85));
	std::cout << "����" << 2 << "�o�͒l" << nth_prime(1,1,1) << std::endl;
	test += check(2,nth_prime(1,1,1));
	std::cout << "����" << 899429 << "�o�͒l" << nth_prime(9075,337,210) << std::endl;
	test += check(899429, nth_prime(9075,337,210));
	std::cout << "����" << 5107 << "�o�͒l" << nth_prime(307,24,79) << std::endl;
	test += check(5107, nth_prime(307,24,79));
	std::cout << "����" << 412717 << "�o�͒l" << nth_prime(331,221,177) << std::endl;
	test += check(412717, nth_prime(331,221,177));
	std::cout << "����" << 22699 << "�o�͒l" << nth_prime(259,170,40) << std::endl;
	test += check(22699, nth_prime(259,170,40));
	std::cout << "����" << 25673 << "�o�͒l" << nth_prime(269,58,102) << std::endl;
	test += check(25673, nth_prime(269, 58, 102));
	if (test == 12) {
		std::cout << "�����Əo�͒l�͐���Ƀe�X�g����܂���" << std::endl;
	}
	else {
		std::cout << "�����Əo�͒l�̃e�X�g�Ɉُ킪����܂���" << std::endl;
	}
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	std::cin.get();
	return 0;
}