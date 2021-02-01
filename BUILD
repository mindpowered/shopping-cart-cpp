cc_library(
  name = 'shoppingcart',
  visibility = ['//visibility:public'],
  deps = [
    '@haxecpp//:haxecpp',
    '@maglev//:maglev',
    ':libshoppingcart_a',
  ],
  strip_include_prefix = 'include/',
  hdrs = [
    'include/shoppingcart/ShoppingCart.h',
  ] + glob(["include/mindpowered/**/*.h"]),
  linkstatic = 1,
  alwayslink = 1,
  linkopts = ["-pthread"],
)

cc_import(
  name = 'libshoppingcart_a',
  static_library = 'libshoppingcart.a',
  alwayslink = 1,
)

genrule(
  name = 'make_libshoppingcart_a',
  outs = ["libshoppingcart.a"],
  cmd = "export HOME=/root && haxelib setup /root/haxelib && (cd $$(dirname $(location Build.xml)); haxelib run hxcpp Build.xml) && mv $$(dirname $(location Build.xml))/liboutput.a $@ && chmod u+x $(location strip.sh) && $(location strip.sh) $@",
  tools = glob(["*.xml", "*.txt", "*.h", "src/**", "include/**", "strip.sh"]),
)
