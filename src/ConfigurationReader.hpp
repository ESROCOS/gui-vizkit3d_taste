/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef CONFIGURATIONREADER_HPP
#define CONFIGURATIONREADER_HPP

#include <string>
#include <QColor>
#include "yaml-cpp/yaml.h"
#include "vizkit3d/Vizkit3DWidget.hpp"

// Helper class to read configuration parameters
class ConfigurationReader
{
public:
    // Load a YAML file: throws YAML exceptions
    static YAML::Node loadYamlFile(const char* file);
    
    // Getter methods, if parameter read fails they print message and return false
    static bool getStringParam(
        std::string& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId);

    static bool getIntParam(
        int& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId);

    static bool getDoubleParam(
        double& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId);

    static bool getBoolParam(
        bool& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId);

    static bool getVectorParam(
        std::vector<double>& outValue, size_t size, YAML::Node& cfgNode, const std::string& name, const std::string& labelId);

    static bool getColorParam(
        QColor& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId);

    static bool getManipulatorParam(
        vizkit3d::CAMERA_MANIPULATORS& outValue, 
        YAML::Node& cfgNode, const std::string& name, const std::string& labelId);

    static bool getQStringParam(
        QString& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId);

    // Read frame configuration
    // inOutName is the frame name, it's overwritten if found in the file
    // The remaining output parameters are set to a default value if not found in the file
    // (outBase="world_osg", outPosition=[0 0 0], outRotation=[1 0 0 0])
    static bool getFrameParam(
        QString& inOutName, QString& outBase, QVector3D& outPosition, QQuaternion& outRotation,
        YAML::Node& cfgNode, const std::string& labelId);

    // Print a standar error or info messages
    static void printUnknownParamMsg(const std::string& name, const std::string& labelId);
    static void printMsg(const std::string& msg);
    static void printMsg(const std::string& msg, const std::string& param);
};


#endif //CONFIGURATIONREADER_HPP
