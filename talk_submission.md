# talk title

Writing a reflection engine from scratch

# talk description

Type introspection and reflection are powerful features that help
developers to automate the manipulation of user defined types, such as
when doing serialization of an object or binding class methods to external
scripts. The C++ language always lacked this features, while most modern
languages benefit from their capabilities, showing a lack of potential
productivity in the C++ language.

With the current interest of the C++ standardization committee in a static
reflection API for the language, reflection is a hot topic in the C++
circles these days. But reflection implementation is still considered
black magic by most C++ developers, only mastered by wizards working in
the gaming industry.

This talk will present the internals of a C++ reflection system looking at
the implementation of the siplasplas reflection engine, a simple
reflection tool based on C++14 and libclang written as part of an advanced
C++ course of the Complutense University of Madrid.

# talk outline

The goal of this talk is to introduce attendees to the internals of
a simple reflection engine. First we will introduce the basics of how to
dynamically reference entities (functions, fields, etc), then a series of
abstractions to build a *runtime* where we could register and query that
entities.

Finally, the talk will show some examples of the possibilities of
reflection, like serialization of C++ objects, and loading of plugin types
at runtime.

# bio

Manuel Sánchez is a self taugh C++ programmer specialized in template
metaprogramming. Co-organizer of the Madrid C/C++ meetup, he usually gives
advanced C++ courses at the Complutense University of Madrid. Worked for
biicode startup from September 2014 to June 2015, giving technical
assistance to biicode developers, also writing posts on C++
metaprogramming and related topics. Currently works at By Tech, a Spanish
firm specialized in access control systems. Member of the spanish C++
standardization body since February 2016.

More information about Manuel Sánchez in his personal website: http://manu343726.github.io/
