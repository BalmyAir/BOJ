/*1157*/
/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int alpha[26];
	string word;
	cin >> word;
	int max = 0;
	int flag = 0;

	for (int k = 0; k < 26; k++)
	{
		alpha[k] = 0;
	}

	for (int i = 0; i < word.length(); i++)
	{
		word[i] = toupper(word[i]);
		alpha[(int)word[i] - 65] ++;
	}
	for (int j = 0; j < 26; j++)
	{
		if (max < alpha[j])
			max = alpha[j];
	}
	int temp = 0;
	for (int z = 0; z < 26; z++)
	{
		if (alpha[z] == max)
		{
			temp = z;
			flag++;
		}
		if (flag > 1)
		{
			printf("?");
			break;
		}
	}
	if (flag == 1)
	{
		printf("%c", (char)(temp + 65));
	}
	return 0;
}*/

/*1152*/
/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int i = 0;
	int num = 0;
	int length = 0;

	char* senten = new char[1000001];
	fgets(senten, 1000001, stdin);

	while (senten[i] != '\0')
	{
		if (senten[i] == ' ')
			num++;

		length++;
		i++;
	}

	if (senten[0] == ' ')
		num--;

	if (senten[length - 2] == ' ')
		num--;

	printf("%d", num+1);

	system("pause");
	return 0;
}*/

/*1152*///참고용
/*#include <iostream>
#include <string>
using namespace std;

int main()

{

	int num = 0;
	string word = {};
	getline(cin, word);
	for (int i = 0; i < word.length(); i++)
	{
		if (word.at(i) == ' ')
			num++;
	}

	if (word.at(0) == ' ')
	{
		num = num - 1;
	}

	if (word.at(word.length() - 1) == ' ')
	{
		num = num - 1;
	}

	cout << num + 1 << endl;

	system("pause");
}*/

/*2908*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int main()
{
	//int * num1 = new int[3];
	//int * num2 = new int[3];
	int num1;
	int num2;

	int result1[3];
	int result2[3];


	scanf("%d %d", &num1, &num2);

	result1[0] = num1 % 10;
	result1[1] = (num1 % 100)/10;
	result1[2] = num1 / 100;

	result2[0] = num2 % 10;
	result2[1] = (num2 % 100) / 10;
	result2[2] = num2 / 100;


	if (result1[0] > result2[0])
		printf("%d%d%d", result1[0], result1[1], result1[2]);
	else if (result1[0] < result2[0])
		printf("%d%d%d", result2[0], result2[1], result2[2]);
	else
	{
		if (result1[1] > result2[1])
			printf("%d%d%d", result1[0], result1[1], result1[2]);
		else if (result1[1] < result2[1])
			printf("%d%d%d", result2[0], result2[1], result2[2]);
		else
		{
			if (result1[2] > result2[2])
				printf("%d%d%d", result1[0], result1[1], result1[2]);
			else if (result1[2] < result2[2])
				printf("%d%d%d", result2[0], result2[1], result2[2]);
		}
	}
	return 0;
}*/

/*2908*///수정한것
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num1;
	int num2;

	int result1[3];
	int result2[3];


	scanf("%d %d", &num1, &num2);

	result1[0] = num1 % 10;
	result1[1] = (num1 % 100) / 10;
	result1[2] = num1 / 100;
	num1 = result1[0] * 100 + result1[1] * 10 + result1[2];

	result2[0] = num2 % 10;
	result2[1] = (num2 % 100) / 10;
	result2[2] = num2 / 100;
	num2 = result2[0] * 100 + result2[1] * 10 + result2[2];

	if (num1 > num2)
		printf("%d", num1);
	else
		printf("%d", num2);
	return 0;
}*/

