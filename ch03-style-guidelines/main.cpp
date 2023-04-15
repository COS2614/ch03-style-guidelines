#include <QtWidgets>

class Customer
{
public:
    enum Status
    {
        Active,
        Inactive
    };

    Customer(const QString& name, Status status) : m_name(name), m_status(status) {}

    QString name() const { return m_name; }
    void setName(const QString& name) { m_name = name; }

    Status status() const { return m_status; }
    void setStatus(Status status) { m_status = status; }

private:
    QString m_name;
    Status m_status;
};

const QString GREETING = "Hello, world!";
const int MAX_RETRIES = 3;
const char* APP_NAME = "MyApp";
#define DEBUG_ENABLED

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QLabel label;
    label.setText(GREETING);
    label.show();

    Customer customer("John Doe", Customer::Active);
    qDebug() << "Customer name: " << customer.name() << ", status: " << customer.status();

    for (int i = 0; i < MAX_RETRIES; ++i)
    {
        qDebug() << "Retrying...";
    }

    qDebug() << "Running " << APP_NAME;

#ifdef DEBUG_ENABLED
    qDebug() << "Debug mode enabled";
#endif

    return app.exec();
}
