#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */
//関数の型 bool
//引数 int
//内容 素数判定を行い素数であればtrue素数でなければfalse返す。
bool is_prime(int num) {
	if (num < 2) return false;
	//もしnumが2より小さい場合、0を返す。    
	if (num == 2) return true;
	//もしnumが2だった場合、1を返す
	for (int i = 2; i <= num / 2; i++) {
		if (num%i == 0) return false;
		//もし、numがほかの数（i）で割り切れたら素数ではないので、0を返す。    
	}
	return true;
	//素数であるときのみtrueを返す。
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
int main() {
	std::cout << "答え" << 92809 << "出力値" << nth_prime(367, 186, 151) << std::endl;
	std::cout << "答え" << 6709 << "出力値" << nth_prime(179, 10, 203) << std::endl;
	std::cout << "答え" << 12037 << "出力値" << nth_prime(271, 37, 39) << std::endl;
	std::cout << "答え" << 103 << "出力値" << nth_prime(103, 230, 1) << std::endl;
	std::cout << "答え" << 93523 << "出力値" << nth_prime(27, 104, 185) << std::endl;
	std::cout << "答え" << 14503 << "出力値" << nth_prime(253, 50, 85) << std::endl;
	std::cout << "答え" << 2 << "出力値" << nth_prime(1, 1, 1) << std::endl;
	std::cout << "答え" << 899429 << "出力値" << nth_prime(9075, 337, 210) << std::endl;
	std::cout << "答え" << 5107 << "出力値" << nth_prime(307, 24, 79) << std::endl;
	std::cout << "答え" << 412717 << "出力値" << nth_prime(331, 221, 177) << std::endl;
	std::cout << "答え" << 22699 << "出力値" << nth_prime(259, 170, 40) << std::endl;
	std::cout << "答え" << 25673 << "出力値" << nth_prime(269, 58, 102) << std::endl;
	// 以下、同様に、入出力例通りになるか確認せよ。
	std::cin.get();
	return 0;
}