#include <iostream>//бибилиотека для вывода ввода 
#include <ctime>// библиотека для srand
#include <string>//библиотека для текстового типа данных
//#define start { //заменить все start на { 
//#define end } //заменить все end на { 
//#define FOO(a,b) ((a)*(b)) // макрос функция
//#define DEBUG 5

using namespace std;//пространство имен для команд std(cout,endl...)

//функции
/*
void println();

void Pull(int mas[], const int siz);

void Def(int b = 10) {
	for (int i = 0; i < b; i++)
	{
		cout << '*' << endl;
	}
}

int Sum(int a, int b);
double Sum(double a, double b);

template <class T, class T1> void Sum(T a, T1 b);

int Res(int a);

int Fuct(int a);

void Foo(int *a, int *b) {
	++(*a);
	*b = 10;
}

void Swap(int* a, int* b) {
	int save = *a;
	*a = *b;
	*b = save;
	
}


void Foo(int& a) {
	a = 20;
}

template <class T> void Swap(T& a, T& b) {
	T save = a;
	a = b;
	b = save;
}


void Generate(int* const arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%10;
	}
}
void Show(int* const arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void push_bck(int *&arr,int const &size, const int part, const int value) {
	int* newArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		if (part == i) {
			newArr[i] = value;
		}
		else
		newArr[i] = arr[i];

	}
	

	delete[]arr;
	arr = newArr;
}


void foo(const char *&str) {
	int res = 0;
	while (str[res]!='\0')
	{
		res++;
	}
	cout << res;
}


int foo1(int a) {
	return --a;
}
int foo2(int a) {
	return a * 2;
}
*/

//классы
/*
class Human
{
public:
	int age;
	int weight;
	string name;

	void Print() {
		cout << name << endl;
		cout << age << endl;
		cout << weight << endl;
	}
private:
	int id;
};

class CoffeeGrinder {
private:
	string Check() {
		int V = rand() % 11;
		if (V>5)
		{
			return "Warrning";
		}
		else {
			return "Ok";
		}
	}
public:
	void Start() {
		cout << "Gringing..." << endl;
		cout << Check() << endl;
	}
	
};


class Point {
private:
	int x, y, z;
public:

	Point(int valueX, int valueY, int valueZ) {
		x = valueX;
		y = valueY;
		z = valueZ;
	}
	Point() {
		x = 0;
		y = 0;
		z = 0;
	}
	void Print() {
		cout << x << '\n' << y << '\n' << z << endl;
	}
	int GetX() {
		return x;
	}
	void SetX(int valueX) {
		x = valueX;
	}

	int GetY() {
		return y;
	}
	void SetY(int valueY) {
		y = valueY;
	}

	int GetZ() {
		return z;
	}
	void SetZ(int valueZ) {
		z = valueZ;
	}
};
*/

class MyClass
{
private:
	int* arr;
public:
	MyClass( int size) {
		arr = new int[size];
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = i;
		}
		cout << "Коснтруктор" << endl;
	}
	~MyClass() {
		delete[]arr;
		cout << "Деструктор" << endl;
	}


};

