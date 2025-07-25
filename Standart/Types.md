# Типы данных
## Простые типы данных
К простым типам данных относятся всевозможные типы описанные в стандартной библиотеке.  
Они не поддерживают никаких внутренних методов, или контекстного поведения
### Список:
- ### `char`  
    Наипростейший вид данных, содержащий один байт (8 бит)  
    Может отражать 256 уникальных значений, в большинстве случаев  
    Используется для кодировки символов, но это `необязательно`.  
    Если правильно использовать, можно сэкономить выделяемую память,  
    используя данный тип для заведомо небольших значений.  
- ### `int`  
    Тип данных содержащий 2 байта (16 бит)  
    Преимущественным применением служит для хранения целочисленной информации.  
- ### `float`  
    Тип данных содержащий 4 байта (32 бит)  
    Служит для хранения чисел с плавающей запятой, мантисса которых  
    определена с некоторой точностью   
- ### `double`  
    Тип данных содержащий 8 байта (64 бит)  
    Служит для хранения чисел с плавающей запятой, мантисса которых  
    определена с точностью в два раза большей чем `float`.  

## Модификаторы типа
Данные модификаторы можно применять ко всем вышеописанным типам данных  
При этом можно получить аналогичные по длине или функции типы  
> `long float == double`  
### Модификаторы:
- ### unsigned
    Означает что 0 значение типа будет начинаться с `0`.
- ### signed
    Означает что 0 значение типа будет начинаться с `— (длина типа)/2`.  
    При этом первый байт указывает на знак величины   
#### Пример:
```C++
unsigned char a = 0b10000010; // 130
signed char   b = 0b10000010; // -2
```
- ### long
    Увеличивает длину типа в два раза.
- ### short
    Сокращает длину типа в два раза.  
#### Пример:
```C++
short int a; // длина 1 байт
long char b; // длина 2 байта 
```
- ### const
    Обозначает, что определённое значение не может быть изменено в процессе выполнения кода  
    Делает его константой.  
    Принципиально отличается от `директив` тем, что это значение рассчитывается/получается  
    в процессе выполнения кода, то есть неизвестно на момент компиляции.  
    > Подробнее про директивы смотри в разделе `директивы`.   

    Данный модификатор полезен тем, что переменные созданные с помощью него, получают  
    оптимизацию при компиляции и работе программы, так ка их размер строго задан, а   
    жизненный цикл ограничен зоной видимости.  
- ### global
    ## Не нужно в это лезть

## Комплексные типы
Имеют в своём объявлении простые типы, или же поддерживают внутренне методы,  
вызываемые через `.method_name()`. Могут показаться похожими на простые типы,  
но на самом деле имеют больший функционал. Почти каждая библиотека имеет хотя бы  
один такой тип.  
Вот лишь некоторые часто используемые:  

- ### string
    Один из самых базовых типов из этого списка, но при этом он обладает большим   
    функционалом, чем обычный массив из `char`. Так же более удобен в использовании.  
    Но не смотря на это, большинство библиотек всё равно используют именно `char` для  
    обратной совместимости и меньшей нагрузки на память.  
- ### vector<type>
    Является одним из наиболее удобных способов создания динамического массива, длина и  
    содержимое которого может меняться по ходу выполнения программы.  
    `type` обозначает тип данных, которые хранит вектор, этим типом может быть любой другой тип  
    даже другой вектор:
    ```C++
    std::vector<std::vector<int>> matrix;
    ```
- ### queue<type>
    Очередь (данные подчиняются правилу первый вошёл, первый вышел)  
    `type` обозначает тип данных, которые хранит очередь.  
    Данные "посередине" получить нельзя.  
- ### dequeue<type>
    Двухсторонняя очередь 
    `type` обозначает тип данных, которые хранит очередь.  
    Данные "посередине" получить нельзя.  
- ### stack<type>
    Очередь (данные подчиняются правилу первый вошёл, последний вышел)  
    `type` обозначает тип данных, которые хранит стек.  
    Данные "посередине" получить нельзя.  

> Методы поддерживаемые данными функциями можно легко найти как и в подсказках среды разработки, так в   
> интернете, поэтому тут они описаны не будут

Отдельно стоит выделить пользовательские типы данных, определяемые с помощью `typedef`  
для того чтобы не писать много раз какой-то сложный составной тип, можно задать  
определение сокращения, которое будет использовался в коде.  
> Определение должно быть раньше!

#### Пример:
```C++
typedef std::vector<const unsigned int> my_vector;
// ...some code...
my_vector vec;
```
Это гораздо упрощает код, а так же помогает избежать ошибок связанных   
с возможными неявными преобразованиями типов.