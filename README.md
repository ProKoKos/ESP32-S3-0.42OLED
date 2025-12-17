# ESP32-S3-0.42OLED

Пример кода для работы с OLED дисплеем 0.42" (72x40) на ESP32-S3.

## Характеристики

- **Плата**: ESP32-S3-0.42OLED
- **Дисплей**: 0.42" OLED, 72x40 пикселей, SSD1306 драйвер
- **Интерфейс**: I2C (Hardware)
- **GPIO пины**: 
  - SDA: GPIO 48
  - SCL: GPIO 47

## Установка

1. Установите [PlatformIO](https://platformio.org/)
2. Клонируйте репозиторий:
```bash
git clone https://github.com/yourusername/ESP32-S3-0.42OLED.git
cd ESP32-S3-0.42OLED
```

3. Установите зависимости:
```bash
pio lib install
```

4. Соберите и загрузите:
```bash
pio run -t upload
```

5. Откройте монитор:
```bash
pio device monitor
```

## Использование

Код инициализирует дисплей и выводит "Hello World!".

Библиотека U8g2 автоматически установится через PlatformIO (указана в `platformio.ini`).

## Структура проекта

```
.
├── platformio.ini    # Конфигурация PlatformIO
├── src/
│   └── main.cpp      # Основной код
└── README.md         # Этот файл
```

## Примечания

- Убедитесь, что USB драйвер установлен для ESP32-S3
- Для загрузки прошивки может потребоваться нажать кнопку RESET на плате
- Скорость монитора: 115200 baud

## Лицензия

MIT

