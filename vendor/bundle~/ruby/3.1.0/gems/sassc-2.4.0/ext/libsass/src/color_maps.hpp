
#ifndef SASS_COLOR_MAPS_H
#define SASS_COLOR_MAPS_H

#include <map>
#include "ast.hpp"

namespace Sass {

  namespace ColorNames
  {
    extern const char aliceblue[];
    extern const char antiquewhite[];
    extern const char cyan[];
    extern const char aqua[];
    extern const char aquamarine[];
    extern const char azure[];
    extern const char beige[];
    extern const char bisque[];
    extern const char black[];
    extern const char blanchedalmond[];
    extern const char blue[];
    extern const char blueviolet[];
    extern const char brown[];
    extern const char burlywood[];
    extern const char cadetblue[];
    extern const char chartreuse[];
    extern const char chocolate[];
    extern const char coral[];
    extern const char cornflowerblue[];
    extern const char cornsilk[];
    extern const char crimson[];
    extern const char darkblue[];
    extern const char darkcyan[];
    extern const char darkgoldenrod[];
    extern const char darkgray[];
    extern const char darkgrey[];
    extern const char darkgreen[];
    extern const char darkkhaki[];
    extern const char darkmagenta[];
    extern const char darkolivegreen[];
    extern const char darkorange[];
    extern const char darkorchid[];
    extern const char darkred[];
    extern const char darksalmon[];
    extern const char darkseagreen[];
    extern const char darkslateblue[];
    extern const char darkslategray[];
    extern const char darkslategrey[];
    extern const char darkturquoise[];
    extern const char darkviolet[];
    extern const char deeppink[];
    extern const char deepskyblue[];
    extern const char dimgray[];
    extern const char dimgrey[];
    extern const char dodgerblue[];
    extern const char firebrick[];
    extern const char floralwhite[];
    extern const char forestgreen[];
    extern const char magenta[];
    extern const char fuchsia[];
    extern const char gainsboro[];
    extern const char ghostwhite[];
    extern const char gold[];
    extern const char goldenrod[];
    extern const char gray[];
    extern const char grey[];
    extern const char green[];
    extern const char greenyellow[];
    extern const char honeydew[];
    extern const char hotpink[];
    extern const char indianred[];
    extern const char indigo[];
    extern const char ivory[];
    extern const char khaki[];
    extern const char lavender[];
    extern const char lavenderblush[];
    extern const char lawngreen[];
    extern const char lemonchiffon[];
    extern const char lightblue[];
    extern const char lightcoral[];
    extern const char lightcyan[];
    extern const char lightgoldenrodyellow[];
    extern const char lightgray[];
    extern const char lightgrey[];
    extern const char lightgreen[];
    extern const char lightpink[];
    extern const char lightsalmon[];
    extern const char lightseagreen[];
    extern const char lightskyblue[];
    extern const char lightslategray[];
    extern const char lightslategrey[];
    extern const char lightsteelblue[];
    extern const char lightyellow[];
    extern const char lime[];
    extern const char limegreen[];
    extern const char linen[];
    extern const char maroon[];
    extern const char mediumaquamarine[];
    extern const char mediumblue[];
    extern const char mediumorchid[];
    extern const char mediumpurple[];
    extern const char mediumseagreen[];
    extern const char mediumslateblue[];
    extern const char mediumspringgreen[];
    extern const char mediumturquoise[];
    extern const char mediumvioletred[];
    extern const char midnightblue[];
    extern const char mintcream[];
    extern const char mistyrose[];
    extern const char moccasin[];
    extern const char navajowhite[];
    extern const char navy[];
    extern const char oldlace[];
    extern const char olive[];
    extern const char olivedrab[];
    extern const char orange[];
    extern const char orangered[];
    extern const char orchid[];
    extern const char palegoldenrod[];
    extern const char palegreen[];
    extern const char paleturquoise[];
    extern const char palevioletred[];
    extern const char papayawhip[];
    extern const char peachpuff[];
    extern const char peru[];
    extern const char pink[];
    extern const char plum[];
    extern const char powderblue[];
    extern const char purple[];
    extern const char red[];
    extern const char rosybrown[];
    extern const char royalblue[];
    extern const char saddlebrown[];
    extern const char salmon[];
    extern const char sandybrown[];
    extern const char seagreen[];
    extern const char seashell[];
    extern const char sienna[];
    extern const char silver[];
    extern const char skyblue[];
    extern const char slateblue[];
    extern const char slategray[];
    extern const char slategrey[];
    extern const char snow[];
    extern const char springgreen[];
    extern const char steelblue[];
    extern const char tan[];
    extern const char teal[];
    extern const char thistle[];
    extern const char tomato[];
    extern const char turquoise[];
    extern const char violet[];
    extern const char wheat[];
    extern const char white[];
    extern const char whitesmoke[];
    extern const char yellow[];
    extern const char yellowgreen[];
    extern const char rebeccapurple[];
    extern const char transparent[];
  }

