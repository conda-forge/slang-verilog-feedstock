#include <slang/numeric/SVInt.h>

int main() {
    slang::LiteralBase base;
    return !slang::literalBaseFromChar('h', base) || base != slang::LiteralBase::Hex;
}
