#include <iostream>
using namespace std;

/*
	John عنده فلوس في البنك
	وكل سنة بيحصل 3 حاجات:

	البنك بيدي فايدة (interest)
	هو بيسحب فلوس يعيش بيها
	المصاريف بتاعته بتزيد بسبب inflation

	👉 وانت مطلوب منك تشوف:
	هل الفلوس هتكفي لحد السنة رقم n ولا هتخلص قبل كده؟
*/

class BankerPlan {
public:
    static bool fortune(int f0, double p, int c0, int n, double i) {

		if (f0 < 0 || p < 0 || c0 < 0 || n < 0 || i < 0)
			return false;

		size_t itr = 1;
		while (itr < n)
		{
 			f0 += int(f0 * p / 100.0);
 			f0 -= c0;
 			c0 += int(c0 * i / 100.0);

			if (f0 < 0) {
				return false;
			}
			itr++;
		}

		return true;
	}
};

// f0 = 100000, → الفلوس في البداية
// p = 1 percent, نسبة الفايدة
// c0 = 2000, → المصاريف أول سنة
// n = 15, → عدد السنين
// i = 1 percent → نسبة التضخم

int main() {

	BankerPlan banker;

	cout << banker.fortune(100000, 1, 2000, 15, 1) << "\n" ;

	return 0;
}
