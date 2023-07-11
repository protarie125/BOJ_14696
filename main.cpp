#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

class Card {
public:
	int star{ 0 };
	int circle{ 0 };
	int square{ 0 };
	int triangle{ 0 };

	auto operator<=>(const Card&) const = default;
	bool operator==(const Card&) const = default;
};

Card getCard()
{
	int a;
	cin >> a;

	auto ret = Card{};
	while (0 < (a--)) {
		int x;
		cin >> x;
		if (4 == x) {
			++ret.star;
		}
		else if (3 == x) {
			++ret.circle;
		}
		else if (2 == x) {
			++ret.square;
		}
		else if (1 == x) {
			++ret.triangle;
		}
	}

	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	while (0 < (n--)) {
		const auto ac = getCard();
		const auto bc = getCard();

		if (bc < ac) {
			cout << "A\n";
		}
		else if (ac == bc) {
			cout << "D\n";
		}
		else {
			cout << "B\n";
		}
	}

	return 0;
}