## example-vscode-cpp

Example project for VSCode using Devcontainers for C/C++.
See Google Slides presentation [in Portuguese](https://docs.google.com/presentation/d/16Ls0adVYOygetNxCL3n7wOyIiMGIwbzFTCC2mnkxJaQ/edit?usp=sharing).

If not using devcontainers, then:

1. Install basic Microsoft C/C++ extension `ms-vscode.cpptools-extension-pack` and allow it on configuration `.vscode/settings.json`:
    * `"C_Cpp.intelliSenseEngine": "default",`
1. Install cpplint extension `mine.cpplint`
1. Install catch2 tests extension `matepek.vscode-catch2-test-adapter`

If testing is desired, just update CMakeLists and make `BUILD_TESTING` to `ON`.
If external fmt library is desired, just update CMakeLists and make `USE_EXTERNAL_FMT` to `ON`.

## Using cxxbuild project

The easiest way to build this is to just use [cxxbuild project](https://github.com/manydeps/cxxbuild):

```
python3 cxxbuild.py
```

## LICENSE

MIT License
