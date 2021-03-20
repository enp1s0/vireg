# vireg

Output contents in a register of vim to stdout.
This program reads `.viminfo` to get the contents of registers.

## Installation
1. Clone and build vireg
```bash
git clone https://github.com/enp1s0/vireg
cd vireg
make
```

2. Append a path to `vireg/bin` to `$PATH`

3. (Optional) Set the path to `.viminfo`
```bash
export VIREG_VIMINFOPATH=/path/to/.viminfo
```

Default path is `$HOME/.viminfo`

## Usage
- You can get the contents of noname register with
```
vireg
```
.

- You can get the contents of register X with
```
vireg X
```
.

## License

MIT
