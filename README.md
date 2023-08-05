<p align="center">
    <img src="https://github.com/MultiTheFranky/lince-reforged/raw/master/extras/logo_lince_ca.png" width="480">
</p>

<p align="center">
    <a href="https://github.com/MultiTheFranky/lince-reforged/releases/latest">
        <img src="https://img.shields.io/badge/Version-0.1.0-blue.svg?style=flat-square" alt="lince-reforged Version">
    </a>
    <a href="https://github.com/MultiTheFranky/lince-reforged/issues">
        <img src="https://img.shields.io/github/issues-raw/MultiTheFranky/lince-reforged.svg?style=flat-square&label=Issues" alt="lince-reforged Issues">
    </a>
    <a href="https://github.com/MultiTheFranky/lince-reforged/releases">
        <img src="https://img.shields.io/github/downloads/MultiTheFranky/lince-reforged/total.svg?style=flat-square&label=Downloads" alt="lince-reforged Downloads">
    </a>
    <a href="https://github.com/MultiTheFranky/lince-reforged/actions/workflows/ci.yml">
        <img src="https://github.com/MultiTheFranky/lince-reforged/actions/workflows/ci.yml/badge.svg" alt="CI">
    </a>
    <a href="https://github.com/MultiTheFranky/lince-reforged/actions/workflows/release.yml">
        <img src="https://github.com/MultiTheFranky/lince-reforged/actions/workflows/release.yml/badge.svg" alt="Release">
    </a>
    <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/MultiTheFranky/lince-reforged">
</p>

<p align="center">
    <sup><strong>Requires the latest version of <a href="https://github.com/CBATeam/CBA_A3/releases">CBA A3</a> and <a href="https://github.com/acemod/ACE3/releases">ACE3</a>.<br/></strong></sup>
</p>

# Lince for Arma 3

## Requirements

-   Git (https://git-scm.com/downloads)

### Extensions

-   Golang compiler (https://golang.org/dl/) 1.19
-   TDD gcc compiler (https://sourceforge.net/projects/tdm-gcc/)

## Setup

1. Clone the repository

```bash
 git clone https://github.com/MultiTheFranky/lince-reforged.git lince
```

2. Open the folder

```bash
 cd lince
```

3. Edit the setup (setup.bat) script

4. Edit the DISK, the ARMA3_DIR, P_DRIVE_DIR and the PROJECT_NAME variables as you want and save

```bash
 DISK="C:"
 ARMA3_DIR="C:\Program Files (x86)\Steam\steamapps\common\Arma 3"
 P_DRIVE_DIR="C:\Users\Public\Documents\Arma 3 - Other Profiles"
 PROJECT_NAME="lince"
```

5. Execute the setup script

```bash
 .\setup.bat
```

6. Delete the cloned repository

```bash
 cd ..
 rmdir /s /q lince
```

7. Go to `P:\z\lince` or `Arma3Projects\lince` and execute the debug script

```bash
 .\debug.bat
```

## Development

```bash
 .\debug.bat
```

Execute

```sqf
[] call ACE_PREP_RECOMPILE;
```

every time that you want to recompile the functions.
Or you can setup a keybind on custom action 20 on Arma 3.
