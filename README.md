<h1><p align="center"> 
Fast Initialization Library(FIL) for STM32 microcontrollers
</p></h1>

<h2><p align="center"> 
Установка библиотеки FIL для среды программирования EmBitz для микроконтроллеров STM32.
</p></h2>

В этом репозитории содержится инструкция по установке библиотеки [FIL](https://github.com/Casonka/FIL) в среду разработки EmBitz. Инструкция актуальна для версии программного обеспечения не ниже 2.30. Также рекомендуется установить вспомогательное программное обеспечение: 
- [Git](https://git-scm.com/book/ru/v2/%D0%92%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D0%B5-%D0%A3%D1%81%D1%82%D0%B0%D0%BD%D0%BE%D0%B2%D0%BA%D0%B0-Git) - система контроля версий, необходима для взаимодействия и загрузки файлов библиотеки; 
- Вспомогательный скрипт EBlink для программирования и отладки микроконтроллеров STM32 (с версии 2.30 устанавливается вместе с оригинальным ПО EmBitz).

Установка среды программирования EmBitz не составит никаких сложностей, выполняется с легкостью и максимальным удобством. Выбирайте нужную место для установки и соглашайтесь с контекстным меню, предлагающим инсталяцию скрипта EBlink.

> Для жителей Российской Федерации и Китая, к сожалению, был закрыт доступ на [официальный сайт](https://www.embitz.org/) программы EmBitz. При необходимости и возникающих трудностях с доступом, обращайтесь к [автору](https://github.com/Casonka) проекта за копией.

## Создание проекта

Данный подраздел предназначен для начинающих, приведена более подробная инструкция по установке библиотеки от начала создания проекта до непосредственного использования. 

1) Создайте новый проект. Для этого выберите раздел "File->New->Project" для создания нового проекта. При выборе архитектуры, необходимо выбрать ST-micro ARM.

<p align="center"><img width=45% src=https://github.com/Casonka/FIL-EmBitzDeploy/blob/main/images/1.png> <img width=30% src=https://github.com/Casonka/FIL-EmBitzDeploy/blob/main/images/2.jpg></p>
<p align="center"></p>

Необходимо указать название проекта, выбирайте какое вам необходимо
<p align="center"><img width=35% src=https://github.com/Casonka/FIL-EmBitzDeploy/blob/main/images/3.png></p>

Далее, предстоит выбрать линейку и модель микроконтроллера. Для примера, выберем линейку F4, линейку моделей F401

<p align="center"><img width=36% src=https://github.com/Casonka/FIL-EmBitzDeploy/blob/main/images/4.png> <img width=35% src=https://github.com/Casonka/FIL-EmBitzDeploy/blob/main/images/5.png></p>

Выберите модель контроллера STM32F401CC. Для демонстрации были убраны другие периферийные библиотеки.

<p align="center"><img width=40% src=https://github.com/Casonka/FIL-EmBitzDeploy/blob/main/images/6.png></p>

2) Теперь, когда имеется тестовый созданный проект, необходимо выполнить загрузку кода библиотеки FIL. Для этого 

```sh
cd YOUR FOLDER
git clone https://github.com/Casonka/FIL-EmbitzDeploy.git & rmdir /q images & rmdir README.md
```
