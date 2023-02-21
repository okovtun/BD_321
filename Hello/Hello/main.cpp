﻿#include<iostream>		//			cin/cout
using namespace std;	//			cin/cout

void main()
{
	setlocale(LC_ALL, "Russian");	//Включает Русскую кодировку.
	cout << "\t\t\t\t\t\tHello \"World\"!\n";
	cout << "Привет\n\a";
	cout << "C:\\Windows\\System32\\drivers\\\n";
}

//Ctrl(+Fn)+F7 - Компиляция
//Ctrl(+Fn)+F5 - Запуск

/*
------------------------------------
#include<iostream>
# - показывает что include - это директива.
Директива - это указание компилтору на выполнение некоторых действий.
Директива #include (включить в состав, подключить) указывает компилятору на то, 
что к нашему исходному файлу нужно подключить другой файл, в данном случае 'iostream'.
Файл 'iostream' содержит потоки ввода/вывода - cin/cout.

Имя другого файла может быть указано в <> или "".
<> - компилятор будет искать его в системных каталогах Visual Studio.
"" - компилятор будет искать его сначала в каталоге с проектом, 
	 а потом в системных каталогах Visual Studio.

При компиляции на место директивы #include происходит встраивание содержимого 
указанного файла в наш файл.
------------------------------------
using namespace std; гворит компилятору использовать пространство имен std.
В именном пространстве std объявлены потоки ввода/вывода - cin/cout.
------------------------------------
void main()
main() - это главная функция, которая является токой входа программы, поскольку
		 с нее начинается выполнение любой программы.
Функция main() обязательно должна быть в любом ПРОЕКТЕ, но только одна!!!

Ключевое слово void (пустота) показывает, что функция main() ничего НЕ возвращает по завершении.

() - показывают что main() - это функция, а не переменная.
Обычно через () функция принимает параметры, но наша функция main() не принимает никаких параметров.

{} - показывают тело и область видимости функции main(), где она начинается, и где заканчивается.
------------------------------------
cout (Console Out) - поток вывода на экран, выводит значения в окно консоли.
					 Выводимые значения должны быть разделены <<

<< - оператор перенаправления в поток, отправляет значения в поток cout,
	 а все что перенправлено в cout выводится в консоль.
------------------------------------
"Hello World" - это строковая константа.
Строковая константа - это последовасть символов, заключенная в двойные кавычки.

; - показывает конец выражения.
------------------------------------
*/

/*
------------------------------------
		Escape-последовательности (Esc):
/ (Slash)
\ (Backslash) - это символ отмены специального значения другого символа, 
				он отменяет специальное значение символа, следующего за ним.
\n - символ 'n' экранирован символом '\'
\n (new line) - переводит курсор в начало новой строки
\t (Tab) - выводит в консоль символ табуляции.
			1 табуляция <= 8 пробелов

------------------------------------
*/