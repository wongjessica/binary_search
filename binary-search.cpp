#include <iostream>
#include <vector>

using namespace std;

void Binary_Search(const vector<int> &numbers, int value);

int main() {
   
vector <int>my_numbers;
  
for (int i=0; i<4000000; i++) my_numbers.push_back(i);

cout << "Size of vector my_nymbers :" << my_numbers.size() << endl; 
	Binary_Search(my_numbers, 2);
	Binary_Search(my_numbers, 23);
	Binary_Search(my_numbers, 534);


return 0;
}

void Binary_Search(const vector< int> &my_numbers, int key) {

int iteration = 0, left = 0, right = my_numbers.size()-1, mid;

while (left <= right) {
	iteration++;
	mid = (int) ((left + right) / 2);
	if (key == my_numbers[mid]) {
		cout << "Binary search found " << my_numbers[mid] << " after " << iteration << " iterations.\n";
		iteration++;
		return;
	}
else if (key > my_numbers[mid])
	left = mid + 1;
else
	right = mid - 1;
}
cout << "Binary search did not found " << my_numbers[mid] << " after " << iteration << " iterations.\n";

return;

}
