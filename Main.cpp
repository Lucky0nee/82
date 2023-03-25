#include <iostream>
#include <list>
#include <stack>

int main() {
	std::list<int> ls{ 1,2,3,4,5,6,7,8,9,10 };
	std::stack<int> st;

	std::cout << "stack: ";
	for (int i = 0; i < 10; i++) {
		st.push(ls.back());
		std::cout << st.top() << " ";

		ls.pop_back();
	}

	for (int i = 0; i < 10; i++) {
		if (st.top() != 7) {
			std::cout << "\nDeleted: " << st.top() << "";
			st.pop();
		}
	}

	return 0;
}

/*
Задано список {1,2,3,4,5,6,7,8,9,10}. На його основі створити стек, вилучити зі стека усі
елементи до тих пір, поки на вершині опиниться число 7. Вивести весь процес на
екран.
*/
