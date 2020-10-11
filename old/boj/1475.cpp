#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string N;
	cin >> N;

	vector<ll> nums;
	nums.resize(11, 0);

	char p = '0';

	for(auto n : N) {
		ll num = n - p;
		nums[num]++;
	}

	ll x = ceil((nums[6] + nums[9]) / 2.0);
	nums[6] = nums[9] = x;
	
	cout << *max_element(nums.begin(), nums.end()) << "\n";
}