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

import * as models from './models';

/**
 * Order time in force options are documented in the separate section: <a href=\"#oeml-order-params-tif\">OEML / Starter Guide / Order parameters / Time in force</a> 
 */
    /**
    * Order time in force options are documented in the separate section: <a href=\"#oeml-order-params-tif\">OEML / Starter Guide / Order parameters / Time in force</a> 
    */
export enum TimeInForce {
    GoodTillCancel = <any> 'GOOD_TILL_CANCEL',
    GoodTillTimeExchange = <any> 'GOOD_TILL_TIME_EXCHANGE',
    GoodTillTimeOms = <any> 'GOOD_TILL_TIME_OMS',
    FillOrKill = <any> 'FILL_OR_KILL',
    ImmediateOrCancel = <any> 'IMMEDIATE_OR_CANCEL'
}
