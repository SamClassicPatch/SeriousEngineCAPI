# Serious Engine C API

This repository contains C bindings for the original `Engine.dll` of the **Serious Sam - The Second Encounter** game.

They provide `C API` with stable **ABI** to the engine and enable its usage by other languages and newer C++ compilers.

The bindings are mostly complete, but lack some areas, like *Network* subsystem.

Building
--------

This repository is primarily intended to be built with the *Microsoft Visual C++ 6.0* against the *Serious Sam - The Second Encounter SDK v1.07*.

However, this is not a hard requirement - the project could be adapted for the newer version of the engine (i.e. 1.10) and built with other compiler, but some source files contain assembly patches and extensions for the original `Engine.dll` that would need to be made optional.

Prebuilt binary
---------------

Prebuilt `SeriousEngineCAPI.dll` and `SeriousEngineCAPI.lib` are included in the repository.

They were built with the *Microsoft Visual C++ 6.0* against the *Serious Sam - The Second Encounter SDK v1.07*.