/*5622*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int time = 0;
	char word[16];
	scanf("%s", &word);

	while ((int)word[i] != '\0')
	{
		if (65 <= (int)word[i] && (int)word[i] <= 67)
			time += 3;
		else if (68 <= (int)word[i] && (int)word[i] <= 70)
			time += 4;
		else if (71 <= (int)word[i] && (int)word[i] <= 73)
			time += 5;
		else if (74 <= (int)word[i] && (int)word[i] <= 76)
			time += 6;
		else if (77 <= (int)word[i] && (int)word[i] <= 79)
			time += 7;
		else if (80 <= (int)word[i] && (int)word[i] <= 83)
			time += 8;
		else if (84 <= (int)word[i] && (int)word[i] <= 86)
			time += 9;
		else if (87 <= (int)word[i] && (int)word[i] <= 90)
			time += 10;

		i++;
	}
	printf("%d", time);
	return 0;
}*/

/*2941*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int num = 0;
	char word[101];
	scanf("%s", &word);

	while (word[i] != '\0')
	{
		num++;

		switch (word[i])
		{
		case 'c':
			if (word[i + 1] == '=' || word[i + 1] == '-')
			{

				i++; // 다음에 오는 글자 검사를 하지 않기 위해서
			}

			break;
		case 'd':
			if (word[i + 1] == 'z'&&word[i + 2] == '=')
			{

				i += 2;
			}
			else if (word[i + 1] == '-')
			{

				i++;
			}
			break;
		case 'l':
			if (word[i + 1] == 'j')
			{

				i++;
			}
			break;
		case 'n':
			if (word[i + 1] == 'j')
			{

				i++;
			}
		case 's':
			if (word[i + 1] == '=')
			{

				i++;
			}
		case 'z':
			if (word[i + 1] == '=')
			{

				i++;
			}
		}
		i++;
	}

	printf("%d", num);
	return 0;
}*/

/*1316*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int TC = 0;
	int num = 0;
	bool flag = true;
	char word[101];
	int alpha[26] = { 0, };

	scanf("%d", &TC);

	for (int i = 0; i < TC; i++)
	{
		scanf("%s", &word);
		int j = 0;
		while (word[j] != '\0')
		{
			alpha[word[j] - 97]++;
			//printf("%d\n", alpha[0]);
			if (word[j] == word[j + 1])
			{
				alpha[word[j] - 97]--;
				j++;
				continue;
			}
			if (alpha[word[j] - 97] >= 2)
			{
				flag = false;
				break;
			}


			j++;
		}
		if (flag == true)
			num++;
		for (int k = 0; k < 26; k++)
		{
			alpha[k] = 0;
		}
		flag = true; //초기화
	}

	printf("%d", num);
	return 0;
}*/

/*10872*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int facto(int a);
int result = 1;
int main()
{
	int num = 0;

	scanf("%d", &num);
	printf("%d",facto(num));


	return 0;
}

int facto(int a)
{
	if (a != 0)
	{
		result *= a;
		facto(--a);
	}
	return result;
}*/

/*2798*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int card_num = 0;
	int purpose_num = 0;
	int result = 0;
	//int card[100] = { 0, };
	scanf("%d %d", &card_num, &purpose_num);

	int *card = new int[card_num];
	for (int i = 0; i < card_num; i++)
	{
		scanf("%d", &card[i]);
	}
	for (int i = 0; i < card_num; i++)
	{
		for (int j = i + 1; j < card_num; j++)
		{
			for (int k = j + 1; k < card_num; k++)
			{
				if (card[i] + card[j] + card[k] <= purpose_num && purpose_num - (card[i] + card[j] + card[k]) < purpose_num - result)
				{
					result = card[i] + card[j] + card[k];
				}
			}
		}

	}
	printf("%d", result);

	delete[] card;
	return 0;
}*/

