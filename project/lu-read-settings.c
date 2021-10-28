/*
 * The following program solves the linear system Ax=b.
 * The solution is found using LU decomposition of the matrix A.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <stdint.h>
#include <assert.h> 
#include <errno.h>
#include "lu-settings.h"
#include "Yaml.hpp"

using namespace Yaml;

int lu_read_yaml_settings(const char *name, Settings *settings)
{

    Node root;
    try
    {
        Parse(root, name);
    }
    catch (const Exception e)
    {
        std::cout << "Exception " << e.Type() << ": " << e.what() << std::endl;
        return 1;
    }

    std::cout << root["project"].As<std::string>() << std::endl;
    std::cout << root["version"].As<std::string>() << std::endl;
    std::cout << root["env.tmp"].As<std::string>() << std::endl;
    std::cout << root["env.mode"].As<std::string>() << std::endl;
    std::cout << root["data5"].As<std::string>() << std::endl;
    std::cout << root["data6"].As<int>(0) << std::endl;
    std::cout << root["data7"].As<float>(0.0f) << std::endl;

  return 0;

}
