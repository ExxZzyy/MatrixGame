﻿Всем привет!

У нас есть немного хороших новостей – недавно мы общались с нашими коллегами из 1С-Софтклаб, и обоюдно пришли к мнению, что пора поделиться с коммьюнити ещё кое-чем, а именно – исходными кодами движка трёхмерных планетарных битв, использовавшегося в КР2, "Перезагрузке", и, разумеется, "Революции"!

Мы делаем это по очень простой причине: по возможности, мы надеемся продлить нормальную жизнь игры в современных окружениях и на современных ОС. Сейчас у нас нет возможности отлавливать каждый баг, который может появиться в будущем – но кто-нибудь толковый в коммьюнити теперь всегда сможет позаботиться о любимой игре, если вдруг случится беда.

В соответствии с разрешением правообладателя, исходные коды непосредственно движка MatrixGame (содержимое директории Programm/MatrixGame) выпускаются как open source, и должны далее и впредь распространяться под **GNU General Public License v2** ([GNU General Public License v2](https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html), [русский перевод](https://www.gnu.org/licenses/old-licenses/gpl-2.0.ru.html)) **или более новой**.

Предлагаемый к загрузке пакет также включает в себя third-party библиотеки, классы и модули другого open source и freeware ПО – такие как libjpg, libpng, zlib, VirtualDub и некоторые другие. Они находятся в директории LIB, распространяются в соответствии с лицензиями и условиями, указанными в их заголовочных файлах – и никто из Elemental Games, Katauri или СНК не претендует на их авторство и любые другие имущественные или исключительные права, а также не может изменять их исходные условия распространения.

Для сборки данного проекта потребуется MS Visual Studio 2010 или 2012 (на более новых сборку, откровенно говоря, не тестировали), а также изрядная доля терпения. В зависимости от таргета для сборки, на выходе должен получиться либо исполняемый файл, который можно запускать самостоятельно, либо библиотека для подключения непосредственно к движку КР2.

Благодарить за подобный исход событий следует непосредственно Михаила Белова (он же [Bercut](https://snk-games.net/forums/memberlist.php?mode=viewprofile&u=59)), который последние пять лет без устали тянет на себе проект, а также Дениса Мальцева со стороны Софтклаба, содействовавшего в получении разрешения на публикацию.

([оригинальный пост на форуме СНК](https://snk-games.net/forums/viewtopic.php?p=179826), автор [ru_maniac](https://snk-games.net/forums/memberlist.php?mode=viewprofile&u=2))