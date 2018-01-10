/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "ConfigurationReader.hpp"

YAML::Node ConfigurationReader::loadYamlFile(const char* file)
{
    return YAML::LoadFile(file);
}

bool ConfigurationReader::getStringParam(
    std::string& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId)
{
    try
    {
        outValue = cfgNode[name].as<std::string>();
    }
    catch (const YAML::BadConversion& e)
    {
        std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId << std::endl;
        return false;
    }

    return true;
}

bool ConfigurationReader::getIntParam(
    int& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId)
{
    try
    {
        outValue = cfgNode[name].as<int>();
    }
    catch (const YAML::BadConversion& e)
    {
        std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId << std::endl;
        return false;
    }

    return true;
}

bool ConfigurationReader::getDoubleParam(
    double& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId)
{
    try
    {
        outValue = cfgNode[name].as<double>();
    }
    catch (const YAML::BadConversion& e)
    {
        std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId << std::endl;
        return false;
    }

    return true;
}

bool ConfigurationReader::getBoolParam(
    bool& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId)
{
    try
    {
        outValue = cfgNode[name].as<bool>();
    }
    catch (const YAML::BadConversion& e)
    {
        std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId << std::endl;
        return false;
    }

    return true;
}

bool ConfigurationReader::getVectorParam(
    std::vector<double>& outValue, size_t size, YAML::Node& cfgNode, const std::string& name, const std::string& labelId)
{
    if (!cfgNode[name].IsSequence() || cfgNode[name].size() != size)
    {
        std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId 
            << ", expecting vector of size " << size << std::endl;
        return false;
    }
    else
    {
        outValue.reserve(size);
        for (size_t i = 0; i < size; i++)
        {
            try
            {
                outValue[i] = cfgNode[name][i].as<double>();
            }
            catch (const YAML::BadConversion& e)
            {
                std::cerr << "vizkit3d_c: wrong element \"" << name << "\" in " << labelId 
                    << ", expecting double" << std::endl;
                return false;
            }
        }
    }

    return true;
}

bool ConfigurationReader::getColorParam(
    QColor& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId)
{
    try
    {
        auto value = cfgNode[name];
        if (!value.IsSequence() || value.size() != 3)
        {
            std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId << " plugin, "
                "expecting color as RGB list" << std::endl;
            return false;
        }
        else
        {
            int r = value[0].as<int>();
            int g = value[1].as<int>();
            int b = value[2].as<int>();
            
            if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
            {
                std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId << " plugin, "
                    "expecting RGB values between 0 and 255" << std::endl;
                return false;
            }
            else
            {
                outValue = QColor(r, g, b);
            }
        }                    
    }
    catch (const YAML::BadConversion& e)
    {
        std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId << std::endl;
        return false;
    }

    return true;
}

