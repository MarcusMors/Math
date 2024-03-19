#include <console/application.h>


int main(int argc, char * argv[])
{
    Console::Application app(argc, argv);

    app.setApplicationName("ruffini");
    app.setApplicationUsage("ruffini <command> [options]");
    app.setApplicationVersion("1.0.0");
    app.setAutoPrintHelp(true);

    app.setApplicationDescription("Decompose polinomios through the ruffini method");

    // app.addCommand(new ExampleCommand);

    return app.run();
}