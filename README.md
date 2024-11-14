
# Zer VoiceMod

A multiplateform soundboard app written in c++.




## Installation


#### OS X with Homebrew

Install Homebrew if it's not installed yet
```bash
  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

Install portaudio from Homebrew
```bash
  brew install portaudio
```



#### Linux
```bash
  sudo apt install portaudio
```

#### Windows

```powershell
To figure it out...
```
## Roadmap

- Add GUI interface with Qt

- Create static directory for sound file


## Authors

- [@LincolnKermit](https://www.github.com/lincolnkermit)

## Documentation

Sound engine service for the soundboard app
```
audio-process-service-sb/*
```

Audio file uploaded by the user
```
audio-static-file/*
```

Config directory
```
audio-process-service-sb/config/*
```
