// DataLoadArguments.cpp

#include "DataLoadArguments.h"

namespace utilities
{
    void ParsedDataLoadArguments::AddArgs(CommandLineParser& parser)
    {
        parser.AddOption(
            inputDataFile,
            "inputDataFile", 
            "idf",
            "Path to the input data file",
            "");

        parser.AddOption(
            inputDataFileHasWeights,
            "inputDataFileHasWeights",
            "idfhw",
            "Indicates whether the input data file format specifies a weight per example",
            false);
    }
}