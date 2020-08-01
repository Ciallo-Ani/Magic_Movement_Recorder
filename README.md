# Ubuntu

> Installing Dependencies

```
sudo apt install git cmake mingw-w64
```

> Installing Magic_Recode

```
git clone https://github.com/qwertyuiop3/Magic_Recode.git --recursive

cd Magic_Recode

./Build.sh
```

# Arch

> Installing Dependencies

```
sudo pacman -S git fakeroot binutils make gcc cmake

git clone https://aur.archlinux.org/yay.git

cd yay

makepkg -is

yay mingw-w64-gcc-bin
```

> Installing Magic_Recode

```
git clone https://github.com/qwertyuiop3/Magic_Recode.git --recursive

cd Magic_Recode

./Build.sh
```

# Windows

> Installing Dependencies

```
Git

MinGW-W64
```

> Installing Magic_Recode

```
git clone https://github.com/qwertyuiop3/Magic_Recode.git --recursive

cd Magic_Recode

Build.bat
```
