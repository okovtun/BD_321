#include <iostream>
using namespace std;

#define offset "\t\t\t\t\t\t"
//Диретива #define (определить) создмет макроопределение (макрос)

#define ELOCHKA	//макрос ELOCHKA не имеет значения

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA
	//ЕСЛИ ОПРЕДЕЛЕНО ELOCHKA,
	//то нижеследующий код, до директивы #endif будет виден компилятору
	cout << offset << "В лесу родилась Ёлочка!\n\n";
	cout << offset << "В лесу родилась ёлочка,\n";
	cout << offset << "В лесу она росла.\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зелёная была.\n";
	cout << endl;
	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "\"Спи, ёлочка, бай - бай!\"\n";
	cout << offset << "Мороз снежком укутывал :\n";
	cout << offset << "\"Смотри, не замерзай!\"\n";
	cout << endl;
	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под ёлочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк,\n";
	cout << offset << "Рысцою пробегал.\n\n";
	cout << offset << "Чу! Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится, бежит.\n\n";
	cout << offset << "Везёт лошадка дровенки\n";
	cout << offset << "А в дровнях мужичок\n";
	cout << offset << "Срубил он нашу ёлочку\n";
	cout << offset << "Под самый корешок.\n\n";
	cout << offset << "Теперь она, нарядная,\n";
	cout << offset << "На праздник к нам пришла, \n";
	cout << offset << "И много, много радости\n";
	cout << offset << "Детишкам принесла.\n\n";
#endif
	cout << "Всем\tПривет" << endl;
}