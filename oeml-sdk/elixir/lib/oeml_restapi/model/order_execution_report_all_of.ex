# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule OEML-RESTAPI.Model.OrderExecutionReportAllOf do
  @moduledoc """
  The order execution report message.
  """

  @derive [Poison.Encoder]
  defstruct [
    :"client_order_id_format_exchange",
    :"exchange_order_id",
    :"amount_open",
    :"amount_filled",
    :"status",
    :"time_order",
    :"error_message"
  ]

  @type t :: %__MODULE__{
    :"client_order_id_format_exchange" => String.t,
    :"exchange_order_id" => String.t | nil,
    :"amount_open" => float(),
    :"amount_filled" => float(),
    :"status" => OrdStatus,
    :"time_order" => [[String.t]],
    :"error_message" => String.t | nil
  }
end

defimpl Poison.Decoder, for: OEML-RESTAPI.Model.OrderExecutionReportAllOf do
  import OEML-RESTAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"status", :struct, OEML-RESTAPI.Model.OrdStatus, options)
  end
end