bool ConfigurationReader::getManipulatorParam(
    vizkit3d::CAMERA_MANIPULATORS& outValue, 
    YAML::Node& cfgNode, const std::string& name, const std::string& labelId)
{
    outValue = vizkit3d::DEFAULT_MANIPULATOR;
    
    try
    {
        auto value = cfgNode[name].as<std::string>();

        if (!value.compare("DEFAULT_MANIPULATOR"))
        {
            outValue = vizkit3d::DEFAULT_MANIPULATOR;
        }
        else if (!value.compare("FIRST_PERSON_MANIPULATOR"))
        {
            outValue = vizkit3d::FIRST_PERSON_MANIPULATOR;
        }
        else if (!value.compare("FLIGHT_MANIPULATOR"))
        {
            outValue = vizkit3d::FLIGHT_MANIPULATOR;
        }
        else if (!value.compare("ORBIT_MANIPULATOR"))
        {
            outValue = vizkit3d::ORBIT_MANIPULATOR;
        }
        else if (!value.compare("TERRAIN_MANIPULATOR"))
        {
            outValue = vizkit3d::TERRAIN_MANIPULATOR;
        }
        else if (!value.compare("TRACKBALL_MANIPULATOR"))
        {
            outValue = vizkit3d::TRACKBALL_MANIPULATOR;
        }
        else if (!value.compare("MULTI_TOUCH_TRACKBALL_MANIPULATOR"))
        {
            outValue = vizkit3d::MULTI_TOUCH_TRACKBALL_MANIPULATOR;
        }
        else if (!value.compare("NODE_TRACKER_MANIPULATOR"))
        {
            outValue = vizkit3d::NODE_TRACKER_MANIPULATOR;
        }
        else if (!value.compare("NO_MANIPULATOR"))
        {
            outValue = vizkit3d::NO_MANIPULATOR;
        }
        else
        {
            std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId << 
                ", expected one of the following: "
                "DEFAULT_MANIPULATOR, "
                "FIRST_PERSON_MANIPULATOR, "
                "FLIGHT_MANIPULATOR, "
                "ORBIT_MANIPULATOR, "
                "TERRAIN_MANIPULATOR, "
                "TRACKBALL_MANIPULATOR, "
                "MULTI_TOUCH_TRACKBALL_MANIPULATOR, "
                "NODE_TRACKER_MANIPULATOR, "
                "NO_MANIPULATOR "
                << std::endl;

                return false;
        }
        
    }
    catch (const YAML::BadConversion& e)
    {
        std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId << std::endl;
        return false;
    }

    return true;
}

bool ConfigurationReader::getQStringParam(
    QString& outValue, YAML::Node& cfgNode, const std::string& name, const std::string& labelId)
{
    try
    {
        std::string strVal = cfgNode[name].as<std::string>();
        outValue = QString::fromStdString(strVal);
    }
    catch (const YAML::BadConversion& e)
    {
        std::cerr << "vizkit3d_c: wrong value for \"" << name << "\" in " << labelId << std::endl;
        return false;
    }

    return true;
}

bool ConfigurationReader::getFrameParam(
    QString& outName, QString& outBase, QVector3D& outPosition, QQuaternion& outRotation,
    YAML::Node& cfgNode, const std::string& labelId)
{
    bool success = true;
    std::string errLabel = labelId + std::string(" frame");
    std::vector<double> v;
    
    // Set default values for base and transform
    outBase = "world_osg";
    outPosition = QVector3D(0.0, 0.0, 0.0);
    outRotation = QQuaternion(1.0, 0.0, 0.0, 0.0);
    
    for(auto it = cfgNode.begin(); it != cfgNode.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        std::string strVal;
        
        if (!key.compare("name"))
        {
            success &= getStringParam(strVal, cfgNode, key, errLabel);
            if (success)
            {
                outName = QString::fromStdString(strVal);
            }
        }
        else if (!key.compare("base"))
        {
            success &= getStringParam(strVal, cfgNode, key, errLabel);
            if (success)
            {
                outBase = QString::fromStdString(strVal);
            }
        }
        else if (!key.compare("position"))
        {
            success &= getVectorParam(v, 3, cfgNode, key, errLabel);
            if (success)
            {
                outPosition = QVector3D(v[0], v[1], v[2]);
            }
        }
        else if (!key.compare("rotation"))
        {
            success &= getVectorParam(v, 4, cfgNode, key, errLabel);
            if (success)
            {
                outRotation = QQuaternion(v[0], v[1], v[2], v[3]);
            }
        }
        else
        {
            printUnknownParamMsg(key, errLabel);
        }
    }
    
    return success;
}

void ConfigurationReader::printUnknownParamMsg(const std::string& name, const std::string& labelId)
{
    std::cerr << "vizkit3d_c: unknown configuration parameter \"" << name << "\" in " << labelId << std::endl;
}

void ConfigurationReader::printMsg(const std::string& msg)
{
    std::cerr << "vizkit3d_c: " << msg << std::endl;
}

void ConfigurationReader::printMsg(const std::string& msg, const std::string& param)
{
    std::cerr << "vizkit3d_c: " << msg << param << std::endl;
}
