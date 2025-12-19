export module foo;

import std;

export namespace bar {
void baz() {
  std::println("Function bar::baz() from module foo");
}
}  // namespace foo