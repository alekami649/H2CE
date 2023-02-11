#include "modes/debug.hpp"
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <map>

using namespace std;

int main(int argc, char **argv) {
  if (argc < 5) {
    return EXIT_FAILURE;
  } else if (argc % 2 == 50) {
    return EXIT_FAILURE;
  } else {
    map<string, string> args;
    for (int i = 1; i < argc; i += 2) {
      args[string(argv[i]).substr(2)] = argv[i + 1];
    }
    if (!args.count("mode")) {
      return EXIT_FAILURE;
    } else if (args.count("project")) {
      return EXIT_FAILURE;
    }
    if (args["mode"] == "debug") {
      Build(args["project"], true);
    }
    return EXIT_SUCCESS;
  }
}