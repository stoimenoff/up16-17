Питанки
=======

Какъв ще бъде резултатът от изпълнението на долните парчета код?

### Питанка 0
```c++
#include <iostream>
using namespace std;

int main()
{
	int i = 10;
	for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
	}
	cout << i << endl;
	return 0;
}
```

### Питанка 1
```c++
#include <iostream>

int main()
{
	for (double i = 65; i < 68; i+=0.5)
	{
		std::cout << i << " " << (int)i << " " << (char)i << std::endl;
	}
	return 0;
}
```

### Питанка 2
```c++
#include <iostream>
using namespace std;

int main()
{
	int x = 2, n = 4;
	for (int i = 0; i < n; ++i)
	{
		x = x * x;
	}
	cout << x << endl;

	return 0;
}
```

### Питанка 3
```c++
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int main()
{
	int x = 100;
	for (int divisor = 1; divisor < x; ++divisor)
	{
		if(x % divisor == 0)
		{
			cout << divisor << endl;
		}
	}
	return 0;
}
```

### Питанка 4
```c++
#include <iostream>
using namespace std;

int main()
{
	for (int number = 0; number < 1000; ++number)
	{
		if((number % 10) % 3 == 0)
		{
			continue;
		}
		cout << number << endl;
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
	int number, sum = 0;
	cin >> number;
	while(number > 0)
	{
		sum += (number % 10);
		number /= 10;
	}
	cout << sum << endl;
	return 0;
}
```

### Питанка 6
```c++
#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	while(number > 0)
	{
		cout << (number % 2) << endl;
		number /= 2;
	}
	return 0;
}
```

### Питанка 7
```c++
#include <iostream>
using namespace std;

int main()
{
	int digit, number = 0;
	cin >> digit;
	while(digit != 0)
	{
		number = number * 10;
		number = number + digit;
		cin >> digit;
	}
	cout << number << endl;
}
```

### Питанка 8
```c++
#include <iostream>
using namespace std;

int main()
{
	int rows = 6;
	for (int row = 1; row <= rows; ++row)
	{
		for (int column = 0; column < row; ++column)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
```

### Питанка 9
```c++
#include <iostream>
using namespace std;

// Нещо за разтоварване
int main()
{
	int counter = 0;
	for (int number = 1; number <= 53; ++number)
	{
		if(number % 17 == 0)
		{
			counter += 1;
		}
	}
	cout << counter << endl;
	return 0;
}
```

### Питанка 10
```c++
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Warning: easter egg ahead
int main()
{
	srand(time(NULL));
	cout << (rand() % 256) + 100 << endl;
	return 0;
}
```
