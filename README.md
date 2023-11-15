<div align="center">
  <h1><code>Dinossaron</code></h1>

  <p>
    <strong>🐱‍🐉 Endless running game with a frenzy feline. 🐱‍🐉</strong>
  </p>

  <p>
    <img
      alt="GitHub top language"
      src="https://img.shields.io/github/languages/top/kauefraga/dinossaron"
    />
    <img
      alt="GitHub all releases"
      src="https://img.shields.io/github/downloads/kauefraga/dinossaron/total"
    />
    <a href="https://github.com/kauefraga/dinossaron/commits/main">
      <img
        alt="GitHub last commit"
        src="https://img.shields.io/github/last-commit/kauefraga/dinossaron"
      />
    </a>
    <img
      alt="GitHub LICENSE"
      src="https://img.shields.io/github/license/kauefraga/dinossaron"
    />
  </p>
</div>

> Embark on a endless running game with a frenzy feline. Written in C++, using [Raylib](https://www.raylib.com).

### Features

## ⬇️ Getting Started

### How to install and run it

### How to play

## 💖 Collaborators

Who has contributed to this project:

- [Kauê Fraga Rodrigues](https://github.com/kauefraga) - Game Developer.
- [Aron](https://www.deviantart.com/arorok/gallery) - Artist.

## 📑 Roadmap

Currently, our goal is to release Dinossaron version 1.0.0.

- [x] Create game project with x86 architecture target.
- [x] Initialize window, audio device, set window icon and set target fps to 120fps.
- [x] Implement scene switching.
  - Start scene
  - Credits scene
  - Gameplay scene
- [x] Implement Dinossaron entity.
  - Entity class
  - Dinossaron entity
- [x] Implement background with side-scrolling.
- [x] Implement button component.
- [x] Improve project structure.

```bash
├─bin/ --> build output
├─resources/ --> Sounds, sprite sheets, sprites, ui
└─src/
   ├─scenes/ --> Scene related stuff
   │   ├─entities/ --> Entities definition
   │   ├─ui/ --> UI components
   │   │
   │   ├─Start.h --> Start scene
   │   ├─Credits.h
   │   └─Gameplay.h
   │
   ├─Game.h --> Holds current scene state, scenes instance, current mouse position and constants like GRAVITY
   └─main.cpp --> Entry point and game loop
```

- [ ] Implement window resizing.
  - Fullscreen (default)
  - Fullscreen borderless
  - Windowed
- [ ] Implement score system.
  - Each 100 points, play score sound
  - Save highest score

## 📝 License

This project is licensed under the GPL-3.0 License - See the [LICENSE](https://github.com/kauefraga/dinossaron/blob/main/LICENSE) for more information.
