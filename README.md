# Dragon Quest XI S: Echoes of an Elusive Age Fix
[![Patreon-Button](https://raw.githubusercontent.com/Lyall/DQXISFix/refs/heads/master/.github/Patreon-Button.png)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/DQXISFix/total.svg)](https://github.com/Lyall/DQXISFix/releases)

This is a fix that adds custom resolutions, ultrawide support and more to Dragon Quest XI S: Echoes of an Elusive Age.<br />

If you are interested in a technical breakdown of how I made this fix, [check it out on my Patreon.](https://www.patreon.com/posts/dragon-quest-xi-102796530?utm_medium=clipboard_copy&utm_source=copyLink&utm_campaign=postshare_creator&utm_content=join_link)

## Features
- Custom resolution support.
- Ultrawide/narrow aspect ratio support.
- Correct FOV at any aspect ratio.
- Option to increase gameplay FOV.
- Centred 16:9 HUD.

## Installation
- Grab the latest release of DQXISFix from [here.](https://github.com/Lyall/DQXISFix/releases)
- Extract the contents of the release zip in to the the game folder. 
(e.g. "**steamapps\common\DRAGON QUEST XI S**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **DQXISFix.ini** to adjust settings for the fix.

## Known Issues
Please report any issues you see.
This list will contain bugs which may or may not be fixed.

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
[safetyhook](https://github.com/cursey/safetyhook) for hooking.<br />
[Dumper-7](https://github.com/Encryqed/Dumper-7) for dumping the SDK.
