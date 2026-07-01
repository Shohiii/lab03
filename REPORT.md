# Laboratory work III

Данная лабораторная работа посвящена изучению систем автоматизации сборки проекта на примере CMake.

## Задание 1

Вам поручили перейти на систему автоматизированной сборки CMake. Исходные файлы находятся в директории formatter_lib. В этой директории находятся файлы для статической библиотеки formatter. Создайте CMakeList.txt в директории formatter_lib, с помощью которого можно будет собирать статическую библиотеку formatter.

Создан новый репозиторий lab03 на GitHub. Создали formatter.h и formatter.cpp с кодом библиотеки.

### Команды и вывод

Написали CMakeLists.txt для сборки статической библиотеки. Собрали библиотеку через CMake. Получили libformatter.a.

### Команды и вывод

Функция formatter успешно скомпилирована и находится в библиотеке:

```text
nikita@zeqraw:~/lab03/build$ nm formatter_lib/libformatter.a | grep formatter
formatter.cpp.o:
0000000000000000 T _Z9formatterRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
```

## Задание 2
У компании "Formatter Inc." есть перспективная библиотека, которая является расширением предыдущей библиотеки. Т.к. вы уже овладели навыком созданием CMakeList.txt для статической библиотеки formatter, ваш руководитель поручает заняться созданием CMakeList.txt для библиотеки formatter_ex, которая в свою очередь использует библиотеку formatter.

Создали статическую библиотеку formatter. Создали библиотеку-расширение formatter_ex, которая использует formatter. Написали корневой CMakeLists.txt, который собирает всё вместе. Собрали исполняемый файл hello_world, который выводит сообщение в красивой рамке.

### Команды и вывод
Пушим в созданный репозиторий.

## Задание 3
Конечно же ваша компания предоставляет примеры использования своих библиотек. Чтобы продемонстрировать как работать с библиотекой formatter_ex, вам необходимо создать два CMakeList.txt для двух простых приложений: hello_world, которое использует библиотеку formatter_ex; solver, приложение которое использует статические библиотеки formatter_ex и solver_lib.

Создаем библиотеку solver_lib и создаем solver.h; solver.cpp. Создаем CMakeLists.txt для solver_lib. Создаем приложение solver и solver.cpp. Обновляем корневой CMakeLists.txt и собираем проект.

### Команды и вывод
Обновляем Git
nikita@zeqraw:~/lab03/build$ cd ..
nikita@zeqraw:~/lab03$ git add .
nikita@zeqraw:~/lab03$ git commit -m "Add solver_lib and solver application"
[main 9dc73e3] Add solver_lib and solver application
 5 files changed, 68 insertions(+), 20 deletions(-)
 create mode 100644 solver.cpp
 create mode 100644 solver_lib/CMakeLists.txt
nikita@zeqraw:~/lab03$ git push
Enumerating objects: 13, done.
Counting objects: 100% (13/13), done.
Delta compression using up to 4 threads
Compressing objects: 100% (8/8), done.
Writing objects: 100% (8/8), 1.49 KiB | 1.49 MiB/s, done.
Total 8 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Shohiii/lab03.git
   e96fa60..9dc73e3  main -> main
