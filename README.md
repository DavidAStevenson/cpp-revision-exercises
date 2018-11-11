# stack program

This is a C++ program built into a smallish final docker image, via basic multi-stage build

Build it like this. (The first time may take a while as 1.6GB of gcc build env is downloaded)

```
$ docker build -t stack-test .
```

Run it like this.
```
$ docker run --rm --name stack-test-1 stack-app
```

