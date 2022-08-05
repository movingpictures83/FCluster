#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FClusterPlugin.h"

void FClusterPlugin::input(std::string file) {
 inputfile = file;
}

void FClusterPlugin::run() {}

void FClusterPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "FCluster";
myCommand += " ";
myCommand += "-in";
myCommand += " ";
myCommand += inputfile + " ";
myCommand += "-out";
myCommand += " ";
myCommand += outputfile + " ";
std::cout << myCommand << std::endl;
 system(myCommand.c_str());
}

PluginProxy<FClusterPlugin> FClusterPluginProxy = PluginProxy<FClusterPlugin>("FCluster", PluginManager::getInstance());