/*7568*/ //오류해결
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int person_num = 0;
	scanf("%d", &person_num);

	int *grade = new int[person_num];
	//memset(grade, 1, sizeof(int)*person_num);
	//int grade[50];
	fill_n(grade, person_num, 1);

	int sizeX = person_num;
	int sizeY = 2;
	int **arr = new int*[sizeX];
	for (int i = 0; i < sizeX; i++)
	{
		arr[i] = new int[sizeY];
		memset(arr[i], 0, sizeof(int)*sizeY);
	}



	for (int i = 0; i < person_num; i++)
	{
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	for (int i = 0; i < person_num; i++) // 비교할 대상 정하기
	{
		for (int j = 0; j < person_num; j++) //비교하기
		{
			if (i != j && arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
			{
				grade[i]++;
			}
		}
	}

	for (int i = 0; i < person_num; i++)
	{
		printf("%d ", grade[i]);
	}

	delete[] grade;
	for (int i = 0; i < sizeX; i++)
	{
		delete[] arr[i];
	}
	return 0;
}*/

/*7568*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	pair<int, int>people[50];
	int grade[50];
	fill_n(grade, 50, 1);
	int person_num = 0;
	scanf("%d", &person_num);

	for (int i = 0; i < person_num; i++)
	{
		scanf("%d %d", &people[i].first, &people[i].second);
	}

	for (int i = 0; i < person_num; i++)
	{
		for (int j = 0; j < person_num; j++)
		{
			if (i != j && people[i].first < people[j].first&&people[i].second < people[j].second)
			{
				grade[i]++;
			}
		}
	}

	for (int i = 0; i < person_num; i++)
	{
		printf("%d ", grade[i]);
	}

	return 0;
}*/

/*1436*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main()
{
	int num = 0;
	int temp = 0;
	stack<int> s;
	string word;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{

		cin >> word;

		if (word == "push")
		{
			scanf("%d", &temp);
			s.push(temp);
		}
		if (word == "pop")
		{
			if (!s.empty())
			{
				printf("%d\n", s.top());
				s.pop();
			}
			else
				printf("%d\n", -1);
		}
		if (word == "size")
		{
			printf("%d\n", s.size());
		}
		if(word == "empty")
		{
			if (!s.empty())
				printf("%d\n", 0);
			else
				printf("%d\n", 1);
		}
		if (word == "top")
		{
			if (!s.empty())
				printf("%d\n", s.top());
			else
				printf("%d\n", -1);
		}
	}

	return 0;
}*/

/*9012*///오류
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <stack>
using namespace std;


int main()
{
	int TC = 0;
	string word;
	stack<char> s;
	scanf("%d", &TC);
	for (int i = 0; i < TC; i++)
	{
		cin >> word;
		char *arr = new char[word.size()+1];
		strcpy(arr, word.c_str());

		for (int j = 0; j < sizeof(arr)+1; j++)
		{

			if (s.empty())
			{
				s.push(arr[j]);
			}
			else
			{
				if (s.top() == '(' && arr[j] == '(')
					s.push(arr[j]);
				else if (s.top() == '('&&arr[j] == ')')
					s.pop();
				else if (s.top() == ')')
					break;

			}
		}

		if (s.empty())
		{
			printf("YES\n");
		}
		else
			printf("NO\n");

		while (!s.empty())
		{
			s.pop();
		}
		delete[] arr;
	}

	return 0;
}*/

/* 9012 *///오류
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <stack>
using namespace std;


int main()
{
	stack<char> s;
	string word;
	int TC = 0;
	bool flag = true;

	cin >> TC;


	for (int i = 0; i < TC; i++)
	{
		cin >> word;
		for (int j = 0; j < word.size(); j++)
		{
			if (word[j]=='(')
			{
				s.push(word[j]);
			}
			else if(!s.empty()&&word[j]==')')
			{
				s.pop();
			}
			else if (s.empty() && word[j] == ')')
			{
				flag = false;
				break;
			}
		}
		if (flag == true)
		{
			if (s.empty())
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");

		while (!s.empty())
		{
			s.pop();
		}
		word.clear();
		flag = true;

	}
	return 0;
}*/

/*2750*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	int num = 0;
	int temp = 0;
	cin >> num;

	int *arr = new int[num];

	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		arr[i] = temp;
	}
	sort(arr, arr + num);

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}*/

/*10989*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
	int temp = 0;
	int num = 0;
	int arr[10000];
	scanf("%d", &num);

	fill_n(arr, 10000, 0);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &temp);
		arr[temp - 1]++;
	}

	for (int i = 0; i < 10000; i++)
	{
		if (arr[i] != 0)
		{
			for (int j = 0; j < arr[i]; j++)
			{
				printf("%d\n", i + 1);
			}
		}
	}

	return 0;
}*/

/*2108*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int num = 0;
	double sum = 0;
	int max = 0;
	int temp[8001];
	int howMany[8001];
	int j = 0;

	cin >> num;
	int *arr = new int[num];



	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	//산술평균
	printf("%d\n", (int)round(sum / num));
	//cout << round(sum / num) << endl;

	//중간값
	sort(arr, arr + num);
	printf("%d\n", arr[num / 2]);

	//최빈값
	fill_n(howMany, 8001, 0);
	for (int i = 0; i < num; i++)
	{
		howMany[arr[i]+4000]++;
	}

	max=*max_element(howMany, howMany + 8001);
	for (int i = 0; i < 8001; i++)
	{
		if (howMany[i] != 0)
		{
			if (howMany[i] == max)
			{
				temp[j] = i - 4000;
				j++;
			}
		}
	}

	if (j==1)
		printf("%d\n", temp[0]);
	else
		printf("%d\n", temp[1]);

	//범위
	printf("%d\n", arr[num-1] - arr[0]);

	delete[] arr;
	return 0;
}*/

/*1427*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool desc(int a, int b)
{
	return a > b;
}
int main()
{
	string s;
	cin >> s;
	int *arr = new int[s.size()];

	for (int i = 0; i < s.size(); i++)
	{
		arr[i] = s[i];
	}

	sort(arr, arr + s.size(), desc);

	//printf("%d\n", s.size());
	for (int i = 0; i < s.size(); i++)
	{
		printf("%d", arr[i]-48);
	}

	return 0;
}*/

/*11650*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	vector<pair<int, int>> vec(num);

	for (int i = 0; i < num; i++)
	{
		cin >> vec[i].first >> vec[i].second;
	}
	sort(vec.begin(), vec.end());

	for (int i = 0; i < num; i++)
	{
		printf("%d %d\n", vec[i].first, vec[i].second);
	}

	return 0;
}*/

/*11651*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	vector<pair<int, int>> vec(num);

	for (int i = 0; i < num; i++)
	{
		cin >> vec[i].second >> vec[i].first;
	}
	sort(vec.begin(), vec.end());


	for (int i = 0; i < num; i++)
	{
		printf("%d %d\n", vec[i].second, vec[i].first);
	}

	return 0;
}*/

/*1181*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	vector<pair<int,string>> vec(num);


	for (int i = 0; i < num; i++)
	{
		cin >> vec[i].second;
		vec[i].first = vec[i].second.size();
	}

	sort(vec.begin(), vec.end());

	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	num = vec.size();
	for (int i = 0; i < num; i++)
	{
		cout << vec[i].second << endl;
	}
	return 0;
}*/

/*10814*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(const pair<int, string>&a, const pair<int, string>& b)
{
	if (a.first < b.first)
		return true;
	else if (a.first == b.first)
		return false;
	return false;
}

int main()
{
	int num = 0;
	cin >> num;

	vector<pair<int, string>> mem(num);
	for (int i = 0; i < num; i++)
	{
		cin >> mem[i].first >> mem[i].second;
	}

	stable_sort(mem.begin(), mem.end(),compare);

	for (int i = 0; i < num; i++)
	{
		cout << mem[i].first << " " << mem[i].second;
		printf("\n");
	}
	return 0;
}*/

/*4949*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	while (1)
	{
		bool flag = true;
		stack<char> st;

		string word;
		getline(cin, word);

		if (word.length() == 1 && word[0] == '.')
			break;



		for(int i=0;i<word.length();i++)
		{
			if (word[i] == '(' || word[i] == '[')
				st.push(word[i]);
			else if (word[i]==')')
			{
				if (!st.empty()&&st.top() == '(')
					st.pop();
				else
				{
					flag = false;
					break;
				}
			}
			else if (word[i] == ']')
			{
				if (!st.empty() && st.top() == '[')
					st.pop();
				else
				{
					flag = false;
					break;
				}
			}
		}
		if (flag&&st.empty())
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}*/

/*1002*/ // 깃발
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int x, y, r;
int x2, y2, r2;
pair<int, int> coord1, coord2;

double getDistance(void)
{
	return sqrt(pow(coord2.first - coord1.first, 2.0) + pow(coord2.second - coord1.second, 2.0));
}

void printContactNum(void)
{
	double distance = getDistance();
	int shortR = min(r, r2);
	int longR = max(r, r2);

	if (distance < longR) // 하나의 원의 중심이 다른 원 안에 있는 경우
	{
		if (coord1 == coord2 && r == r2)
			cout << -1 << endl;
		else if (distance + shortR < longR)
			cout << 0 << endl;
		else if (distance + shortR == longR)
			cout << 1 << endl;
		else if (distance + shortR > longR)
			cout << 2 << endl;
	}
	else
	{
		if (distance > shortR + longR)
			cout << 0 << endl;
		if (distance == shortR + longR)
			cout << 1 << endl;
		if (distance < shortR + longR)
			cout << 2 << endl;
	}
}

	int main()
	{
		int num = 0;
		cin >> num;

		for (int i = 0; i < num; i++)
		{
			cin >> x>> y>> r>> x2>> y2>> r2;
			coord1 = make_pair(x, y);
			coord2 = make_pair(x2, y2);
			printContactNum();
		}
		return 0;
	}*/

	/*18258*/
	/*#define _CRT_SECURE_NO_WARNINGS
	#include <iostream>
	#include <deque>
	#include <string>

	using namespace std;
	int num = 0;
	deque<int> q;
	string mission;

	int main()
	{
		cin.tie(0);
		cin.sync_with_stdio(0);

		//scanf("%d", &num);
		cin >> num;
		int number = 0;

		for (int i = 0; i < num; i++)
		{
			cin >> mission;

			if (mission == "push")
			{
				cin >> number;
				q.push_back(number);
			}
			else if (mission == "pop")
			{
				if (q.empty())
				{
					cout << -1 << "\n";
				}
				else
				{
					cout << q.front() << "\n";
					q.pop_front();
				}
			}
			else if (mission == "size")
			{
				cout << q.size() << "\n";
			}
			else if (mission == "empty")
			{
				if (q.empty())
					cout << 1 << "\n";
				else
					cout << 0 << "\n";
			}
			else if (mission == "front")
			{
				if (q.empty())
					cout << -1 << "\n";
				else
					cout << q.front() << "\n";
			}
			else if (mission == "back")
			{
				if (q.empty())
					cout << -1 << "\n";
				else
					cout << q.back() << "\n";
			}

		}
	}*/

/*2164*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	queue<int> q;

	for (int i = 0; i < num; i++)
	{
		q.push(i+1);
		
	}
	


	while (q.size() != 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front() << "\n";
	return 0;
}*/

/*11866*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int num = 0;
	int number = 0;
	queue<int> q;
	cin >> num >> number;
	cout << "<";

	for (int j = 0; j < num; j++)
	{
		q.push(j + 1);
	}

	while (q.size() != 0)
	{
		for (int i = 0; i < number-1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		if (q.size() != 1)
			cout << q.front() << ", ";
		else
			cout << q.front();
		
		q.pop();
	}
	cout << ">";
	return 0;
}*/

/*1966*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int num = 0;	//testcase
	int Dnum = 0;	//문서개수
	int purpose = 0;	//목표하는 인덱스
	int temp = 0;
	int count = 0;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> Dnum >> purpose;
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		for (int j = 0; j < Dnum; j++)
		{
			cin >> temp;
			q.push({ j,temp });
			pq.push(temp);
		}
		
		while (!q.empty())
		{
			int fir = q.front().first;
			int sec = q.front().second;
			q.pop();
			if (sec < pq.top())
			{
				q.push({ fir, sec });
			}
			else if (sec == pq.top())
			{
				++count;
				pq.pop();
				if (fir == purpose)
				{
					cout << count << "\n";
					break;
				}
					
			}
		}
		count = 0;
		
	}
	return 0;
}*/

/*10866*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	int TC = 0;
	string mission;
	int temp = 0;
	deque<int> dq;

	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		cin >> mission;
		//getline(cin, mission);
		if (mission == "push_front")
		{
			cin >> temp;
			dq.push_front(temp);
		}
		else if (mission == "push_back")
		{
			cin >> temp;
			dq.push_back(temp);
		}
		else if (mission == "pop_front")
		{
			if (dq.empty())
				cout << -1 << "\n";
			else
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (mission == "pop_back")
		{
			if (dq.empty())
				cout << -1 << "\n";
			else
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (mission == "size")
			cout << dq.size() << "\n";
		else if (mission == "empty")
		{
			if (dq.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (mission == "front")
		{
			if (dq.empty())
				cout << -1 << "\n";
			else
				cout << dq.front() << "\n";
		}
		else if (mission == "back")
		{
			if (dq.empty())
				cout << -1 << "\n";
			else
				cout << dq.back() << "\n";
		}
	}
	return 0;
}*/

/*1021*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	int N = 0;
	int howMany = 0;
	int count = 0;
	int num = 0;
	vector<int> deque;

	cin >> N >> howMany;

	for (int i = 0; i < N; i++)//1~N까지 q
	{
		deque.push_back(i + 1);
		cout << deque[i] <<"\n";
	}

	for (int j = 0; j < howMany; j++)//목표하는 index 받기
	{
		cin >> num;
		for (int k = 0; k < N; k++)
		{
			if (deque[k] == num)
			{
				count += min(k, N - k);
				rotate(deque.begin(), deque.begin() + k + 1, deque.end() - j);
				break;
			}
		}
		N--;
	}
	
	cout << count << "\n";

	

	return 0;
}*/

/*5543*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int temp=0;
	int minham = 2000;
	int minju = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	for (int j = 0; j < 3; j++)
	{
		minham = min(minham, v[j]);
	}
	minju = min(v[3], v[4]);

	cout << minham + minju - 50 << "\n";

	return 0;
}*/

/*1920*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int N, M;
vector<int> A;

int binarySearch(int low, int high, int target)
{
	
	if (low > high)
		return 0;
	else
	{
		int mid = (low + high) / 2;
		
		if (A[mid] == target)
			return 1;

		else if (A[mid] > target)
			return binarySearch(low, mid - 1, target);
		else			
			return binarySearch(mid + 1, high, target);

	}
}


int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		A.push_back(num);
	}
	sort(A.begin(), A.end()); 

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		cout << binarySearch(0, N - 1, num) << "\n"; 
	}
	return 0;
}*/

/*1920*///한번더
/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> v;

int binarySearch(int left, int right, int target)
{
	if (left > right)
		return 0;
	else
	{
		int mid = (left + right) / 2;
		if (v[mid] == target)
			return 1;

		else if (v[mid] > target)
			return binarySearch(left, mid - 1, target);
		else
			return binarySearch(mid + 1, right, target);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	cin >> M;
	for (int j = 0; j < M; j++)
	{
		int temp2;
		cin >> temp2;
		cout << binarySearch(0, N-1, temp2) <<"\n";
	}
	return 0;
}*/

/*11047*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K, num, temp, count=0;
	vector<int> v;
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	while (K != 0)
	{
		if (v.back() > K)
			v.pop_back();
		else
		{
			temp = K / v.back();
			K -= temp * v.back();
			count += temp;

			if (v.size() != 0)
			v.pop_back();
		}
	}
	cout << count << "\n";
	return 0;
}