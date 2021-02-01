
shoppingcart
============
Shopping Cart for Online Shopping

![Build Status](https://mindpowered.dev/assets/images/github-badges/build-passing.svg)

Contents
========

* [Source Code and Documentation](#source-code-and-documentation)
* [Licensing](#licensing)
* [Requirements](#requirements)
* [Installation](#installation)
* [Support](#support)

# Source Code and Documentation
- Source Code: [https://github.com/mindpowered/shopping-cart-cpp](https://github.com/mindpowered/shopping-cart-cpp)
- Documentation: [https://mindpowered.github.io/shopping-cart-cpp](https://mindpowered.github.io/shopping-cart-cpp)

# Licensing
To obtain a version of this package under the MIT License, follow the instructions to [get a license][purchase]. The MIT License has no restrictions on commercial use and permits reuse within proprietary software.

# Requirements
- Bazel - https://www.bazel.build/
- Haxe 4.1.1
- Neko
- hxcpp - https://lib.haxe.org/p/hxcpp/
- g++


Third-party dependencies may have additional requirements.

# Installation
Add rules to WORKSPACE file ...

```
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
  name = 'maglev',
  remote = 'https://github.com/mindpowered/maglev-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'haxecpp',
  remote = 'https://github.com/mindpowered/haxecpp-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'shoppingcart',
  remote = 'https://github.com/mindpowered/shopping-cart-cpp.git',
  branch = 'master',
)
```

Reference dependency in BUILD file ...

```
    deps = [
        ...
        "@shoppingcart//:shoppingcart"
        ...
    ],
```


# Support
We are here to support using this package. If it doesn't do what you're looking for, isn't working, or you just need help, please [Contact us][contact].

There is also a public [Issue Tracker][bugs] available for this package.



[bugs]: https://github.com/mindpowered/shopping-cart-cpp/issues
[contact]: https://mindpowered.dev/support/?ref=shopping-cart-cpp/
[licensing]: https://mindpowered.dev/?ref=shopping-cart-cpp
[purchase]: https://mindpowered.dev/purchase/
