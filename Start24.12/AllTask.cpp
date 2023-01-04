#include <iostream>//бибилиотека для вывода ввода 
#include <ctime>

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
*/
void Mass(int* const mass, int const size) {
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % 20;
		cout << mass[i] << '\t';
	}
	cout << endl;
}

int main()//начало проги

{
	//srand(time(NULL));//точка для отсчета рандомных чисел 
	setlocale(LC_ALL, "ru");//для получене в этом случае русского языка
	//вывод ввод
/*


	cout << "Привет!\n";// вывод текста
	/*
	\b удаляет символ перед \b
	\n переход на новую строку
	\t отспут от текста   Hellow\t отступ    World!

	\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

	чтобы вывести "" '' \\  перед ними надо \ "\"Hellow\"" "\\Hellow\\"
	*/

	//переменные 
/*
	int a = 10, b = 120, c = 30;
	cout << a << "\t" << b << "\t" << c << '\n';
	*/

	//константы 
/*
	const int CONST_DAYS_IN_WEEK = 7;
	const char NEXT_LINE = '\n';
	const char SPACE = '\t';
	cout << CONST_DAYS_IN_WEEK<< SPACE << "days" << SPACE << "ago" << NEXT_LINE;
	*/

	//ввод с консоли 
/*
	int AGE, FAVORITE_NUMBER;
	cout << "Введите ваш возраст и любимое число: ";
	cin >> AGE >> FAVORITE_NUMBER;
	cout  <<"Ваш возраст: " << AGE << endl << "Ваше любиме число: " << FAVORITE_NUMBER << NEXT_LINE;
	*/

	//арефметика 
/*
	int RESULT=0, FIRST_NUMBER=10, SECOND_NUMBER=5;
	FIRST_NUMBER = -FIRST_NUMBER;
	cout << "Отрицательное: " << FIRST_NUMBER << endl;
	RESULT = FIRST_NUMBER + SECOND_NUMBER;
	cout <<"Сумма: " << RESULT << endl;
	*/

	//задание арефметики
/*
	int FIRST, SECOND,THIRD, RES;
	cout << "Введите 3 числа: ";
	cin >> FIRST >> SECOND >> THIRD;
	cout << "Сумма: " << FIRST + SECOND + THIRD << endl;
	cout << "Умножение: " << FIRST * SECOND * THIRD << endl;
	cout << "Среднее: " << (FIRST + SECOND + THIRD) / 3;
	*/

	//инкремент и декремент. постфиксный и префиксный.
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

	//упращенное сложение вычетание 
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

	//логические операции
/*
	4 < 5; //меньше (1 да)
	4 > 5; //больше (0 нет)
	5 >= 5; //больше или равно (1 да)
	4 <= 5; //меньше или равно (1 да)
	4 == 5; //равно (0 нет)
	// && и, || или, != не
	!(4 > 5); //обратное большему (1 да) 4 > 5 нет но ! да
	*/

	//If else
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

	//задание If else
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

	//Switch(задание калькулятор)
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

	//цикл while /do while (2 задания)
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

	//цикл for
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

	//оператор break (завершение цикла)
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

   //оператор continue (пропустить шаг в цикле)
/*for (int i = 0; i < 10; i++)
   {
	   if (i==5)
	   {
		   continue;
	   }
	   cout << i << endl;

   }*/

   //оператор перехода goto (переход из строчки goto в другую часть кода пропуская все что было после)
/*
   cout << "1" << endl;
   cout << "2" << endl;
   goto go;
   cout << "3" << endl;
   cout << "4" << endl;
   go:
   cout << "5" << endl;
   */

   //вложенный цикл. вложенная конструкция ( задание квадрат из * )
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
 
   //объявление массива
/*
   int mass[4];
   mass[0] = 4;
   mass[1] = 10;
   mass[2] = 1;
   mass[3] = 5555;
   cout << mass[0];
   */

   //Инициализация массива
/*
	int mass[] = {10,88,1,532};
	cout << mass[3];
	int mass[10]{};//все 10 будут нулями
	*/

   //Циклы и массивы их взаимодействие
/*
   const int size = 10;
   int mass[size] = {1,44,123,1435,13,4,123,553};
   
   for (int i = 0; i < size; i++)
   {
	   cout << mass[i] << endl;
   }
   */
  
   //sizeof (размер переменной или типе данных)
/*
   cout << sizeof(int) << endl; //4
   int mass[] = {2,31,4324,652,23,653,22,5,4,7334,54,546,3,34,6,3,2,3234,644,6,335,3,45,6};
   for (int i = 0; i < sizeof(mass)/sizeof(mass[0]); i++)
   {
	   cout << mass[i] << endl;
   }
   */
  
   //Генератор чисел (задание числа в массиве не одинаковые и найти минимальный массив)
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

   //двумерный массив(трех)
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
  
   //функции
/*
Sum(9, 56);
Sum(10, 5);
const int size = 10;
int mass[size]{};
Pull(mass, size);
println();
   Def();
   */

   //перегрузка функции (позволят применять 1 название функции но при разных типах данных и количестве переменных делает разные действия)
/*
Sum(1, 2);
Sum(1.0, 2.2);
*/

    //шаблоны функций(позволяет не зависимо от типа данных выполнять работу функции)
/*
   Sum(1, 2);
   Sum(5.5, 7.2);
   Sum(1, 5.3);
   Sum(4, "FSA");
   */

   //Стек(выполняются функцию по логике последняя функция первой удаляется при завершении работы) рекурсии функции
   //Факториал с использованием рекурсии
/*Res(10);//если функций в функций будет много то прога крашнется 

 
 cout << Fuct(10);
 */
  
   //Указатели (дз) (содержи адрес объекта на который указываем в оперативной памяти)
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
  
   //Ссылки (дз) (суть как и указателя но нельзя работать с адресом объекта)
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

   //Динамическая память массивы и двумерные массивы копирование динамического массива  (new delete)(NULL nullpntr) 
/*
int* px = new int;//выделили вне программы оперативную память 
*px = 10;//дали значене этому адресу вне программы 
delete px;//отчистили память вне программы для дальнейшего спользования 
//сначала удаляем значение в выделенной памяти потом удаляем адрес в указателе 
px = NULL;//NULL = 0 (int)
px = nullptr;//nullptr отдельный тип данных дабы в использовании функций if NULL не мешал проходить проверку 0вым int
int size = 0;
cout << "Введите размер массива: " << endl;
cin >> size;
int *mass = new int[size];
for (int i = 0; i < size; i++)
{
	mass[i] = rand() % 20;
	cout << mass[i] << '\t';
	cout << mass + i << endl;
}
delete[] mass;

int sizeR = 0, sizeC = 0;
cout << "Введите количество строк: ";
cin >> sizeR;
cout << "Введите количество столбцов: ";
cin >> sizeC;

int** mass = new int*[sizeR];
for (int i = 0; i < sizeR; i++)
{
	mass[i] = new int[sizeC];
	for (int j = 0; j < sizeC; j++)
	{
		mass[i][j] = rand() % 20;
		cout << mass[i][j]<<'\t';
	}
	cout << endl;
	delete[] mass[i];
}
delete[] mass;


int size = 10;
int* mass1 = new int[size];
int* mass2 = new int[size];

cout << "Первый массив: ";
Mass(mass1, size);

cout << "Второй массив: ";
Mass(mass2, size);

cout << " ===================================================" << endl;
delete[]mass1;
mass1 = new int[size];
cout << "Первый массив: ";
for (int i = 0; i < size; i++)
{
	mass1[i] = mass2[i];
	
	cout << mass1[i]<<'\t';
}

delete[]mass1;
delete[]mass2;
*/
int size = 10;
int *arr = new int[size];
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
