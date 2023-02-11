#include "debug.hpp"
#include "nlohmann/json.hpp"
#include <filesystem>
#include <fstream>
#include <string>

using namespace nlohmann;

void Build(string project, bool allFolder) {
  ifstream pstream;
  pstream.open(project);
  string functions[123];
  if (pstream.is_open()) {
    json pjson = json::parse(pstream.rdbuf());
    pjson[""];
  }
  GetModuleFileName
}
bool Test(string project, bool allFolder) { return true; }