  namespace Colors {
    extern const Color_RGBA aliceblue;
    extern const Color_RGBA antiquewhite;
    extern const Color_RGBA cyan;
    extern const Color_RGBA aqua;
    extern const Color_RGBA aquamarine;
    extern const Color_RGBA azure;
    extern const Color_RGBA beige;
    extern const Color_RGBA bisque;
    extern const Color_RGBA black;
    extern const Color_RGBA blanchedalmond;
    extern const Color_RGBA blue;
    extern const Color_RGBA blueviolet;
    extern const Color_RGBA brown;
    extern const Color_RGBA burlywood;
    extern const Color_RGBA cadetblue;
    extern const Color_RGBA chartreuse;
    extern const Color_RGBA chocolate;
    extern const Color_RGBA coral;
    extern const Color_RGBA cornflowerblue;
    extern const Color_RGBA cornsilk;
    extern const Color_RGBA crimson;
    extern const Color_RGBA darkblue;
    extern const Color_RGBA darkcyan;
    extern const Color_RGBA darkgoldenrod;
    extern const Color_RGBA darkgray;
    extern const Color_RGBA darkgrey;
    extern const Color_RGBA darkgreen;
    extern const Color_RGBA darkkhaki;
    extern const Color_RGBA darkmagenta;
    extern const Color_RGBA darkolivegreen;
    extern const Color_RGBA darkorange;
    extern const Color_RGBA darkorchid;
    extern const Color_RGBA darkred;
    extern const Color_RGBA darksalmon;
    extern const Color_RGBA darkseagreen;
    extern const Color_RGBA darkslateblue;
    extern const Color_RGBA darkslategray;
    extern const Color_RGBA darkslategrey;
    extern const Color_RGBA darkturquoise;
    extern const Color_RGBA darkviolet;
    extern const Color_RGBA deeppink;
    extern const Color_RGBA deepskyblue;
    extern const Color_RGBA dimgray;
    extern const Color_RGBA dimgrey;
    extern const Color_RGBA dodgerblue;
    extern const Color_RGBA firebrick;
    extern const Color_RGBA floralwhite;
    extern const Color_RGBA forestgreen;
    extern const Color_RGBA magenta;
    extern const Color_RGBA fuchsia;
    extern const Color_RGBA gainsboro;
    extern const Color_RGBA ghostwhite;
    extern const Color_RGBA gold;
    extern const Color_RGBA goldenrod;
    extern const Color_RGBA gray;
    extern const Color_RGBA grey;
    extern const Color_RGBA green;
    extern const Color_RGBA greenyellow;
    extern const Color_RGBA honeydew;
    extern const Color_RGBA hotpink;
    extern const Color_RGBA indianred;
    extern const Color_RGBA indigo;
    extern const Color_RGBA ivory;
    extern const Color_RGBA khaki;
    extern const Color_RGBA lavender;
    extern const Color_RGBA lavenderblush;
    extern const Color_RGBA lawngreen;
    extern const Color_RGBA lemonchiffon;
    extern const Color_RGBA lightblue;
    extern const Color_RGBA lightcoral;
    extern const Color_RGBA lightcyan;
    extern const Color_RGBA lightgoldenrodyellow;
    extern const Color_RGBA lightgray;
    extern const Color_RGBA lightgrey;
    extern const Color_RGBA lightgreen;
    extern const Color_RGBA lightpink;
    extern const Color_RGBA lightsalmon;
    extern const Color_RGBA lightseagreen;
    extern const Color_RGBA lightskyblue;
    extern const Color_RGBA lightslategray;
    extern const Color_RGBA lightslategrey;
    extern const Color_RGBA lightsteelblue;
    extern const Color_RGBA lightyellow;
    extern const Color_RGBA lime;
    extern const Color_RGBA limegreen;
    extern const Color_RGBA linen;
    extern const Color_RGBA maroon;
    extern const Color_RGBA mediumaquamarine;
    extern const Color_RGBA mediumblue;
    extern const Color_RGBA mediumorchid;
    extern const Color_RGBA mediumpurple;
    extern const Color_RGBA mediumseagreen;
    extern const Color_RGBA mediumslateblue;
    extern const Color_RGBA mediumspringgreen;
    extern const Color_RGBA mediumturquoise;
    extern const Color_RGBA mediumvioletred;
    extern const Color_RGBA midnightblue;
    extern const Color_RGBA mintcream;
    extern const Color_RGBA mistyrose;
    extern const Color_RGBA moccasin;
    extern const Color_RGBA navajowhite;
    extern const Color_RGBA navy;
    extern const Color_RGBA oldlace;
    extern const Color_RGBA olive;
    extern const Color_RGBA olivedrab;
    extern const Color_RGBA orange;
    extern const Color_RGBA orangered;
    extern const Color_RGBA orchid;
    extern const Color_RGBA palegoldenrod;
    extern const Color_RGBA palegreen;
    extern const Color_RGBA paleturquoise;
    extern const Color_RGBA palevioletred;
    extern const Color_RGBA papayawhip;
    extern const Color_RGBA peachpuff;
    extern const Color_RGBA peru;
    extern const Color_RGBA pink;
    extern const Color_RGBA plum;
    extern const Color_RGBA powderblue;
    extern const Color_RGBA purple;
    extern const Color_RGBA red;
    extern const Color_RGBA rosybrown;
    extern const Color_RGBA royalblue;
    extern const Color_RGBA saddlebrown;
    extern const Color_RGBA salmon;
    extern const Color_RGBA sandybrown;
    extern const Color_RGBA seagreen;
    extern const Color_RGBA seashell;
    extern const Color_RGBA sienna;
    extern const Color_RGBA silver;
    extern const Color_RGBA skyblue;
    extern const Color_RGBA slateblue;
    extern const Color_RGBA slategray;
    extern const Color_RGBA slategrey;
    extern const Color_RGBA snow;
    extern const Color_RGBA springgreen;
    extern const Color_RGBA steelblue;
    extern const Color_RGBA tan;
    extern const Color_RGBA teal;
    extern const Color_RGBA thistle;
    extern const Color_RGBA tomato;
    extern const Color_RGBA turquoise;
    extern const Color_RGBA violet;
    extern const Color_RGBA wheat;
    extern const Color_RGBA white;
    extern const Color_RGBA whitesmoke;
    extern const Color_RGBA yellow;
    extern const Color_RGBA yellowgreen;
    extern const Color_RGBA rebeccapurple;
    extern const Color_RGBA transparent;
  }

  const Color_RGBA* name_to_color(const char*);
  const Color_RGBA* name_to_color(const sass::string&);
  const char* color_to_name(const int);
  const char* color_to_name(const Color_RGBA&);
  const char* color_to_name(const double);

}

#endif
