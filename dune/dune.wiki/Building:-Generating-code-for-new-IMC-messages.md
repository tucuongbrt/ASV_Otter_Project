Clone the IMC repository inside the DUNE build directory. Change the branch to the one intended. 
The imc folder must be named "IMC".

Then, in the build directory run:
```sh
make imc
```

You should then commit all the changed files observing the rules in [[Git: Commit Messages]].

### It didn't work?
If it didn't seem to work, please check on your terminal if _python_ command exists. 

If not, please install Python, or if is already installed as _python3_, fix this by running
```sh
sudo apt install python-is-python3
```

After installing _python-is-python3_, rebuild it, now with python:
```sh
make rebuild_cache && make
```