/* Created by BridgeTroll
 * https://bridgetroll.de
 * https://steamcommunity.com/id/Bridge_Troll/
 *
 * Logger.h
 *
 *  Created on: 13.05.2019
 *      Author: bt
 */
#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <Config.h>

namespace util
{

    class Logger
    {

    public:
        explicit Logger(const std::string &className) :
                className(className)
        {
        }

        const std::string LEVEL_ERROR = "ERROR";
        const std::string LEVEL_WARN = "WARN";
        const std::string LEVEL_DEBUG = "DEBUG";
        const std::string LEVEL_INFO = "INFO";

        void error(const std::string& msg);

        void warn(const std::string& msg);

        void debug(const std::string& msg);

        void info(const std::string& msg);

    private:

        void log(const std::string& level, const std::string& msg);

        std::string currentDateTime();

        std::string currentDate();

        std::string className = "Generic";
        std::string path;
    };
}
#endif /* LOGGER_H */

