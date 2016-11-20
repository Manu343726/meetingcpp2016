Writing a reflection engine from scratch [![Build Status](https://travis-ci.org/Manu343726/meetingcpp2016.svg?branch=master)](https://travis-ci.org/Manu343726/meetingcpp2016)
========================================

Slides from my [Meeting C++ 2016](https://meetingcpp.com/index.php/mcpp2016.html) talk  
See https://github.com/Manu343726/siplasplas

Contents
--------

 - `talk_submission.md`: The talk submission form
 - `slides.md`: Slides markdown sources
 - `slides.pdf`: Slides in PDF format, generated with [marp](https://yhatt.github.io/marp) (Thanks @foonathan)
 - `project/`: An example reflection project using [siplasplas 0.0.2](https://github.com/Manu343726/siplasplas/releases)

### Talk examples

This github project includes a small cmake project to show how siplasplas works, but during the talk
I shown three examples from the siplasplas project itself:

 - **JSON serialization**: Generic from/to JSON serialization using static reflection.
   See [examples/reflection/static/serialization.cpp](https://github.com/Manu343726/siplasplas/blob/master/examples/reflection/static/serialization.cpp)
 - **Automatic protobuf serialization**: A more complex example of static reflection.
   This one tries to map from a communication model written with [Google Protocol Buffers](https://github.com/google/protobuf)
   to a C++ business data model automatically, using constexpr, static reflection, and template
   metaprogramming. See [examples/reflection/static/protoserialization](https://github.com/Manu343726/siplasplas/tree/master/examples/reflection/static/protoserialization)
 - **Enum introspection**: This example shows how the static reflection API can
   be used to check different properties of an enumeration type (Value by name, name by value,
   i-th value, etc) at compile-time and runtime. See [examples/reflection/static/enum.cpp](https://github.com/Manu343726/siplasplas/blob/master/examples/reflection/static/enum.cpp)
 - **Dynamic library API loading**: How libraries can export API declarations automatically using
   static reflection, and then how that information can be imported at runtime when loading the
   library using dynamic reflection. See [examples/reflection/dynamic/plugin/](https://github.com/Manu343726/siplasplas/tree/master/examples/reflection/dynamic/plugin) and [examples/reflection/dynamic/plugin.cpp](https://github.com/Manu343726/siplasplas/blob/master/examples/reflection/dynamic/plugin.cpp)

License
-------

Code snippets are licensed under the MIT license. Slides and other non-code text contents are licensed under creative commons
