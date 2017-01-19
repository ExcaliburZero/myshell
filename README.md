# Myshell
Myshell is a simple shell written in C.

```
$ myshell
> echo 123
123
> ls
LICENSE  main.c  main.o  Makefile  myshell  README.md
> fakecommand 123
Unknown command: fakecommand
> exit
```

## Development
### Compiling
To compile Myshell, clone the repo, cd into the main directory of the project, and run make.

```
$ git clone https://github.com/ExcaliburZero/myshell.git
$ cd myshell
$ make
```

### Documentation
To generate the documentation for Myshell, cd into the main directory of the project and run the `docs` make target.

```
$ make docs
```

## Licensing
The source code of Myshell is available under the [MIT License](https://opensource.org/licenses/MIT), see the `LICENSE` file for more information.
