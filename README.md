# Dragon Quest XI S: Echoes of an Elusive Age Fix
[![Patreon-Button](https://github.com/Lyall/DQXISFix/assets/695941/e620e516-0368-4681-bc1b-d58272284d67)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/DQXISFix/total.svg)](https://github.com/Lyall/DQXISFix/releases)

This is a fix that adds custom resolutions, ultrawide support and more to Dragon Quest XI S: Echoes of an Elusive Age.<br />

## Features
- Custom resolution support.
- Ultrawide/narrow aspect ratio support.
- Correct FOV at any aspect ratio.
- Option to increase gameplay FOV.

## Installation
- Grab the latest release of DQXISFix from [here.](https://github.com/Lyall/DQXISFix/releases)
- Extract the contents of the release zip in to the the game folder. <br />(e.g. "**steamapps\common\DRAGON QUEST XI S**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **DQXISFix.ini** to adjust settings for the fix.

## Known Issues
Please report any issues you see.
This list will contain bugs which may or may not be fixed.

- Some fades to black are not spanned to fill the screen.
- 2D mode is locked to 16:9.

## Screenshots

| ![ezgif-2-555eaa3795](https://github.com/Lyall/DQXISFix/assets/695941/016ae6d9-e8e0-401d-9a93-5c74fd31436e) |
|:--:|
| Gameplay |

## Credits
Thanks to Audioboxer on the WSGF Discord for testing! <br />
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.
