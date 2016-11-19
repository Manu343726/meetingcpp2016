#include "project.hpp"
#include <reflection/project.hpp>
#include <siplasplas/utility/fusion.hpp>
#include <iostream>

using namespace project;

int main()
{
    Cat{}.talk();
    Dog{}.talk();

    cpp::foreach_type<typename cpp::static_reflection::Class<Dog>::Methods>([](auto type)
    {
        using Method = cpp::meta::type_t<decltype(type)>;

        std::cout << Method::SourceInfo::fullName() << std::endl;
    });
}
