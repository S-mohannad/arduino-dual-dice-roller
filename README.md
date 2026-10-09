# 🎲 Dual Dice Roller Simulator

> **Arduino Project #17** — محاكاة رمي زهرتي نرد عبر Serial Monitor

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

مشروع يحاكي رمي زهرتي نرد باستخدام الأرقام العشوائية:

- يولد رقمين عشوائيين بين 1 و6 في كل دورة
- يطبع الرقمين جنباً إلى جنب في Serial Monitor
- تتكرر العملية كل **ثانيتين** إلى ما لا نهاية

---

## 🔌 Circuit

لا يحتاج مكونات خارجية — يعمل بـ Arduino وحده عبر USB.

---

## 💡 Concepts Used

- `random(min, max)` — توليد رقم عشوائي (الحد الأعلى غير مشمول، لذا `random(1,7)` يعطي 1 إلى 6)
- متغيران عامان `x` و `y` — لتخزين نتيجة كل زهرة
- `Serial.print()` و `Serial.println()` — طباعة الرقمين في نفس السطر
- `delay()` — فترة انتظار ثانيتين بين كل رمية

---

## 📊 Behavior

| الحدث | التفاصيل |
|-------|---------|
| كل ثانيتين | يُولد رقمين بين 1 و6 ويطبعهما |
| المخرجات | مثلاً: `3  5` ثم `1  6` ثم `4  2` ... |
| إلى الأبد | يستمر طوال وقت التشغيل |

---

## 🔗 Code

```cpp
int x = 0, y = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  x = random(1, 7);
  y = random(1, 7);
  Serial.print(x);
  Serial.print("  ");
  Serial.println(y);
  delay(2000);
}
```

---

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل Arduino بالكمبيوتر عبر USB
3. انسخ الكود والصقه في المحرر
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. افتح **Serial Monitor** (9600 baud)
8. شاهد نتيجة رمية جديدة كل ثانيتين

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
