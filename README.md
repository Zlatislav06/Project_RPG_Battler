# ⚔️ RPG Text-Based Battler (C++)

Конзолна ролева игра (RPG), изградена изцяло на C++. Проектът демонстрира стабилно прилагане на принципите на Обектно-ориентираното програмиране (ООП) и управлението на паметта в гейм девълъпмънта.

## 🚀 Ключови функционалности
* **Бойна система (Turn-Based Combat):** Имплементирана поредова бойна система между играча и врагове с различни статистики.
* **Архитектура на класовете:** Използване на базови и наследствени класове за различните типове герои (напр. Warrior, Mage) и врагове.
* **Динамичен баланс:** Изчисление на щети, критични удари и мана базирано на формули в реално време.

## 🛠️ Използвани технологии и концепции
* **Език на програмиране:** C++ (ISO C++17 / C++20)
* **ООП Принципи:** Наследяване, Енкапсулация и Полиморфизъм.
* **Управление на паметта:** Динамично заделяне на обекти, предотвратяване на memory leaks (работа с указатели / smart pointers).
* **Структури от данни:** Използване на `std::vector` за управление на инвентар или вълни от врагове.

## 💻 Как изглежда играта (Скрийншот)
<img width="1358" height="277" alt="image" src="https://github.com/user-attachments/assets/2e7e38ad-a682-4f84-8871-438ebac0ef87" />
<img width="1362" height="146" alt="image" src="https://github.com/user-attachments/assets/953e9788-a3ea-47dd-9175-c619975f7741" />
<img width="1360" height="237" alt="image" src="https://github.com/user-attachments/assets/61f5d91a-1811-4a11-a7b6-7929a3c6809e" />
<img width="1353" height="117" alt="image" src="https://github.com/user-attachments/assets/e89253cc-25c5-4204-809b-ff316b256c7e" />
<img width="1355" height="273" alt="image" src="https://github.com/user-attachments/assets/3d76039c-8577-4df2-99a6-fec41d395ac2" />
<img width="1353" height="228" alt="image" src="https://github.com/user-attachments/assets/6b4e8b37-d3ea-4bae-b8db-8de9f4aa0dbd" />
<img width="1358" height="603" alt="image" src="https://github.com/user-attachments/assets/267e48d8-01f8-4c8f-9e53-93409d15ea86" />
<img width="1351" height="656" alt="image" src="https://github.com/user-attachments/assets/0e5b49fa-c4a6-4242-bd8e-0ef4181793ea" />
<img width="1350" height="537" alt="image" src="https://github.com/user-attachments/assets/534f3ad3-e3d4-460a-98a2-23dc49bf0f63" />
<img width="1358" height="445" alt="image" src="https://github.com/user-attachments/assets/ec052220-24f2-4943-9bcf-d90045e8d0b8" />
<img width="1347" height="577" alt="image" src="https://github.com/user-attachments/assets/eab90fbd-5085-4323-a514-6a9e560dda41" />


## ⚙️ Как се стартира
1. Клонирайте репозиторито.
2. Отворете проекта във Visual Studio или го компилирайте през терминал:
   ```bash
   g++ main.cpp -o RpgGame
   ./RpgGame
   ```
