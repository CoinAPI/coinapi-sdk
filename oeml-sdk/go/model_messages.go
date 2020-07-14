/*
 * OMS - REST API
 *
 * OMS Project
 *
 * API version: v1
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// Messages struct for Messages
type Messages struct {
	// Type of message
	Type string `json:"type,omitempty"`
	// Exchange name
	ExchangeId string `json:"exchange_id,omitempty"`
	// Message
	Message string `json:"message,omitempty"`
}