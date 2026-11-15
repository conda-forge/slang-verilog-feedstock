#include <slang/ast/ValuePath.h>
#include <slang/ast/symbols/ClassSymbols.h>
#include <slang/numeric/SVInt.h>

int main() {
    auto volatile increment = &slang::ast::ValuePath::iterator::increment;
    auto volatile dereference = &slang::ast::ClassType::property_iterator::dereference;
    slang::ast::ClassType::property_iterator properties(nullptr);
    if (!increment || !dereference || properties != slang::ast::ClassType::property_iterator())
        return 1;

    slang::LiteralBase base;
    return !slang::literalBaseFromChar('h', base) || base != slang::LiteralBase::Hex;
}