int main(/*int argc, char* argv[]*/)//начало проги
{
	/*
	переходм через cd в папку с экзешником D:\Users\enoxy\source\repos\Start24.12\x64\Debug\General.exe
	General.exe(параметр по дефолту) + любое название добавит параметр из за чего можно использовать это чтоб прога работала иначе 
	
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;//по дефолту вывод будет путь экзешника 
	}
	*/
	srand(time(NULL));//точка для отсчета рандомных чисел 
	setlocale(LC_ALL, "ru");//для получене в этом случае русского языка

	//1.1 вывод ввод
/*


	cout << "Привет!\n";// вывод текста
	/*
	\b удаляет символ перед \b
	\n переход на новую строку
	\t отспут от текста   Hellow\t отступ    World!

	\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

	чтобы вывести "" '' \\  перед ними надо \ "\"Hellow\"" "\\Hellow\\"
	*/

	//1.2 переменные 
/*
	int a = 10, b = 120, c = 30;
	cout << a << "\t" << b << "\t" << c << '\n';
	*/

	//1.3 константы 
/*
	const int CONST_DAYS_IN_WEEK = 7;
	const char NEXT_LINE = '\n';
	const char SPACE = '\t';
	cout << CONST_DAYS_IN_WEEK<< SPACE << "days" << SPACE << "ago" << NEXT_LINE;
	*/

	//1.4 ввод с консоли 
/*
	int AGE, FAVORITE_NUMBER;
	cout << "Введите ваш возраст и любимое число: ";
	cin >> AGE >> FAVORITE_NUMBER;
	cout  <<"Ваш возраст: " << AGE << endl << "Ваше любиме число: " << FAVORITE_NUMBER << NEXT_LINE;
	*/

	//1.5 арефметика 
/*
	int RESULT=0, FIRST_NUMBER=10, SECOND_NUMBER=5;
	FIRST_NUMBER = -FIRST_NUMBER;
	cout << "Отрицательное: " << FIRST_NUMBER << endl;
	RESULT = FIRST_NUMBER + SECOND_NUMBER;
	cout <<"Сумма: " << RESULT << endl;
	*/

	//1.6 задание арефметики
/*
	int FIRST, SECOND,THIRD, RES;
	cout << "Введите 3 числа: ";
	cin >> FIRST >> SECOND >> THIRD;
	cout << "Сумма: " << FIRST + SECOND + THIRD << endl;
	cout << "Умножение: " << FIRST * SECOND * THIRD << endl;
	cout << "Среднее: " << (FIRST + SECOND + THIRD) / 3;
	*/

	//1.7 инкремент и декремент. постфиксный и префиксный.
/*
	 int a;
	a =  + 1;
	cout << a << endl;
	a++; //инкремент
	cout << a << endl;
	a--; //декремент
	cout << a << endl;
	++a; //префиксный сначало складывает потом выводит
	a++; //постфиксный сначало выводит потом складывает
	*/

	//1.8 упращенное сложение вычетание 
/*
	int a = 1;
	a += 9;
	cout << a << endl;
	a -= 5;
	cout << a << endl;
	a *= 2;
	cout << a << endl;
	a /= 5;
	cout << a << endl;
	*/

	//1.9 логические операции
/*
	4 < 5; //меньше (1 да)
	4 > 5; //больше (0 нет)
	5 >= 5; //больше или равно (1 да)
	4 <= 5; //меньше или равно (1 да)
	4 == 5; //равно (0 нет)
	// && и, || или, != не
	!(4 > 5); //обратное большему (1 да) 4 > 5 нет но ! да
	*/

	//2.0 If else
/*
	bool rain = false;
	if (rain) {
		cout << "Идет дождь" << endl;
	}
	else {
		cout << "Дождь не идет" << endl;
	}
	int number5 = 5;
	cout << "Введите число: ";
	cin >> number5;
	if (number5 > 5) {
		cout << "Число больше 5" << endl;
	}
	else
	if(number5 ==5)
	{
		cout << "Число равно 5" << endl;
	}
	else {
		cout << "Число меньше 5" << endl;
	}
	*/

	//2.1 задание If else
/*
	int number;
	cout << "Введите число: ";
	cin >> number;
	if (number %= 2 > 0) {
		cout << "Не чет";
	}
	else
	{
		cout << "Чет";
	}
	*/

	//2.2 Switch(задание калькулятор)
/*
	char operation;
	int first, second;

	cout << "Введите число: ";
	cin >> first ;

	cout << "Выбирете действие(+ - / * ): ";
	cin >> operation;

	cout << "Введите второе число: ";
	cin >> second;

	switch (operation)
	{
	case '+':
		cout << "Результат: " << first + second << endl;
		break;
	case '-':
		cout << "Результат: " << first - second << endl;
		break;
	case '/':
		cout << "Результат: " << (double)first / second << endl;
		break;
	case '*':
		cout << "Результат: " << first * second << endl;
		break;
	default:
		cout << "Вы ввели не корректное действие\n Попробуйте заново\n";
			break;

	}
	system("pause");

	*/

	//2.3 цикл while /do while (2 задания)
/*int loading = 0;
	while (loading <100)
	{
		cout << "Загрузка " << loading << "%" << endl;
		loading++;
	}

	do
	{
		cout << "Загрузка завершнеа " << loading << "%";
		loading++;
	} while (loading==100);

	//1задание
	char position;
	int size,a=0;

	cout << "Введите в каком направление будет идти линия( | или _ ): ";
	cin >> position;

	cout << "Введите размер линии: ";
	cin >> size;
	if (position == '|')
	{
		while (a <= size)
		{
			cout << position << endl;
			a++;
		}
	}
	else
	{
		while (a <= size)
		{
			cout << position ;
			a++;
		}
	}

	//2задание
	int max,result=0;
	cout << "Введите диапозон от 0 до ";
	cin >> max;
	while(max>0) {
		if (max % 2 > 0) {
			result += max;
		}
		max--;
	}
	cout << "Сумма нечетных чисел равна: " << result;
	*/

	//2.4 цикл for
/*
	int i = 0;
	for (; i < 10; i++)
	{
		cout << i;
	}
	for (; i < 20; i++)
	{

	}
	for (int i = 0; i < 10; )
	{
		cout << i;
		if (true)
		{
			i++;
		}
		else
		{

		}

	}
	for (; ;)
	{
		cout << "Бесконечно";
	}
	for (int i = 0,j=10; i < 20 && j >0; i++,j--)
	{
		cout << i << "\t" << j;
	}
	*/

	//2.5 оператор break (завершение цикла)
/*
   cout << "Начало цикла" << endl;
   int i = 0;
   for (;true; i++)
   {
	   cout << i << endl;
	   if (i==10)
	   {
		   break;
	   }
   }
   cout << "Конец цикла";
   while (true)
   {
	   cout << i << endl;
	   if (i ==20)
	   {
		   break;
	   }
	   i++;
   }
   */

   //2.6 оператор continue (пропустить шаг в цикле)
/*for (int i = 0; i < 10; i++)
   {
	   if (i==5)
	   {
		   continue;
	   }
	   cout << i << endl;

   }*/

   //2.7 оператор перехода goto (переход из строчки goto в другую часть кода пропуская все что было после)
/*
   cout << "1" << endl;
   cout << "2" << endl;
   goto go;
   cout << "3" << endl;
   cout << "4" << endl;
   go:
   cout << "5" << endl;
   */

   //2.8 вложенный цикл. вложенная конструкция ( задание квадрат из * )
/*for (int i = 0; i < 10; i++)
	{
		cout << "Первый цикл" << i << endl;
		for (int a = 0; a < 20; a++)
		{
			cout << "Второй цикл" << a << endl;
		}
	}
   int width=0, height=0;

   cout << "Введите высоту квадро: ";
   cin >> height;

   cout << "Введите ширену квадро: ";
   cin >> width;

   cout << '\n';

   for (int i = 0; i < width; i++)
   {
	   cout << '*';
   }

   cout << '\n';

   for (int j = 0; j < height; j++)
   {
	   cout << '*';
	   for (int g = 2; g < width; g++)
	   {
		   cout << " ";
	   }
	   cout << '*' << endl;
   }

   for (int i = 0; i < width; i++)
   {
	   cout << '*';
   }

   cout << '\n';
   cout << '\n';
 */
  
   //МАССИВЫ//
 
   //3.0 объявление массива
/*
   int mass[4];
   mass[0] = 4;
   mass[1] = 10;
   mass[2] = 1;
   mass[3] = 5555;
   cout << mass[0];
   */

   //3.1 Инициализация массива
/*
	int mass[] = {10,88,1,532};
	cout << mass[3];
	int mass[10]{};//все 10 будут нулями
	*/

   //3.2 Циклы и массивы их взаимодействие
/*
   const int size = 10;
   int mass[size] = {1,44,123,1435,13,4,123,553};
   
   for (int i = 0; i < size; i++)
   {
	   cout << mass[i] << endl;
   }
   */
  
   //3.3 sizeof (размер переменной или типе данных)
/*
   cout << sizeof(int) << endl; //4
   int mass[] = {2,31,4324,652,23,653,22,5,4,7334,54,546,3,34,6,3,2,3234,644,6,335,3,45,6};
   for (int i = 0; i < sizeof(mass)/sizeof(mass[0]); i++)
   {
	   cout << mass[i] << endl;
   }
   */
  
   //3.4 Генератор чисел (задание числа в массиве не одинаковые и найти минимальный массив)
/*
   int a = rand();
   cout << a<<endl;
   int b = rand() % 5 + 10;//диапозон 5 + 10 = от 10 до 15 
   cout << b;
   const int size = 11;
   int mass[size]{};
   for (int i = 0; i < size; )
   {
	   mass[i] = rand() %5 + 6; // не вклюачет в себя числа 5 и 11 

	   cout << mass[i] << endl;
	   i++;
   }
   
  
   const int size = 10;
   int mass[size]{};
   for (int i = 0; i < size; )
   {
	   mass[i] = rand() % 10+1;
       back:
	   for (int j = 0; j < i; j++)
	   {	   
			   if (mass[i] == mass[j]) {
				   mass[i] = rand() % 10+1;
				   goto back;
			   }	
	   }
	   cout << mass[i] << endl;
	   i++;
   }
   
   const int size = 10;
   int result = 11;
   int mass[size]{};
   for (int i = 0; i < size; i++)
   {
	   mass[i] = rand() % 10+1;
	   
	   if (result > mass[i]) {
		   result = mass[i];
	   }  
   }
   cout << result;
   */

   //3.5 двумерный массив(трех)
/*
   const int sizeR = 5, sizeC = 3, sizeG=3;
   int mass[sizeR][sizeC][sizeG]{};
   
   for (int i = 0; i < sizeR; i++)
   {
	   for (int j = 0; j < sizeC; j++)
	   {
		   for (int g = 0; g < sizeG; g++)
		   {
			   mass[i][j][g] = rand() % 10;
			   cout << mass[i][j][g] << " ";
		   }
		   cout << endl;
	   }
	   cout << endl;
   }
   */
  
   //3.6 функции
/*
Sum(9, 56);
Sum(10, 5);
const int size = 10;
int mass[size]{};
Pull(mass, size);
println();
   Def();
   */

   //3.7 перегрузка функции (позволят применять 1 название функции но при разных типах данных и количестве переменных делает разные действия)
/*
Sum(1, 2);
Sum(1.0, 2.2);
*/

   //3.8 шаблоны функций(позволяет не зависимо от типа данных выполнять работу функции)
/*
   Sum(1, 2);
   Sum(5.5, 7.2);
   Sum(1, 5.3);
   Sum(4, "FSA");
   */

   //3.9 Стек(выполняются функцию по логике последняя функция первой удаляется при завершении работы) рекурсии функции
   //Факториал с использованием рекурсии
/*Res(10);//если функций в функций будет много то прога крашнется 

 
 cout << Fuct(10);
 */
  
   //4.0 Указатели (дз) (содержи адрес объекта на который указываем в оперативной памяти)
/*
int a = 5;
int b = a;
int* pa = &a;
int* pa2 = &a;
a++;
*pa += 1;
*pa2 = 10 + 5;
cout << b << endl;
cout << *pa << endl;
cout << a << endl;
cout << *pa2 << endl;

const int size = 4;
int mass[size]{ 4,64,32,12 };
for (int i = 0; i < size; i++)
{
	cout << mass + i << endl; // выведет адрес всех ячеек в массиве 
	cout << *(mass + i) << endl; // выведет значение в адресе всех ячеек
}
int* mas = mass;
for (int j = 0; j < size; j++)
{
	cout << mas[j] << endl;
}

int a = 0, b = 1;
cout << a << endl;
cout << b << endl;
Foo(&a,&b);
cout << a << endl;
cout << b << endl;

int a, b;
cin >> a >> b;
cout << "a " << a << endl << "b " << b<<endl;
cout << "swap" << endl;
Swap(&a, &b);
cout << "a " << a << endl << "b " << b;
*/
  
   //4.1 Ссылки (дз) (суть как и указателя но нельзя работать с адресом объекта)
/*
int a = 5;
int* pa = &a;//указатель
int& aRef = a;//ссылка
*pa = 5;
cout << *pa << endl;
aRef = 10;
cout << aRef << endl;
//можно сделать цепочку из указателей и ссылок 
int* ppa = &aRef;
cout << a << endl;

Foo(a);
cout << a;

float a=10,b=90;
cout << "a " << a << endl << "b " << b<<endl;
cout << "Swap " << endl;
Swap(a, b);
cout << "a " << a << endl << "b " << b;
*/

   //4.2Динамическая память массивы и двумерные массивы копирование динамического массива  (new delete)(NULL nullpntr) 
/*
   int size = 0;
   cout << "Введите размер массива: ";
   cin >> size;
   int* arr = new int[size];
   for (int i = 0; i < size; i++)
   {
	   arr[i] = rand() % 1000;
	   cout << arr + i << '\t';
	   cout << arr[i] (arr+i) тоже самое что и arr[i] << endl;
   }
   delete[] arr;
 

   int rows = 5;
   int cols = 5;
   int undercols = 5;
   int res = 0;
   int resRow = 0;
   int allRes = 0;
   int i = 0;
   int j = 0;
   int h = 0;
   int*** arr = new int** [rows];
   for (; i < rows; i++)
   { 
	   arr[i] = new int*[cols];
	   cout << i<<endl;
	   for (; j < cols; j++)
	   {
		   cout << j << " (" << i << ")" <<'\t';
		   arr[i][j] = new int[undercols];
		   for (; h < undercols; h++)
		   {
			   arr[i][j][h] = rand() % 10;
			   res += arr[i][j][h];
			   resRow += res;
			   allRes += res;
			   cout << " (" << h << "-" << j << "-" << i << ")"<<"Number: "<< arr[i][j][h]<<'\t';
			  
		   }
		   cout << '\t' << "Sum: " << res<<endl;
		   res = 0;
		   h = 0;
		   delete[] arr[i][j];
	   }
	   cout << "Sum all: " << resRow<<endl<<endl;
	   resRow = 0;
	   j = 0;
	   cout << endl << "--------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	   delete[] arr[i];
   }
  cout << endl;
   cout << "All sum res: " << allRes << endl<<endl;

   delete[] arr;


int size = rand() % 30;
int sizeConst = 10;
int* firstArr = new int[size];
int* secondArr = new int[sizeConst];

Generate(firstArr, size);
Generate(secondArr, sizeConst);

cout << "First:  ";
Show(firstArr, size);
cout << endl;
cout << "Second: ";
Show(secondArr, sizeConst);
delete[]firstArr;

cout << "---------------------------------------------------------------------------------"<<endl; 

size = sizeConst;

firstArr = new int[size];

for (int i = 0; i < size; i++)
{
	firstArr[i] = secondArr[i];
}

cout << "First:  ";
Show(firstArr, size);
cout << endl;
cout << "Second: ";
Show(secondArr, sizeConst);

delete[]firstArr;
delete[]secondArr;


int size = rand() % 10+5;
int* arr = new int[size];
Generate(arr, size);
Show(arr, size);
push_bck(arr, size, 3, 40);
Show(arr, size);
 */

   //4.3 String Char преоброзование указатели конкатенация(1текст + другой текст)(strcat_s)sting
/*
   char string1[] = "Hello";
   char string2[] = { 'H','e','l','l','o','\0' };//'\0'обозначает конец строчки
   cout << string2 << endl;
 
double a = 54.4;
cout << a << endl;
cout << (int)a << endl;
int b = 10;
cout << a / b << endl;
cout << int(a / b) << endl;
  
char str[] = "World";
const char* string = str;
cout << string <<endl;
const char* ArrStr[] = { "Hello","World","Test" };
for (int i = 0; i < 3; i++)
{
	cout << ArrStr[i]<<endl;
}

const char* str1 = "Hello";
foo(str1);


char res[255]{};

char string1[255] = "Hello";
char string2[255] = "World";

cout << string1 << endl;
cout << string2 << endl;

strcat_s(res, string2);
strcat_s(res, string1);

cout << res << endl;
cout << string1 << endl;
cout << string2 << endl;

string str1 = "Hello";
string str2 = "World";
string res;
res = str1 + " " + str2 ;
cout << res;
*/

   //4.4 Указатель на функцию ( для работы с большим количество функций когда не известно сколько их и можно 1 указателем вызывать нужную с определенными требованиями )
/*
   int(*fooPointer)(int a);

   fooPointer = foo1;
  cout<< fooPointer(10);
 */

   //4.5 Препроцессор Директива(#include подключаются до начала работы кода пишутся в начале кода в основном) #define (заменяет все в коде на прописанное значение)
/*
if (true)
start
cout << "yes";
end
*/

   //4.6 Макрос функция
/*
cout << FOO(10, 5);
*/

   //4.7  #ifdef #else #endif #if #elif #endif #ifndef позволяет делать проверки (того же выворда текста доп информации для программиста но не нужный для заказчика) закоментировав #define с которым работали код внутри не будет работать 
/*
   #ifdef (если #define есть) 
   #else (используется с #ifdef #if альтернативное действие если условие не верно или стоит #ifndef)
   #endif (закрывает условие #ifdef #if)
   #if (чтобы сделать условие #ifdef)
   #elif (дополнительное условие для #else)
   #ifndef (противоположное #ifdef)


#if DEBUG <5
cout << "one" << endl;
#elif DEBUG >1
cout << "second" << endl;
#endif // DEBUG если его закоментировать на 7 строчке то код между не будет виден компилятору 
*/

   //4.8 Условный тернарный оператор (унарные a++ бинарные a+b) условие?что происходит:в ином случае;
/*
   int a;
   cin >> a;
   if (a>5)
   {
	   cout << "больше 5";
   }
   else if (a<5)
   {
	   cout << "меньше 5";
   }
   else
   {
	   cout << "равно 5";
   }
   a > 5 ? cout << "Больше 5" : a<5? cout << "Меньше 5":cout<<"Равно 5";
   */

      //ООП//

   //5.1 объект методы класса private public
/*
   Human FirstHuman;
   FirstHuman.age = 30;
   FirstHuman.name = "Oleg";
   FirstHuman.weight = 100;
   
   cout << FirstHuman.age << endl;
   cout << FirstHuman.name << endl;
   cout << FirstHuman.weight << endl;

   Human SecondHuman;
   SecondHuman.age = 20;
   SecondHuman.name = "Sanya";
   SecondHuman.weight = 90;

   cout << SecondHuman.age << endl;
   cout << SecondHuman.name << endl;
   cout << SecondHuman.weight << endl;
   

   FirstHuman.Print();
   */

   //5.2 get (присвоить значение) и set (задать значение)
/*
   Point FirstPoint;

   FirstPoint.SetX(10);
   int res = FirstPoint.GetX();
   
   cout << res;
   */

   //5.3 Инкапсуляция
/*
   CoffeeGrinder Capuchino;
   Capuchino.Start();
   */

   //5.4 Конструктор класса
/*
Point a( 10,5,9);
   a.Print();
   a.SetX(15);
   a.Print();

   Point b(10, 23, 1241);
   b.Print();
   return 0;
   */

   //5.5 Перегрузка  конструктора
/*
Point a(10, 5, 9);
a.Print();

Point b;
b.Print();
*/

   //5.6 Деструктор
   MyClass a(4);
}
 //функции
/*
int a = 0;
void println() {
	a++;
	cout << "Вызвали " << a << " раз" << endl;

}

void Pull(int mas[], const int siz) {
	for (int i = 0; i < siz; i++)
	{
		mas[i] = rand() % 10;
		cout << mas[i] << '\t';
	}
	cout << endl;
}

int Sum(int a, int b) {
	return a - b;
}
double Sum(double a, double b) {
	return a + b;
}

  
template <class T, class T1> void Sum(T a, T1 b) {
	cout << a + b << endl;
	cout << a << endl;
	cout << b << endl;
	cout << endl << endl;
}

int Res(int a) {
	cout << a << endl;
	if (a < 1) return 0;
	a--;
	return Res(a);
}

int Fuct(int a) {
	 	if(a>1) return a = a * Fuct(a - 1);
}
*/
