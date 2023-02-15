/*Задание 3 (необязательное)
Роботы приходят в очередь и называют(вводят с клавиатуры) свои порядковые номера (целые положительные).
Комната, в которой роботы-андроиды занимают своё место, имеет ограниченный размер (который равен capacity вектора, в который вы их записываете).
Когда комната заполняется, роботам приходится “переходить” в другую комнату, чуть больше (но вы этого не видите).
Необходимо отследить, когда в комнате будет оставаться всего 2 свободных места для роботов, и вывести сообщение об этом на экран.
Последний робот будет иметь номер -1.*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> robotsNumber;
    int robotNumber = 0;
    while (robotNumber != -1)
    {
        std::cout << "Enter robot number - ";
        std::cin >> robotNumber;
        robotsNumber.push_back(robotNumber);
        if ((robotsNumber.capacity() - robotsNumber.size()) < 2)
        {
            std::cout << "Size - " << robotsNumber.size() << "Capasity - " << robotsNumber.capacity() << std::endl;
        }
    }
}
