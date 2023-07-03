# C++ (Uroki) 
## *Источник обучающих материаллов [Ссылка](https://www.youtube.com/playlist?list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r)*
## Полное и подробно описание в нутри каждого урока непосредственно. 

<details>
<summary> 
Библиотеки - Примеры, описание.
</summary>


* #include < iostream > стандартная библиотека для началы работы с любым кодом.
* #include < cctype > библиотека для реализации ввода маленьких и больших букы, чтобы небыло разница маленьку букву ввели или большую. 
После подключения библиотекии ввести к переменной toupper, пример переменная (а) - a = toupper(a);
* #include < ctime > библиотека для случайных чисел (рандом), чтобы производилось заполнение случайными данными.
После подключения библиотеки необходимо в коде прописать - srand(time(NULL)); без данной записи
буду заполняться псевдослучайные данные.
* #include < string > библиотека для подключения строк, чтобы можно было рабоать с массивом строк (вместо массива)


</details> 

<details>
<summary> 
Project1 - Основы(Начало) //Основы - Урок 1-2, видео № с 1 по 4.
</summary>

* [Ссылка на видео - 3](https://www.youtube.com/watch?v=ADIhuD_vQ5g&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=3)
* [Ссылка на видео - 4](https://www.youtube.com/watch?v=TQyIJ4xHOEE&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=4)
## Виды коментарий 
* Первый пример как коментировать строчку -
//Виды коментарий - это однострочный 
с помощью (//) мы можем закоментировать строку.
* Второй пример - /* Сдесь закоментированный текс, код, всё что угодно и сколько угодно. */ -
так мы можем закоментировать хоть весь код или длинные предложения, описания.
тобижь мы в нутри (/**/) написали всё что нам необходимо.
## Начальные команды
* Далее создаём(подключаем) стандартную библиотеку #include<iostream>
* using namespace std; пространство, область для работы.
* void main() - начало вход алгоритма
* Ключивые команды перевода на язык и также вывода данных на экран(в консоль, терминал)
* При чтении кода, все строки идут последовательно.
## Горячие клавиши
* Ctrl+f5 запуск проверки работы команд.
* Tab дописывает слова.

</details> 

<details>
<summary> 
Project2 - Escape - последовательности. Как использовать. C++ для начинающих. Урок #3. Видео №5
</summary>

* [Ссылка на видео - 5](https://www.youtube.com/watch?v=DY7p1IDIioM&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=5)
## Более детальные примеры коментарий, а также приминение символов, которые выводят нам данные в терминал.
* \\ Вывести обратную черту \
* \" Вывести двойную кавычку "
* \' Вывести одинарную кавычку '
* \b Удаление последнего выделенного символа
* \n Перейти на начало новой строки
* \t Перейти к существующей позиции табуляции

</details> 

<details>
<summary> 
Project3 - Типы данных в C++. C++ для начинающих, а также переменные. Способы объявления. Правила именования. Урок #4-#5. Видео №6 - 7.
</summary>

* [Ссылка на видео - 6](https://www.youtube.com/watch?v=pwUNLjgw7lY&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=6)
* [Ссылка на видео - 7](https://www.youtube.com/watch?v=nA28o5DMtRc&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=7)
## Какие бывают типы данных, как их объявлять и с ними функционировать..
* Переменная отвечает за область оперативной памяти и там храниться.
* переменная int - цельные числа.
* переменная double - для дробных чисел.
* переменная char - для символов.
* переменная bool - выводит слова.

</details> 

<details>
<summary> 
Project4 - Константы. Ключевое слово const. C++ для начинающих. Урок #6. Видео №8.
</summary>

* [Ссылка на видео - 8](https://www.youtube.com/watch?v=RkrCWn3_p1Y&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=8)
* Константа, это фиксированная и не изменная величина. (пример - дни недели, месяцы в года и т.д.).
* const int - объявление константы, желательно прописывать с большой буквы - пример - const int COUNT_DAYS_IN_WEEK = 7 
(чтобы мы точно понимали для себя что это константа и она не должна меняться)

</details> 

<details>
<summary> 
Project5 - Ввод данных. Cin. Пример. Синтаксис. C++ для начинающих. Урок #7. Видео №9.
</summary>

* [Ссылка на видео - 9](https://www.youtube.com/watch?v=Hkd2r5yEMvc&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=9)
* Команда cin - делает запрос в консолли на ввод данных которые мы ему укажем.
* cin - Vivi - (где Vivi безраницы как написано, это объявление, может быть любое название, к примеру cin - Var, cin - chislo и так далее)

</details>

<details>
<summary> 
Project6 - Операторы. Арифметические операции с числами. C++ для начинающих. Урок #8. Видео №10-11, с разбром домашней работы.
</summary>

* [Ссылка на видео - 10](https://www.youtube.com/watch?v=aA8nhHbrC9Y&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=10)
* [Ссылка на видео - 11](https://www.youtube.com/watch?v=dCFUZ43IL5w&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=11)
## Отператоры и их виды
* Унарные - Унарны с минусом (-) В данном коде унарный оператор меняет значение на минус или если число уже с минусом то на противоположное.
* Бинарные - Бинарные Это операции числовые на счёт сумм или других данных.
* Тернарные

</details>

<details>
<summary> 
Project7 - Инкремент и декремент. Постфиксный и префиксный. Пример. Синтаксис. C++ для начинающих. Урок #9. Видео №12.
</summary>

* [Ссылка на видео - 12](https://www.youtube.com/watch?v=ot4yp_vgT2E&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=12)
## Инкремент и декремент.
* Инкремент (а++) прибавляем +1.
* Декремент (а--) отнимаем 1.
* (++) значит прибавить единицу, а если (--) то уменьшение на еденицу.

</details>

<details>
<summary> 
Project8 - Сокращенные арифметические формы +=, -= и т д. C++ для начинающих. Урок #10. Видео №13.
</summary>

* [Ссылка на видео - 13](https://www.youtube.com/watch?v=id62LvJXK8Q&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=13)
## Примеры компатных форм в замен оригинальных.
* Один из примеров компактной записи - (a += 20;) вместо записи - (a = a +20;) 

</details>

<details>
<summary> 
Project9 - СЛогические операции. Операторы сравнения, равенства, объединения, инверсия. C++ Урок #11. Видео №14.
</summary>

* [Ссылка на видео - 14](https://www.youtube.com/watch?v=vh6E23vvroE&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=14)
# Логические операции.
## 1. Операции сравнения
* (<) - меньше
* (>) - больше
* (<=) - меньше\ровно
* (>=) - больше\ровно
## 2. Операции равенства
* == - равно
* != - не равно
## 3. Логические операторы объединения и отрицательная версия.
* && - и
* || - или
* != - не
## 4. false , true.
* false - обозначение это - 0 (ложь, нет). 
* true - обозначение это - 1 (правда, да).

</details>

<details>
<summary> 
Project10 - If else. Конструкция логического выбора if. Лесенка if - else if. Примеры использования. Урок #12. Видео №15, а также домашка Видео 16. .
</summary>

* [Ссылка на видео - 15](https://www.youtube.com/watch?v=k_YFH3PezqA&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=15)
* [Ссылка на видео - 16](https://www.youtube.com/watch?v=YbWMlAx7PW0&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=16)
## Конструкция логического выбора if
* Лесенка if - else if 
* Переменная bool - может принимать два значения в себя (true и false)

</details>

<details>
<summary> 
Project11 - Switch. Что это. Пример. Синтаксис. Оператор множественного выбора. Урок #13. Видео №17, а также Project11_dz - видео 18.
</summary>

* [Ссылка на видео - 17](https://www.youtube.com/watch?v=Hk4yo4tr5Ts&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=17)
* [Ссылка на видео - 18](https://www.youtube.com/watch?v=Cp2yZxCrqyA&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=18)
## Switch - вместо if - else.
* если задача большая и много условий, то лудше использовать Switch, а если маленькая то лучше использовать if - else.
* Switch удобен для задачть реализации меню
* Switch. Калькулятор. Меню. Домашнее задание. Project11_dz - наглядно показывает метод.

</details>

<details>
<summary> 
Project12 - Циклы. Цикл while. Что это. Что делает. Пример. Синтаксис. Урок #14. - видео 19.
</summary>

* [Ссылка на видео - 19](https://www.youtube.com/watch?v=zPi163Xo4m8&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=19)
* Цикл while - Базовый принцип и его приминение.

</details>

<details>
<summary> 
Project13 - Циклы. Цикл do while. Что это. Что делает. Пример. Синтаксис. Урок #15. - видео 20.
</summary>

* [Ссылка на видео - 20](https://www.youtube.com/watch?v=AFTfqXdrYBQ&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=20)
* Цикл do while - это дополнение, чтобы на экран пользователь при необходимости
получил дополнительную информацию.
* К примеру в цикле мы указли покажи нам всё от 0 до 10, до добавив условие
do while, он покажет нам не до 10, но и само 10 включительно если необходимо.

</details>

<details>
<summary> 
Project14_dz - Работа с циклами. Примеры. Цикл while. Домашнее задание #4. - видео 21.
</summary>

* [Ссылка на видео - 21](https://www.youtube.com/watch?v=BJShopyg4G0&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=21)
* Подробный разбор написания программы с помощью цикла while.

</details>

<details>
<summary> 
Project15_dz - Работа с циклами. Примеры. Цикл Do while. Домашнее задание #5. - видео 22.
</summary>

* [Ссылка на видео - 22](https://www.youtube.com/watch?v=gNoqm6aAzM0&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=22)
* Подробный разбор написания программы с помощью цикла Do while.

</details>

<details>
<summary> 
Project16 - Цикл for. Что это. Что делает. Пример. Синтаксис. Циклы. Урок #16. Видео - 23.
</summary>

* [Ссылка на видео - 23](https://www.youtube.com/watch?v=CJm6o82Vu2g&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=23)
* Цикл for похошь на цикл while. В цикле for уже заложенны условия отработки сразу. А именно:
Сразу объявленна переменная и назначенна ей число (0), далее чтоб условие выполнялось, 
указываеться число (10), и данное число даёт возможность выполнять условие цикла, далее условие i++, 
чтоб цикл небыл бесконечный. В теле цикла по сути ток вывод на консоль указать.(Счётчик) напоминает данный цикл.

</details> 

<details>
<summary> 
Project17 - Цикл for. Фишки. Фичи. Особенности. Несколько переменных. Урок #17. Видео - 24.
</summary>

* [Ссылка на видео - 24](https://www.youtube.com/watch?v=v_ZdslCeRfQ&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=24)
* Переменная i объявляеться в не цикла for для того чтобы другие циклы могли также использовать данную
переменную. Также в цикле for в условии надо удалить её, если мы её объявили в не цикла, но точку с запятой (;)
оставить. - int i = 0; - for (; i < 10; i++);
* Также в цикле for можно ещё добавлять условия, тобижь объявить дополнительную переменную,
Дописать ещё условие и ещё добавить инкримент (Инкремент пример - i++).

</details> 

<details>
<summary> 
Project18 - Ключевое слово break. Оператор break. Описание. Пример. Синтаксис. Урок #18. Видео - 25.
</summary>

* [Ссылка на видео - 25](https://www.youtube.com/watch?v=IYQe1-QsJEs&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=25)
* Принцип действия брейка, мы ему создали условия где он необходим, а именно:
for (int i = 0; ; i++) в данной строке убрав условие к примеру i<10 цикл будет бесконечным.
И чтобы компелятор нас не замучал сообщениями, и вводим функцию if, ставим условие сами, что
когда дойдёт к примеру до числа 5, цикл должен остановиться и завершиться благодаря надписи 
break;. Также, мы можем оставить условие в стро (int i = 0; i < 10 ; i++), где видим что i <10,
но функцией if с указаниме того что i==5 и в прописав break, цикл фор по условию не отработает до 10
а отработает до 5. Данная функция if с направлением break подходит и для цикла while и switch.

</details> 

<details>
<summary> 
Project19 - Ключевое слово continue c++ что это. Оператор continue. Пример. Синтаксис. Урок #19. Видео - 26.
</summary>

* [Ссылка на видео - 26](https://www.youtube.com/watch?v=j1OrjcZyrhg&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=26)
* Добавив условие if (i == 2) выполнениться continue; Что он даёт?
Он даёт возможно продолжить цикл не завершая его, тобижь дойдят до условия, и когда проверит двойку
сработает условие и ключовое слово continue, что даст возможность исключить двойку или же выполнить опеределённое
условие и продолжить цикл дальше.

</details> 

<details>
<summary> 
Project20 - Оператор перехода goto. Когда код становится непонятен даже создателю. Урок #22. Видео - 29.
</summary>

* [Ссылка на видео - 29](https://www.youtube.com/watch?v=aevwBkdG_QE&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=29)
* Что даёт goto? посути переход на другу строчку, а именно. Поставим  goto (link - название любое может быть) 
после первой строчки кода cout << "Один" << endl; то компелятор далее перейдёт на строчку link: пропустив
при этом две строчки кода - cout << "Два" << endl; и cout << "Три" << endl; так как мы указали после них Link.
Как утверждают многие, код goto не нужен и даже опасен, стараться его не использовать.

</details> 

<details>
<summary> 
Project21 - Без этого вы не станете программистом! Найти ошибку в коде. Отладка. Как пользоваться отладчиком Урок #23 Видео - 30.
</summary>

* [Ссылка на видео - 30](https://www.youtube.com/watch?v=_ZairtpcXTs&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=30)
* Обзор важного функционала.

</details> 

</details> 

<details>
<summary> 
Project22 - Project23_dz - то такое вложенный цикл. Вложенная конструкция. C++ для начинающих. Урок #24. Видео - 31 + Домашка 32 .
</summary>

* [Ссылка на видео - 31](https://www.youtube.com/watch?v=HjaCTX4WAmI&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=31)
* [Ссылка на видео - 32](https://www.youtube.com/watch?v=k1s1tnoVH9U&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=32)
* Обзор и приминения цикла for и вложение в него ещё цикла for. + Домашнее задание.

</details>


<details>
<summary> 
Project24 - Что такое массив. Примеры. Теория. Array. Одномерный массив. Синтаксис. C++. Урок #25. Видео - 33.
</summary>

* [Ссылка на видео - 33](https://www.youtube.com/watch?v=GJFqT6Kz9NE&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=33)
* Масив может только из адних данных, тоесть либо цело численный int или дробный dooble и так далее.
Масив не может состоять и из int и из dooble, только чтото одно.
* Примеры его объявление.

</details>

<details>
<summary> 
Project25 - Инициализация массива. Способы. Инициализация массива нулями. C++ для начинающих. Урок #26. - Видео 34.
</summary>

* [Ссылка на видео - 34](https://www.youtube.com/watch?v=7q-SbRdW_24&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=34)

</details>

</details>

<details>
<summary> 
Project26 - Вывод массива. Массивы и циклы. Цикл с массивом. Array c++. C++ для начинающих. Урок #27 - Видео 35.
</summary>

* [Ссылка на видео - 35](https://www.youtube.com/watch?v=gKOgCG1PHKI&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=35)

</details>




