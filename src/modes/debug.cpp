#include "debug.hpp"
#include "nlohmann/json.hpp"
#include <fstream>
#include <string>

using namespace nlohmann;

void Build(string project, bool allFolder) {
  ifstream pstream;
  pstream.open(project);
  if (pstream.is_open()) {
    json pjson = json::parse(pstream.rdbuf());
    pjson[""];
  }
}
bool Test(string project, bool allFolder) { return true; }