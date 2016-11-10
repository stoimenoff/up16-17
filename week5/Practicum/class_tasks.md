### Да се напише програма, която извежда членовете на редицата 5 8 11 14 17

```c++
#include<iostream>
using namespace std;

int main(){
	for (int start = 5; start <= 17; start += 3){
		cout << start << " ";
	}
	return 0;
}
```

### Да се напише програма, в която потребителят въвежда първият член, разликата на аритметична прогресия. Да се изведът първите N члена на редицата.

```c++
#include<iostream>
using namespace std;

int main(){
	int start, step, n;
	cout << "Please, a value for the first member of the arithmetic progression: ";
	cin >> start;
	cout << "Please, enter the difference of the arithmetic progression:";
	cin >> step;
	cout << "Please, enter the number of members you want to find: ";
	cin >> n;
	for (int i = start; i < start + (n - 1)* step; i += step){
		cout << i << " ";
	}
	return 0;
}
```

### Да се напише програма, в която по дадено число k, извежда редицата на фибонаци до k- тото число.

```c++
#include<iostream>
using namespace std;

int main(){
	int first = 0;
	int second = 1;
	int next, k;
	cout << "Please, enter a value for k: ";
	cin >> k;
	for (int i = 0; i < k; i++){
		if (i == 0 || i == 1){
			cout << i << " ";
		}
		else{
			next = first + second;
			first = second;
			second = next;
			cout << next << " ";
		}
	}
	return 0;
}
```