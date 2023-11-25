#include <iostream>
#include <vector>
using namespace std;

class IntCell {
public:
	IntCell() { storedValue = 0; }
	IntCell(int initialValue) { storedValue = initialValue; }
	int read() { return storedValue; }
	void write(int x) {
		storedValue = x;
	}
private:
	int storedValue;
};

int main() {
	vector<IntCell> cells;
	cells.push_back(IntCell(3));
	cells.push_back(IntCell(2));
	cells.push_back(IntCell());
	cells.push_back(IntCell(10));

	int sum = 0;
	for (size_t i = 0; i < cells.size(); i++)
	{
		sum += cells[i].read();
	}
	cout << "Sum: " << sum << endl;
	return 0;
}
 
