/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIPositionsApi_H
#define OAI_OAIPositionsApi_H

#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"

#include "OAIMessage.h"
#include "OAIPosition.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList> 
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIPositionsApi : public QObject {
    Q_OBJECT

public:
    OAIPositionsApi(const QString &scheme = "https", const QString &host = "13d16e9d-d8b1-4ef4-bc4a-ed8156b2b159.mock.pstmn.io", int port = 0, const QString &basePath = "", const int timeOut = 0);
    ~OAIPositionsApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setScheme(const QString &scheme);
    void setHost(const QString &host);
    void setPort(int port);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setBasePath(const QString &basePath);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();

    void v1PositionsGet(const QString &exchange_id);

private:
    QString _scheme, _host;
    int _port;
    QString _basePath;
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> defaultHeaders;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;

    void v1PositionsGetCallback(OAIHttpRequestWorker *worker);

signals:

    void v1PositionsGetSignal(QList<OAIPosition> summary);

    void v1PositionsGetSignalFull(OAIHttpRequestWorker *worker, QList<OAIPosition> summary);

    void v1PositionsGetSignalE(QList<OAIPosition> summary, QNetworkReply::NetworkError error_type, QString error_str);

    void v1PositionsGetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif
