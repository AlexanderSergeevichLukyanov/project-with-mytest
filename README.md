#Пример проект с mytest
##Об этом мини-демо-проекте
+ В `include` лежит list_heap.h
+ В `mytest` - библиотека тестов
+ В `src`:
  + В папке `tests` тестовые файлы
  + В папке `src` - файлы программы (реальный main, например)
##Запуск с mytest
Из папки `project-with-mytest`: `g++ src/tests/tests_list_heap.cpp mytest/src/mytest.cpp mytest/src/mytest_main.cpp -I include -I mytest/include`
##Синтаксис
###Объявление
+`TEST_CASE(std::string name)` - имя нового `TEST_CASE`;
###Внутри
+`CHECK(bool x)` проверка справедливости `x`. Хотя бы один неверный `CHECK` - неверен весь `TEST_CASE`
+`CHECK_TIME(std::string mark)` - проверка сколько времени прошло с начала работы TEST_CASE
###Правила
+ никаких `int main()` при запуске теста (он в `mytest_main.cpp`)!
+ нельзя 2 `TEST_CASE` на одной строке!
+ можно несколько `CHECK` на одной строке 
###Вывод
+ Вывод идёт в `cerr`. Досточно просто запустить Ваш `exe`;
+ Неправильные `CHECK` отображаются красным цветом, `TEST_CASE` - тёмно-жёлтым
+ Статистика в самом низу