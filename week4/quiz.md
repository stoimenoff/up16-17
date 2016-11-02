Питанки
=======

Какъв ще бъде резултатът от изпълнението на долните парчета код?

### Питанка 0
```c++
#include <iostream>
using namespace std;

int main()
{
	int number = 12;
	cout << number++ << endl;
	cout << number << endl;
	cout << --number << endl;
	return 0;
}
```

### Питанка 1
```c++
#include <iostream>

int main()
{
	int number = 12, anotherNumber = 0;
	anotherNumber = number++;
	std::cout << number << std::endl;
	std::cout << anotherNumber << std::endl;
	return 0;
}
```

### Питанка 2
```c++
#include <iostream>

int main()
{
	int number = 12, anotherNumber = 0, awesomeNumber;
	awesomeNumber = anotherNumber = number++, number--, --number, 10;
	number -= 2;
	std::cout << number << std::endl;
	std::cout << anotherNumber << std::endl;
	return 0;
}
```

### Питанка 3
```c++
#include <iostream>

int main()
{
	int number = 10, awesomeNumber = 20;
	int awesomeNumber = 40;
	std::cout << awesomeNumber << std::endl;
	return 0;
}
```

### Питанка 4
```c++
#include <iostream>
using namespace std;

int main()
{
	int number = 10, awesomeNumber = 20;
	if(number == 10)
	{
		int awesomeNumber = 30;
		cout << awesomeNumber << endl;
		if(awesomeNumber == 20)
		{
			int number = 40;
			cout << number << endl;
		}
		else
		{
			cout << number << endl;
		}
	}
	return 0;
}
```

### Питанка 5
```c++
#include <iostream>
using namespace std;

int main()
{
	const float PI = 3.14159265;
	const int integerPI = PI;
	cout << integerPI << endl;

	PI = 3.9;
	cout << (int)PI << endl;

	cout << (bool)0 << endl;
	cout << (bool)1 << endl;
	cout << (bool)42 << endl;

	return 0;
}
```

### Питанка 6
```c++
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << pow(5, 1/2) << endl;
	return 0;
}
```

### Питанка 7
```c++
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setw(5) << 1.2345678 << endl;
	return 0;
}
```

### Питанка 8
```c++
#include <iostream>
using namespace std;

int main()
{
	unsigned int x = 19, y = 4;

	cout << ~x << endl;
	cout << x | y << endl;
	cout << x & y << endl;
	cout << x ^ y << endl;

	cout << (~x | x) << endl;

	cout << (x << 1) << endl;
	cout << (x << 2) << endl;

	cout << (x >> 1) << endl;
	cout << (x >> 2) << endl;

	x >>= 1;
	x |= x >> 1;

	cout << x << endl;

	return 0;
}
```

### Питанка 9
```c++
#include <iostream>
using namespace std;

int main()
{
	int currentNumber, counter = 0;
	do
	{
		cin >> currentNumber;
		counter += 1;
	}
	while(currentNumber != 10);

	cout << counter << endl;

	return 0;
}
```

### Питанка 10
```c++
#include <iostream>
using namespace std;

int main()
{
	for (int counter = 12; counter > -5; counter -= 3)
	{
		if(counter == 6)
		{
			continue;
		}
		else if(counter == 2)
		{
			break;
		}
		cout << counter << endl;
	}
	return 0;
}
```
